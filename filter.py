#!/usr/bin/python3

import subprocess

# Add comments for all changes
# Use library information to fix types
# Build into single decompile, filter recompile, analyze script
    # On compilation, open vim to errors for manual fixing
# Iterate error and code deletion
# Show iterating code deletion using library it doesn't know
# Figure out what libraries to add

global code

def main():
    #read_file("test_decomp.c")
    read_file("grep.c")
    fix_types()
    fix_utypes()
    filter_functions()
    filter_structs()
    filter_typedefs() # This needs to replace not filter
    filter_comments()
    filter_library_calls() # This needs to be automated
    filter_random() # Needs to be more robust
    #filter_structs()
    #filter_functions()
    #compile-delete-loop()
    filter_whitespace()
    add_libraries()
    #print_code()
    output_code()
    recompile()

def add_libraries():
    code.insert(0, "#include <stdlib.h>")
    code.insert(0, "#include <stdio.h>")
    code.insert(0, "#include <strings.h>")

def filter_random():
    global code

    filter_whitespace()

    print("")
    print("Filtering randoms")

    temp = []

    i = 0
    while i < len(code):
        if "FUN" in code[i] and "{" in code[i+1] and "0x0" in code[i+2] and "(*" in code[i+2] and "return;" in code[i+3] and "}" in code[i+4]:
            print("[*] Removing strange function pointer return")
            i += 5
        else:
            temp.append(code[i])
            i += 1
    code = temp

    temp = []
    i = 0
    for line in code:
        if "__isoc99_scanf" in line:
            var = line[line.index(","):line.index(");")]
            print("Value is: " + str(var))
            temp.append("scanf(" + var[1:] + ");")
        else:
            temp.append(line)
    code = temp


def filter_library_calls():
    print("")
    print("Filtering library call functions")
    filter_function("puts")
    filter_function("free")
    filter_function("putchar")
    filter_function("strlen")
    filter_function("malloc")
    filter_function("realloc")
    filter_function("__isoc99_scanf")

def fix_utypes():
    fix_type("uint", "int")
    fix_type("ulong", "long")
    fix_type(" true ", " 1 ")
    fix_type(" false ", " 0 ")
    fix_type("code *", "*fun_ptr")

def fix_types(): # Add comments describing fixes
    global code

    print("Fixing undefined types")
    i = 0

    for line in code:
        if "typedef" in line:
            old = str(line.split(" ")[-1].strip(";"))
            new = str(" ".join(line.split(" ")[1:-3]))

            print("[*] Replacing " + old + " with " + new)
            fix_type(old + " ", new + " ")
            fix_type("(" + old + ")", "(" + new + ")")

            i += 1
        elif "eh_frame_hdr" in line:
            code = code[i:]
            break

def fix_type(old, new):
    global code

    temp = []

    for line in code:
        temp.append(line.replace(old, new))

    code = temp

def filter_functions():
    print("")
    print("Filtering functions")
    filter_function("_init")
    filter_function("printf")
    filter_function("__cxa_finalize")
    filter_function("_start")
    filter_function("deregister_tm_clones")
    filter_function("register_tm_clones")
    filter_function("frame_dummy")
    filter_function("__libc_csu_init")
    filter_function("__do_global_dtors_aux")
    filter_function("__libc_csu_fini")
    filter_function("_fini")
    #filter_function("__stack_chk_fail")

def filter_structs():
    print("")
    print("Filtering structs")
    filter_struct("eh_frame_hdr")
    filter_struct("fde_table_entry")
    filter_struct("Elf_ProgramHeaderType")
    filter_struct("Elf64_Phdr")
    filter_struct("Elf_SectionHeaderType")
    filter_struct("Elf64_Shdr")
    filter_struct("Elf64_DynTag")
    filter_struct("Elf64_Dyn")
    filter_struct("Elf64_Sym")
    filter_struct("Elf64_Rela")
    filter_struct("Elf64_Ehdr")
    filter_struct("evp_pkey_ctx_st")

def filter_typedefs():
    global code

    temp = []
    for i in range(0, len(code)):
        if "typedef struct" not in code[i]:
            temp.append(code[i])
    code = temp

def filter_function(name):
    global code
    print("[*] Removing function " + name)

    found = False
    for i in range(0, len(code)):
        if name in code[i] and "{" in code[i+2]:
            found = True
            break
    if found:
        k = 0
        j = i + 3
        for j in range(i+3, len(code)):
            if "{" in code[j]:
                k += 1
            if "}" in code[j]:
                if k == 0:
                    break
                else:
                    k -= 1

        #print("Removed: " + str(code[i:j]))
        temp1 = code[:i]
        temp2 = code[j+1:]
        code = temp1 + temp2

def filter_struct(name):
    global code
    print("[*] Removing struct " + name)

    for i in range(0, len(code)):
        if name in code[i] and "{" in code[i]:
            break
    k = 0
    for j in range(i+1, len(code)):
        if "{" in code[j]:
            k += 1
        if "}" in code[j]:
            if k == 0:
                break
            else:
                k -= 1

    #print("Removed: " + str(code[i:j]))
    temp1 = code[:i]
    temp2 = code[j+1:]
    code = temp1 + temp2

def filter_comments():
    global code

    temp = []
    for i in range(0, len(code)):
        if "//" not in code[i]:
            temp.append(code[i])
    code = temp

def filter_whitespace():
    global code

    temp = []
    for i in range(0, len(code)):
        if code[i] != "":
            temp.append(code[i])
        if code[i] == "}":
            temp.append("")
    code = temp

def read_file(name):
    global code
    arr = ""
    with open(name, "r") as f:
        arr = f.readlines()
    arr2 = []
    for line in arr:
        arr2.append(line.replace("\n", ""))
    code = arr2

def print_code():
    global code
    print("="*80)
    for line in code:
        print(line)
    print("="*80)

def output_code():
    global code
    print("")
    print("Saving code to file: output_decomp.c")
    with open("output_decomp.c", "w") as f:
        for line in code:
            f.write(line + "\n")
    print("done")

def recompile():
    result = subprocess.run(["gcc", "output_decomp.c", "-o", "output_recomp"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    print(result.stdout)
    errors = []
    warnings = []
    for line in result.stderr.decode().split("\n"):
        if "output" in line and "error" in line:
            #errors.append(line[line.find(" "):])
            errors.append(line)
        if "output" in line and "warning" in line:
            warnings.append(line)
    
    errors.sort(key=lambda x: x[x.find(" "):])

    for line in errors:
        print(line)

    print("")
    print("Found " + str(len(warnings)) + " warnings")
    print("Found " + str(len(errors)) + " errors")

main()

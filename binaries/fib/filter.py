#!/usr/bin/python3

def main():
    text = ""
    with open("fib_decomp.c") as f:
        text = f.read()

    text = text.split("\n")
    i = 0
    for line in text:
        if "void frame_dummy(void)" in line:
            break
        i += 1
    text = text[i+8:]

    j = 0
    for line in text:
        if "void __libc_csu_init(" in line:
            break
        j += 1
    text = text[:j-2]

    text2 = []

    for line in text:
        temp = line
        temp = temp.replace("uint", "int")
        temp = temp.replace("ulong", "long")
        temp = temp.replace("undefined8", "int")
        text2.append(temp)

    with open("fib_filtered.c", "w") as f:
        f.write("\n".join(text2))


    print("\n".join(text2))



main()

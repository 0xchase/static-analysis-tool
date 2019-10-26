typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ulong size_t;

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef enum Elf64_DynTag {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00100710(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00100807)
// WARNING: Removing unreachable block (ram,0x00100813)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100858)
// WARNING: Removing unreachable block (ram,0x00100864)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7697 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_7697 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 fib(void)

{
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_1c = 0;
  local_18 = 1;
  printf("First %d terms of Fibonacci series are:\n",0x1e);
  local_10 = 0;
  while ((int)local_10 < 0x1e) {
    if ((int)local_10 < 2) {
      local_14 = local_10;
    }
    else {
      local_14 = local_18 + local_1c;
      local_1c = local_18;
      local_18 = local_14;
    }
    printf("%d\n",(ulong)local_14);
    local_10 = local_10 + 1;
  }
  return 0;
}



void arith(void)

{
  printf("Sum = %d\n",10);
  printf("Difference = %d\n",0);
  printf("Multiplication = %d\n",0x19);
  printf((char *)0x3ff0000000000000,"Division = %.2f\n");
  return;
}



undefined8 conv(void)

{
  long in_FS_OFFSET;
  uint local_1c;
  int local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts("Enter an integer in decimal number system");
  __isoc99_scanf(&DAT_00101172,&local_1c);
  printf("%d in binary number system is:\n",(ulong)local_1c);
  local_18 = 0x1f;
  while (-1 < local_18) {
    local_14 = (int)local_1c >> ((byte)local_18 & 0x1f);
    if ((local_14 & 1) == 0) {
      putchar(0x30);
    }
    else {
      putchar(0x31);
    }
    local_18 = local_18 + -1;
  }
  putchar(10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



undefined8 binarySearch(void)

{
  long in_FS_OFFSET;
  uint local_1c0;
  uint local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  uint local_1a8 [102];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts("Enter number of elements");
  __isoc99_scanf(&DAT_00101172,&local_1c0);
  printf("Enter %d integers\n",(ulong)local_1c0);
  local_1b8 = 0;
  while (local_1b8 < (int)local_1c0) {
    __isoc99_scanf(&DAT_00101172,local_1a8 + (long)local_1b8,(long)local_1b8 * 4);
    local_1b8 = local_1b8 + 1;
  }
  puts("Enter value to find");
  __isoc99_scanf(&DAT_00101172,&local_1bc);
  local_1b4 = 0;
  local_1b0 = local_1c0 - 1;
  local_1ac = local_1b0;
  do {
    local_1ac = local_1ac / 2;
    if (local_1b0 < local_1b4) {
LAB_00100c5b:
      if (local_1b0 < local_1b4) {
        printf("Not found! %d isn\'t present in the list.\n",(ulong)local_1bc);
      }
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return 0;
    }
    if ((int)local_1a8[local_1ac] < (int)local_1bc) {
      local_1b4 = local_1ac + 1;
    }
    else {
      if (local_1a8[local_1ac] == local_1bc) {
        printf("%d found at location %d.\n",(ulong)local_1bc,(ulong)(local_1ac + 1));
        goto LAB_00100c5b;
      }
      local_1b0 = local_1ac + -1;
    }
    local_1ac = local_1b0 + local_1b4;
  } while( true );
}



undefined8 stringSort(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  char local_169;
  int local_168;
  int local_164;
  undefined8 local_158 [14];
  char local_e8 [112];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0xd;
  puVar3 = local_158;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puts("Enter some text");
  __isoc99_scanf(&DAT_00101232,local_e8);
  sVar1 = strlen(local_e8);
  local_168 = 0;
  while (local_168 < (int)sVar1) {
    *(int *)((long)local_158 + (long)(int)(char)(local_e8[local_168] + -0x61) * 4) =
         *(int *)((long)local_158 + (long)(int)(char)(local_e8[local_168] + -0x61) * 4) + 1;
    local_168 = local_168 + 1;
  }
  local_164 = 0;
  local_169 = 'a';
  while (local_169 < '{') {
    local_168 = 0;
    while (local_168 < *(int *)((long)local_158 + (long)((int)local_169 + -0x61) * 4)) {
      local_78[local_164] = local_169;
      local_164 = local_164 + 1;
      local_168 = local_168 + 1;
    }
    local_169 = local_169 + '\x01';
  }
  local_78[local_164] = '\0';
  puts(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



undefined8 heapTest(void)

{
  char cVar1;
  undefined8 *__ptr;
  char *__ptr_00;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  __ptr = (undefined8 *)malloc(0xf);
  *__ptr = 0x6c6169726f747574;
  *(undefined4 *)(__ptr + 1) = 0x696f7073;
  *(undefined2 *)((long)__ptr + 0xc) = 0x746e;
  *(undefined *)((long)__ptr + 0xe) = 0;
  printf("String = %s,  Address = %u\n",__ptr,__ptr);
  __ptr_00 = (char *)realloc(__ptr,0x19);
  uVar2 = 0xffffffffffffffff;
  pcVar3 = __ptr_00;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (ulong)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(__ptr_00 + (~uVar2 - 1)) = 0x6d6f632e;
  (__ptr_00 + (~uVar2 - 1))[1] = 0;
  printf("String = %s,  Address = %u\n",__ptr_00,__ptr_00);
  free(__ptr_00);
  return 0;
}



void structTest(void)

{
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined8 local_b6;
  undefined local_ae;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined2 local_70;
  undefined local_6e;
  uint local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0x6172676f72502043;
  local_e0 = 0x6e696d6d;
  local_dc = 0x67;
  local_b6 = 0x696c41206168754e;
  local_ae = 0;
  local_84 = 0x6172676f72502043;
  local_7c = 0x755420676e696d6d;
  local_74 = 0x69726f74;
  local_70 = 0x6c61;
  local_6e = 0;
  local_20 = 0x631caf;
  printf("Book 1 title : %s\n",&local_e8);
  printf("Book 1 author : %s\n",&local_b6);
  printf("Book 1 subject : %s\n",&local_84);
  printf("Book 1 book_id : %d\n",(ulong)local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 main(void)

{
  arith();
  fib();
  conv();
  binarySearch();
  stringSort();
  heapTest();
  structTest();
  return 0;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}



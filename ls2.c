typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
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

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct stat stat, *Pstat;

typedef ulong __dev_t;

typedef ulong __ino_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef __time_t time_t;

typedef int __clockid_t;

typedef __clockid_t clockid_t;

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone * __timezone_ptr_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1454 _union_1454, *P_union_1454;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

typedef void (* __sighandler_t)(int);

typedef union _union_1438 _union_1438, *P_union_1438;

typedef struct _struct_1439 _struct_1439, *P_struct_1439;

typedef struct _struct_1440 _struct_1440, *P_struct_1440;

typedef struct _struct_1441 _struct_1441, *P_struct_1441;

typedef struct _struct_1442 _struct_1442, *P_struct_1442;

typedef struct _struct_1443 _struct_1443, *P_struct_1443;

typedef struct _struct_1444 _struct_1444, *P_struct_1444;

typedef int __pid_t;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

typedef long __clock_t;

struct _struct_1444 {
    long si_band;
    int si_fd;
};

struct _struct_1443 {
    void * si_addr;
};

struct _struct_1442 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct _struct_1441 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct __sigset_t {
    ulong __val[128];
};

struct _struct_1440 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1439 {
    __pid_t si_pid;
    __uid_t si_uid;
};

union _union_1438 {
    int _pad[124];
    struct _struct_1439 _kill;
    struct _struct_1440 _timer;
    struct _struct_1441 _rt;
    struct _struct_1442 _sigchld;
    struct _struct_1443 _sigfault;
    struct _struct_1444 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1438 _sifields;
};

union _union_1454 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1454 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef long __jmp_buf[8];

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct _IO_FILE FILE;

typedef uint wint_t;

typedef struct __sigset_t sigset_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef int __int32_t;

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char * pw_name;
    char * pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef int nl_item;

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef struct __dirstream DIR;

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union _union_27 _union_27, *P_union_27;

union _union_27 {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union _union_27 __value;
};

typedef struct __mbstate_t mbstate_t;

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

typedef struct group group, *Pgroup;

struct group {
    char * gr_name;
    char * gr_passwd;
    __gid_t gr_gid;
    char * * gr_mem;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00103770(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__int32_t ** __ctype_toupper_loc(void)

{
  __int32_t **pp_Var1;
  
  pp_Var1 = __ctype_toupper_loc();
  return pp_Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __uflow(_IO_FILE *param_1)

{
  int iVar1;
  
  iVar1 = __uflow(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = sigprocmask(__how,__set,__oset);
  return iVar1;
}



void __snprintf_chk(void)

{
  __snprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = raise(__sig);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = localtime_r(__timer,__tp);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



void __fpending(void)

{
  __fpending();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = isatty(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int iswcntrl(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswcntrl(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int wcswidth(wchar_t *__s,size_t __n)

{
  int iVar1;
  
  iVar1 = wcswidth(__s,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = localeconv();
  return plVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
  size_t sVar1;
  
  sVar1 = mbstowcs(__pwcs,__s,__n);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = readlink(__path,__buf,__len);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = clock_gettime(__clock_id,__tp);
  return iVar1;
}



void textdomain(void)

{
  textdomain();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = getpwuid(__uid);
  return ppVar1;
}



void bindtextdomain(void)

{
  bindtextdomain();
  return;
}



void dcgettext(void)

{
  dcgettext();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = __ctype_get_mb_cur_max();
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __lxstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __lxstat(__ver,__filename,__stat_buf);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void getopt_long(void)

{
  getopt_long();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = mbrtowc(__pwc,__s,__n,__p);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = getgrgid(__gid);
  return pgVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __overflow(_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __overflow(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}



void fgetfilecon(void)

{
  fgetfilecon();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = lseek(__fd,__offset,__whence);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



void __strtoul_internal(void)

{
  __strtoul_internal();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = fnmatch(__pattern,__name,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fscanf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = getcwd(__buf,__size);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = strspn(__s,__accept);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = _setjmp(__env);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs_unlocked(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs_unlocked(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



void lgetfilecon(void)

{
  lgetfilecon();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = dirfd(__dirp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = getpwnam(__name);
  return ppVar1;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigemptyset(__set);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = getgrnam(__name);
  return pgVar1;
}



void getfilecon(void)

{
  getfilecon();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void tzset(void)

{
  tzset();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fileno(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t tcgetpgrp(int __fd)

{
  __pid_t _Var1;
  
  _Var1 = tcgetpgrp(__fd);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = readdir(__dirp);
  return pdVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int wcwidth(wchar_t __c)

{
  int iVar1;
  
  iVar1 = wcwidth(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(__item);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = ungetc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __fxstat(int __ver,int __fildes,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __fxstat(__ver,__fildes,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = mktime(__tp);
  return tVar1;
}



void __freading(void)

{
  __freading();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite_unlocked(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fwrite_unlocked(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * stpncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = stpncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fdopen(__fd,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



void __printf_chk(void)

{
  __printf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t timegm(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = timegm(__tp);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = strftime(__s,__maxsize,__format,__tp);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = mempcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void error(void)

{
  error();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = strtoul(__nptr,__endptr,__base);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t wcstombs(char *__s,wchar_t *__pwcs,size_t __n)

{
  size_t sVar1;
  
  sVar1 = wcstombs(__s,__pwcs,__n);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t getxattr(char *__path,char *__name,void *__value,size_t __size)

{
  ssize_t sVar1;
  
  sVar1 = getxattr(__path,__name,__value,__size);
  return sVar1;
}



void freecon(void)

{
  freecon();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gethostname(char *__name,size_t __len)

{
  int iVar1;
  
  iVar1 = gethostname(__name,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigismember(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigismember(__set,__signo);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void __fprintf_chk(void)

{
  __fprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush_unlocked(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush_unlocked(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mbsinit(mbstate_t *__ps)

{
  int iVar1;
  
  iVar1 = mbsinit(__ps);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int iswprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswprint(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigaddset(__set,__signo);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__int32_t ** __ctype_tolower_loc(void)

{
  __int32_t **pp_Var1;
  
  pp_Var1 = __ctype_tolower_loc();
  return pp_Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



void __sprintf_chk(void)

{
  __sprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00103e90(ulong param_1,FILE *param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  FILE *__stream;
  void **__ptr;
  long lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *__s1;
  undefined8 *puVar8;
  long *plVar9;
  void *__ptr_00;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *__s;
  byte *pbVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  uint *puVar16;
  char *__s1_00;
  undefined **ppuVar17;
  long in_FS_OFFSET;
  bool bVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined8 local_80;
  undefined8 local_78;
  byte *local_60;
  undefined8 local_58;
  char *local_50;
  ushort local_43;
  undefined local_41;
  char *local_40;
  
  bVar19 = 0;
  param_1 = param_1 & 0xffffffff;
  local_80._0_4_ = (int)param_1;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  FUN_00111fd0(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain(0x117d7b,"/usr/share/locale");
  textdomain(0x117d7b);
  exit_failure = 2;
  FUN_00116340(FUN_0010cca0);
  DAT_00321210 = 0;
  DAT_003212b8 = 1;
  DAT_00321370 = 0x8000000000000000;
  DAT_00321380 = (void **)0x0;
  DAT_00321378 = 0xffffffffffffffff;
  DAT_003212d8 = 0;
  if (ls_mode == 2) {
    DAT_00321338 = 2;
    FUN_001135b0(0,7);
  }
  else {
    if (ls_mode == 3) {
      DAT_00321338 = 0;
      FUN_001135b0(0,7);
    }
    else {
      if (ls_mode != 1) {
                    // WARNING: Subroutine does not return
        abort();
      }
      iVar6 = isatty(1);
      if (iVar6 == 0) {
        DAT_00321338 = 1;
      }
      else {
        DAT_00321338 = 2;
        FUN_001135b0(0,3);
        DAT_003212d8 = 1;
      }
    }
  }
  DAT_00321334 = 0;
  DAT_00321330 = 0;
  DAT_0032132f = 0;
  DAT_0032132d = 0;
  DAT_0032132c = '\0';
  DAT_00321314 = 0;
  DAT_003212fc = 0;
  DAT_003212f8 = 1;
  DAT_003212f6 = '\0';
  DAT_003212f5 = '\0';
  DAT_003212f0 = 0;
  DAT_003212e8 = (long *)0x0;
  DAT_003212e0 = (long *)0x0;
  DAT_00321365 = '\0';
  __s1 = getenv("QUOTING_STYLE");
  if (__s1 != (char *)0x0) {
    iVar6 = FUN_0010c2c0(__s1,quoting_style_args,quoting_style_vals,4);
    if (iVar6 < 0) {
      uVar20 = FUN_00113ce0(__s1);
      uVar11 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
      error(0,0,uVar11,uVar20);
    }
    else {
      FUN_001135b0(0,(ulong)*(uint *)(quoting_style_vals + (long)iVar6 * 4));
    }
  }
  DAT_003212b0 = 0x50;
  __s1 = getenv("COLUMNS");
  if (((__s1 != (char *)0x0) && (*__s1 != '\0')) && (cVar5 = FUN_00105ca0(__s1), cVar5 == '\0')) {
    uVar20 = FUN_00113ce0(__s1);
    uVar11 = dcgettext(0,"ignoring invalid width in environment variable COLUMNS: %s",5);
    error(0,0,uVar11,uVar20);
  }
  lVar4 = (long)(&local_60 + 1);
  iVar6 = ioctl(1,0x5413,lVar4);
  if (iVar6 != -1) {
    if (local_58._2_2_ != 0) {
      DAT_003212b0 = (ulong)local_58._2_2_;
    }
  }
  __s1 = getenv("TABSIZE");
  DAT_003212c0 = &DAT_00000008;
  if (__s1 != (char *)0x0) {
    iVar6 = FUN_00114950(__s1,0,0,lVar4,0);
    if (iVar6 == 0) {
      DAT_003212c0 = local_58;
    }
    else {
      uVar20 = FUN_00113ce0(__s1);
      uVar11 = dcgettext(0,"ignoring invalid tab size in environment variable TABSIZE: %s",5);
      error(0,0,uVar11,uVar20);
    }
  }
  puVar16 = &switchdataD_00116598;
  local_78 = (FILE *)((ulong)local_78 & 0xffffffffffffff00);
  local_80 = local_80 & 0xffffffffffffff00;
  ppuVar17 = (undefined **)0x1;
  __s1 = (char *)0;
  bVar18 = DAT_00321311;
LAB_001040f8:
  DAT_00321311 = bVar18;
  local_58 = (char *)CONCAT44(local_58._4_4_,0xffffffff);
  uVar20 = 0x10411b;
  iVar6 = getopt_long(param_1,param_2,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1",
                      &PTR_s_all_0031f2e0,lVar4);
  lVar10 = optarg;
  if (iVar6 != -1) {
    bVar18 = DAT_00321311;
    switch(iVar6) {
    case 0x31:
      if (DAT_00321338 != 0) {
        DAT_00321338 = 1;
      }
      break;
    case 0x41:
      if (DAT_003212f0 == 0) {
        DAT_003212f0 = 1;
      }
      break;
    case 0x42:
      puVar8 = (undefined8 *)FUN_00114480(0x10);
      plVar9 = DAT_003212e8;
      DAT_003212e8 = puVar8;
      *puVar8 = 0x117de0;
      *(long **)(puVar8 + 1) = plVar9;
      plVar9 = (long *)FUN_00114480();
      *plVar9 = 0x117ddf;
      *(long **)(plVar9 + 1) = DAT_003212e8;
      DAT_003212e8 = plVar9;
      bVar18 = DAT_00321311;
      break;
    case 0x43:
      DAT_00321338 = 2;
      break;
    case 0x44:
      DAT_00321318 = '\x01';
      break;
    case 0x46:
      DAT_00321314 = 3;
      break;
    case 0x47:
      DAT_00320020 = 0;
      break;
    case 0x48:
      DAT_003212f8 = 3;
      break;
    case 0x49:
      plVar9 = (long *)FUN_00114480();
      *plVar9 = lVar10;
      *(long **)(plVar9 + 1) = DAT_003212e8;
      DAT_003212e8 = plVar9;
      bVar18 = DAT_00321311;
      break;
    case 0x4c:
      DAT_003212f8 = 5;
      break;
    case 0x4e:
      FUN_001135b0(0,0);
      bVar18 = DAT_00321311;
      break;
    case 0x51:
      FUN_001135b0(0,5);
      bVar18 = DAT_00321311;
      break;
    case 0x52:
      DAT_003212f6 = '\x01';
      break;
    case 0x53:
      DAT_00321330 = 2;
      local_80 = CONCAT71(local_80._1_7_,1);
      break;
    case 0x54:
      uVar11 = 0x104268;
      uVar20 = dcgettext(0,"invalid tab size",5);
      DAT_003212c0 = (char *)FUN_00114710(optarg,0,0,0xffffffffffffffff,&DAT_00117c4a,uVar20,2,
                                          uVar11);
      bVar18 = DAT_00321311;
      break;
    case 0x55:
      DAT_00321330 = -1;
      local_80 = CONCAT71(local_80._1_7_,1);
      break;
    case 0x58:
      DAT_00321330 = 1;
      local_80 = CONCAT71(local_80._1_7_,1);
      break;
    case 0x5a:
      DAT_00321365 = '\x01';
      break;
    case 0x61:
      DAT_003212f0 = 2;
      break;
    case 0x62:
      FUN_001135b0(0,7);
      bVar18 = DAT_00321311;
      break;
    case 99:
      DAT_00321334 = 1;
      break;
    case 100:
      DAT_003212f5 = '\x01';
      break;
    case 0x66:
      DAT_003212f0 = 2;
      DAT_00321330 = -1;
      if (DAT_00321338 == 0) {
        iVar6 = isatty(1);
        DAT_00321338 = 2 - (uint)(iVar6 == 0);
      }
      DAT_0032132c = '\0';
      DAT_00321312 = '\0';
      DAT_00321311 = false;
      local_80 = CONCAT71(local_80._1_7_,1);
      bVar18 = DAT_00321311;
      break;
    case 0x67:
      DAT_00321338 = 0;
      DAT_00320021 = 0;
      break;
    case 0x68:
      DAT_00321328 = 0xb0;
      DAT_0032131c = 0xb0;
      DAT_00321320 = 1;
      DAT_00320018 = 1;
      break;
    case 0x69:
      DAT_003212fc = 1;
      break;
    case 0x6b:
      local_78 = (FILE *)CONCAT71(local_78._1_7_,1);
      break;
    case 0x6d:
      DAT_00321338 = 4;
      break;
    case 0x6e:
      DAT_0032132d = 1;
    case 0x6c:
      DAT_00321338 = 0;
      break;
    case 0x6f:
      DAT_00321338 = 0;
      DAT_00320020 = 0;
      break;
    case 0x70:
      DAT_00321314 = 1;
      break;
    case 0x71:
      DAT_003212d8 = 1;
      break;
    case 0x72:
      DAT_0032132f = 1;
      break;
    case 0x73:
      DAT_0032132c = '\x01';
      break;
    case 0x74:
      DAT_00321330 = 4;
      local_80 = CONCAT71(local_80._1_7_,1);
      break;
    case 0x75:
      DAT_00321334 = 2;
      break;
    case 0x76:
      goto switchD_0010413c_caseD_76;
    case 0x77:
      cVar5 = FUN_00105ca0();
      bVar18 = DAT_00321311;
      if (cVar5 == '\0') {
        param_2 = (FILE *)FUN_00113ce0(optarg);
        uVar20 = dcgettext(0,"invalid line width",5);
        error(2,0,"%s: %s",uVar20,param_2);
switchD_0010413c_caseD_76:
        DAT_00321330 = 3;
        local_80 = CONCAT71(local_80._1_7_,1);
        bVar18 = DAT_00321311;
      }
      break;
    case 0x78:
      DAT_00321338 = 3;
      break;
    case 0x80:
      DAT_0032132e = 1;
      break;
    case 0x81:
      uVar7 = FUN_0010f720(optarg,&DAT_00321328,&DAT_00321320);
      if (uVar7 != 0) goto LAB_001057c9;
      DAT_0032131c = DAT_00321328;
      DAT_00320018 = DAT_00321320;
      bVar18 = DAT_00321311;
      break;
    case 0x82:
      if (optarg != 0) {
        lVar10 = FUN_0010c580("--color",optarg,&PTR_s_always_0031f1c0,&DAT_00116ae0,4,argmatch_die);
        if ((*(int *)(&DAT_00116ae0 + lVar10 * 4) != 1) &&
           ((*(int *)(&DAT_00116ae0 + lVar10 * 4) != 2 || (iVar6 = isatty(1), iVar6 == 0)))) {
          DAT_00321312 = '\0';
          bVar18 = DAT_00321311;
          break;
        }
      }
      DAT_00321312 = '\x01';
      DAT_003212c0 = (char *)0x0;
      bVar18 = DAT_00321311;
      break;
    case 0x83:
      DAT_003212f8 = 4;
      break;
    case 0x84:
      DAT_00321314 = 2;
      break;
    case 0x85:
      lVar10 = FUN_0010c580("--format",optarg,&PTR_s_verbose_0031f2a0,&DAT_00116b50,4,argmatch_die);
      DAT_00321338 = *(int *)(&DAT_00116b50 + lVar10 * 4);
      bVar18 = DAT_00321311;
      break;
    case 0x86:
      DAT_00321338 = 0;
      __s1 = "full-iso";
      break;
    case 0x87:
      DAT_003212f4 = 1;
      break;
    case 0x88:
      plVar9 = (long *)FUN_00114480();
      *plVar9 = optarg;
      *(long **)(plVar9 + 1) = DAT_003212e0;
      DAT_003212e0 = plVar9;
      bVar18 = DAT_00321311;
      break;
    case 0x89:
      if (optarg != 0) {
        lVar10 = FUN_0010c580("--hyperlink",optarg,&PTR_s_always_0031f1c0,&DAT_00116ae0,4,
                              argmatch_die);
        if (*(int *)(&DAT_00116ae0 + lVar10 * 4) != 1) {
          bVar18 = false;
          if (*(int *)(&DAT_00116ae0 + lVar10 * 4) == 2) {
            iVar6 = isatty(1);
            bVar18 = iVar6 != 0;
          }
          break;
        }
      }
      bVar18 = true;
      break;
    case 0x8a:
      lVar10 = FUN_0010c580("--indicator-style",optarg,&PTR_DAT_0031f940,&DAT_00116b70,4,
                            argmatch_die);
      DAT_00321314 = *(uint *)(&DAT_00116b70 + lVar10 * 4);
      bVar18 = DAT_00321311;
      break;
    case 0x8b:
      lVar10 = FUN_0010c580("--quoting-style",optarg,quoting_style_args,quoting_style_vals,4,
                            argmatch_die);
      FUN_001135b0(0,(ulong)*(uint *)(quoting_style_vals + lVar10 * 4));
      bVar18 = DAT_00321311;
      break;
    case 0x8c:
      DAT_003212d8 = 0;
      break;
    case 0x8d:
      DAT_00321328 = 0x90;
      DAT_0032131c = 0x90;
      DAT_00321320 = 1;
      DAT_00320018 = 1;
      break;
    case 0x8e:
      lVar10 = FUN_0010c580("--sort",optarg,&DAT_0031f260,&DAT_00116b30,4,argmatch_die);
      local_80 = CONCAT71(local_80._1_7_,1);
      DAT_00321330 = *(int *)(&DAT_00116b30 + lVar10 * 4);
      bVar18 = DAT_00321311;
      break;
    case 0x8f:
      lVar10 = FUN_0010c580("--time",optarg,&DAT_0031f220,&DAT_00116b10,4,argmatch_die);
      DAT_00321334 = *(int *)(&DAT_00116b10 + lVar10 * 4);
      bVar18 = DAT_00321311;
      break;
    case 0x90:
      goto switchD_0010413c_caseD_90;
    case -0x83:
      puVar15 = (undefined *)0x117d82;
      if ((ls_mode != 1) && (puVar15 = &DAT_00117cfe, ls_mode == 2)) {
        puVar15 = &DAT_00117cff;
      }
      FUN_00114320(stdout,puVar15,"GNU coreutils",Version,"Richard M. Stallman","David MacKenzie",0,
                   uVar20);
                    // WARNING: Subroutine does not return
      exit(0);
    case -0x82:
      lVar10 = FUN_0010bb20(0);
      __s1_00 = (char *)puVar16;
      goto LAB_00105606;
    default:
      goto switchD_0010413c_caseD_ffffff7f;
    }
    goto LAB_001040f8;
  }
  if (DAT_00321320 == 0) {
    __s1_00 = getenv("LS_BLOCK_SIZE");
    FUN_0010f720(__s1_00,&DAT_00321328,&DAT_00321320);
    if ((__s1_00 != (char *)0x0) || (__s1_00 = getenv("BLOCK_SIZE"), __s1_00 != (char *)0x0)) {
      DAT_0032131c = DAT_00321328;
      DAT_00320018 = DAT_00321320;
    }
    if ((char)local_78 != '\0') {
      DAT_00321328 = 0;
      DAT_00321320 = 0x400;
    }
  }
  DAT_00321200 = DAT_003212b0 / 3 + (ulong)(DAT_003212b0 % 3 != 0);
  uVar7 = FUN_00113590(0);
  __s1_00 = (char *)(ulong)uVar7;
  if ((DAT_00321338 == 4) || (DAT_00321338 == 1)) {
    DAT_003213a8 = false;
  }
  else {
    if ((DAT_003212b0 != 0) || (DAT_003213a8 = false, DAT_00321338 == 0)) {
      DAT_003213a8 = (uVar7 & 0xfffffffd) == 1 || uVar7 == 6;
    }
  }
  DAT_003212d0 = FUN_00113550(0);
  if (uVar7 == 7) {
    FUN_001135d0(DAT_003212d0,0x20,1);
  }
  if (1 < DAT_00321314) {
    cVar5 = (&DAT_00117e73)[DAT_00321314 - 2];
    __s1_00 = &DAT_00117e73 + (DAT_00321314 - 2);
    while (cVar5 != '\0') {
      __s1_00 = (char *)((long)__s1_00 + 1);
      FUN_001135d0(DAT_003212d0,(ulong)(uint)(int)cVar5,1);
      cVar5 = *__s1_00;
    }
  }
  DAT_003212c8 = FUN_00113550(0);
  FUN_001135d0(DAT_003212c8,0x3a,1);
  if (DAT_00321318 == '\0') {
LAB_001049dc:
    if ((DAT_00321334 - 1U < 2) && ((char)local_80 == '\0')) {
      if (DAT_00321338 == 0) goto LAB_001049ff;
      DAT_00321330 = 4;
    }
    else {
      if (DAT_00321338 == 0) goto LAB_001049ff;
    }
LAB_00104a42:
    puVar16 = (uint *)(long)optind;
    if (DAT_00321312 != '\0') {
      local_60 = (byte *)getenv("LS_COLORS");
      if ((local_60 != (byte *)0x0) && (*local_60 != 0)) {
        ppuVar17 = &PTR_DAT_0031f860;
        local_43 = 0x3f3f;
        local_41 = 0;
        DAT_00321300 = (char *)FUN_001146b0(local_60);
        local_80 = param_1;
        local_78 = param_2;
        local_58 = DAT_00321300;
        goto LAB_0010540a;
      }
      __s1 = getenv("COLORTERM");
      if ((__s1 == (char *)0x0) || (*__s1 == '\0')) {
        __s1 = getenv("TERM");
        if ((__s1 != (char *)0x0) && (*__s1 != '\0')) {
          __s1_00 = "# Configuration file for dircolors, a utility to help you set the";
          while (__s1_00 + -0x116ba0 < (char *)0x104d) {
            iVar6 = strncmp(__s1_00,"TERM ",5);
            if ((iVar6 == 0) && (iVar6 = fnmatch(__s1_00 + 5,__s1,0), iVar6 == 0))
            goto LAB_00105192;
            uVar12 = 0xffffffffffffffff;
            __s = __s1_00;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar5 = *__s;
              __s = __s + (ulong)bVar19 * -2 + 1;
            } while (cVar5 != '\0');
            __s1_00 = __s1_00 + ~uVar12;
          }
        }
        DAT_00321312 = '\0';
      }
      goto LAB_00105192;
    }
  }
  else {
    if ((DAT_00321338 != 0) || (DAT_00321311 != false)) {
      DAT_00321318 = '\0';
      goto LAB_001049dc;
    }
LAB_001049ff:
    if ((__s1 != (char *)0x0) || (__s1 = getenv("TIME_STYLE"), __s1 != (char *)0x0)) {
      __s1_00 = "posix-";
      while (iVar6 = strncmp(__s1,"posix-",6), iVar6 == 0) {
        cVar5 = FUN_0010d830(2);
        if (cVar5 == '\0') goto LAB_00104a42;
        __s1 = __s1 + 6;
      }
      if (*__s1 != '+') goto LAB_0010524d;
      __s1 = __s1 + 1;
      __s = strchr(__s1,10);
      __s1_00 = __s1;
      if (__s != (char *)0x0) {
        __s1_00 = strchr(__s + 1,10);
        if (__s1_00 != (char *)0x0) {
          uVar20 = FUN_00113ce0(__s1);
          uVar11 = dcgettext(0,"invalid time style format %s",5);
          uVar7 = error(2,0,uVar11,uVar20);
LAB_001057c9:
          FUN_00114d70((ulong)uVar7,(ulong)local_58 & 0xffffffff,0,&PTR_s_all_0031f2e0,optarg);
LAB_001057e4:
                    // WARNING: Subroutine does not return
          __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)","src/ls.c",0x402,
                        "dev_ino_pop");
        }
        *__s = '\0';
        __s1_00 = __s + 1;
      }
LAB_001052d3:
      PTR_s__b__e__H__M_00320048 = __s1_00;
      PTR_DAT_00320040 = __s1;
      FUN_00105d20();
      goto LAB_00104a42;
    }
    __s1 = "locale";
LAB_0010524d:
    lVar10 = FUN_0010c2c0(__s1,&PTR_s_full_iso_0031f980,&DAT_00116b80);
    if (-1 < lVar10) {
      if (lVar10 == 1) {
        PTR_s__b__e__H__M_00320048 = &DAT_00117eea;
        PTR_DAT_00320040 = &DAT_00117eea;
        __s1 = PTR_DAT_00320040;
        __s1_00 = PTR_s__b__e__H__M_00320048;
      }
      else {
        __s1 = PTR_DAT_00320040;
        __s1_00 = PTR_s__b__e__H__M_00320048;
        if (lVar10 < 2) {
          if (lVar10 == 0) {
            PTR_s__b__e__H__M_00320048 = "%Y-%m-%d %H:%M:%S.%N %z";
            PTR_DAT_00320040 = "%Y-%m-%d %H:%M:%S.%N %z";
            __s1 = PTR_DAT_00320040;
            __s1_00 = PTR_s__b__e__H__M_00320048;
          }
        }
        else {
          if (lVar10 == 2) {
            PTR_DAT_00320040 = "%Y-%m-%d ";
            PTR_s__b__e__H__M_00320048 = &DAT_00117eed;
            __s1 = PTR_DAT_00320040;
            __s1_00 = PTR_s__b__e__H__M_00320048;
          }
          else {
            if ((lVar10 == 3) &&
               (cVar5 = FUN_0010d830(2), __s1 = PTR_DAT_00320040,
               __s1_00 = PTR_s__b__e__H__M_00320048, cVar5 != '\0')) {
              PTR_DAT_00320040 = (char *)dcgettext(0,PTR_DAT_00320040,2);
              __s1_00 = (char *)dcgettext(0,PTR_s__b__e__H__M_00320048,2);
              __s1 = PTR_DAT_00320040;
            }
          }
        }
      }
      goto LAB_001052d3;
    }
LAB_00105606:
    FUN_0010c3e0("time style",__s1,lVar10);
    __stream = stderr;
    __s = (char *)dcgettext(0,"Valid arguments are:\n",5);
    ppuVar14 = &PTR_s_full_iso_0031f980;
    fputs_unlocked(__s,__stream);
    __s = "full-iso";
    do {
      ppuVar14 = ppuVar14 + 1;
      __fprintf_chk(stderr,1,"  - [posix-]%s\n",__s);
      param_2 = stderr;
      __s = *ppuVar14;
    } while (__s != (char *)0x0);
    __s = (char *)dcgettext(0,"  - +FORMAT (e.g., +%H:%M) for a \'date\'-style format\n",5);
    fputs_unlocked(__s,param_2);
    puVar16 = (uint *)__s1_00;
switchD_0010413c_caseD_ffffff7f:
    FUN_0010bb20(2);
    while( true ) {
      pbVar13 = local_60 + 1;
      if (*local_60 != 0x3d) break;
      *(char **)(__s1 + 0x18) = local_58;
      local_60 = local_60 + 1;
      cVar5 = FUN_001059c0(lVar4,param_2,0);
      pbVar13 = local_60;
      if (cVar5 == '\0') break;
LAB_0010540a:
      while( true ) {
        bVar19 = *local_60;
        if (bVar19 == 0x2a) break;
        if (bVar19 == 0x3a) {
          local_60 = local_60 + 1;
        }
        else {
          param_2 = local_78;
          if (bVar19 == 0) goto LAB_0010551b;
          local_43 = local_43 & 0xff00 | (ushort)*local_60;
          pbVar13 = local_60 + 1;
          if (local_60[1] == 0) goto LAB_001054cd;
          local_43 = CONCAT11(local_60[1],*local_60);
          pbVar13 = local_60 + 3;
          if (local_60[2] != 0x3d) goto LAB_001054cd;
          __s1 = "lc";
          lVar10 = 0;
          local_60 = local_60 + 3;
          while (iVar6 = strcmp((char *)&local_43,__s1), iVar6 != 0) {
            lVar10 = lVar10 + 1;
            __s1 = ppuVar17[lVar10];
            if (__s1 == (char *)0x0) goto LAB_00105495;
          }
          (&PTR_DAT_00320068)[(long)(int)lVar10 * 2] = local_58;
          cVar5 = FUN_001059c0(lVar4,&local_60,0);
          if (cVar5 == '\0') {
LAB_00105495:
            FUN_00113ce0(&local_43);
            uVar20 = dcgettext(0,"unrecognized prefix: %s",5);
            error(0,0,uVar20);
            pbVar13 = local_60;
            goto LAB_001054cd;
          }
        }
      }
      param_2 = (FILE *)&local_60;
      __s1 = (char *)FUN_00114480(0x28);
      local_60 = local_60 + 1;
      __s1_00 = __s1;
      *(char **)(__s1 + 0x20) = DAT_00321308;
      DAT_00321308 = __s1_00;
      *(char **)(__s1 + 8) = local_58;
      cVar5 = FUN_001059c0(lVar4,param_2,1);
      pbVar13 = local_60;
      if (cVar5 == '\0') break;
    }
LAB_001054cd:
    local_60 = pbVar13;
    uVar20 = dcgettext(0,"unparsable value for LS_COLORS environment variable",5);
    error(0,0,uVar20);
    free(DAT_00321300);
    __s1 = DAT_00321308;
    while (__s1 != (char *)0x0) {
      __s1_00 = *(char **)(__s1 + 0x20);
      free(__s1);
      __s1 = __s1_00;
    }
    DAT_00321312 = '\0';
    param_2 = local_78;
LAB_0010551b:
    if ((_DAT_003200d0 == 6) && (iVar6 = strncmp(PTR_s_01_36_003200d8,"target",6), iVar6 == 0)) {
      DAT_00321390 = '\x01';
    }
LAB_00105192:
    if ((DAT_00321312 != '\0') &&
       (((cVar5 = FUN_00105c50(0xd), cVar5 != '\0' ||
         ((cVar5 = FUN_00105c50(0xe), cVar5 != '\0' && (DAT_00321390 != '\0')))) ||
        ((cVar5 = FUN_00105c50(0xc), cVar5 != '\0' && (DAT_00321338 == 0)))))) {
      DAT_003212fd = 1;
    }
  }
  if (((DAT_003212f8 == 1) && (DAT_003212f8 = 2, DAT_003212f5 == '\0')) && (DAT_00321314 != 3)) {
    DAT_003212f8 = (-(uint)(DAT_00321338 == 0) & 0xfffffffe) + 4;
  }
  if (DAT_003212f6 != '\0') {
    DAT_003213c8 = FUN_0010e100(0x1e,0,FUN_00105960,FUN_00105970,free);
    if (DAT_003213c8 == 0) {
                    // WARNING: Subroutine does not return
      FUN_001146d0();
    }
    _obstack_begin(&DAT_003210e0,0,0,malloc,free);
  }
  __s1 = getenv("TZ");
  DAT_003212a8 = FUN_00115780(__s1);
  if ((((DAT_00321330 - 2U & 0xfffffffd) == 0) || (DAT_00321338 == 0)) ||
     ((DAT_00321365 != '\0' || (DAT_0032132c != '\0')))) {
    DAT_003212a1 = 1;
    DAT_003212a0 = 0;
  }
  else {
    DAT_003212a1 = 0;
    DAT_003212a0 = 1;
    if (((DAT_003212f6 == '\0') && (DAT_00321312 == '\0')) && (DAT_00321314 == 0)) {
      DAT_003212a0 = DAT_003212f4;
    }
  }
  DAT_003212a0 = DAT_003212a0 & 1;
  if (DAT_00321318 != '\0') {
    _obstack_begin(&DAT_003211a0,0,0,malloc,free);
    _obstack_begin(&DAT_00321140,0,0,malloc,free);
  }
  if (DAT_00321311 != false) {
    pbVar13 = &DAT_00320fe0;
    iVar6 = 0;
LAB_00104f88:
    do {
      if (iVar6 < 0x5b) {
        if ((iVar6 < 0x41) && (9 < iVar6 - 0x30U)) goto LAB_00104f65;
      }
      else {
        if (0x19 < iVar6 - 0x61U) {
LAB_00104f65:
          if ((1 < iVar6 - 0x2dU) && (iVar6 != 0x7e)) {
            bVar18 = iVar6 == 0x5f;
            iVar6 = iVar6 + 1;
            *pbVar13 = *pbVar13 | bVar18;
            pbVar13 = pbVar13 + 1;
            if (iVar6 == 0x100) break;
            goto LAB_00104f88;
          }
        }
      }
      iVar6 = iVar6 + 1;
      *pbVar13 = *pbVar13 | 1;
      pbVar13 = pbVar13 + 1;
    } while (iVar6 != 0x100);
    DAT_00321388 = (undefined1 *)FUN_00114870();
    if (DAT_00321388 == (undefined1 *)0x0) {
      DAT_00321388 = &DAT_00117c4a;
    }
  }
  _DAT_003213b8 = 100;
  iVar6 = (int)local_80 - (int)puVar16;
  DAT_003213c0 = FUN_00114480(20000);
  DAT_003213b0 = 0;
  FUN_001060e0();
  if (iVar6 < 1) {
    if (DAT_003212f5 == '\0') {
      FUN_00105f80(&DAT_0011a33d,0,1);
    }
    else {
      FUN_001099e0(&DAT_0011a33d,3,1,&DAT_00117c4a);
    }
  }
  else {
    do {
      lVar10 = (long)puVar16 * 2;
      puVar16 = (uint *)((long)puVar16 + 1);
      FUN_001099e0(*(undefined8 *)(&param_2->_flags + lVar10),0,1,&DAT_00117c4a);
    } while ((int)puVar16 < (int)local_80);
  }
  if (DAT_003213b0 == 0) {
LAB_00104b92:
    if (iVar6 < 2) {
      if (DAT_00321380 == (void **)0x0) goto LAB_00104c76;
      if (DAT_00321380[3] == (void *)0x0) {
        DAT_003212b8 = 0;
      }
    }
  }
  else {
    FUN_001062f0();
    if (DAT_003212f5 == '\0') {
      FUN_00106570(0,1);
    }
    if (DAT_003213b0 == 0) goto LAB_00104b92;
    FUN_00109420();
    if (DAT_00321380 == (void **)0x0) goto LAB_00104c76;
    __s1 = ((_IO_FILE *)stdout)->_IO_write_ptr;
    if (((_IO_FILE *)stdout)->_IO_write_end < __s1 || ((_IO_FILE *)stdout)->_IO_write_end == __s1) {
      __overflow((_IO_FILE *)stdout,10);
    }
    else {
      ((_IO_FILE *)stdout)->_IO_write_ptr = __s1 + 1;
      *__s1 = '\n';
    }
    DAT_003211f8 = DAT_003211f8 + 1;
  }
  while (__ptr = DAT_00321380, DAT_00321380 != (void **)0x0) {
    ppvVar3 = (void **)DAT_00321380[3];
    __ptr_00 = *DAT_00321380;
    if ((DAT_003213c8 == 0) || (__ptr_00 != (void *)0x0)) {
      ppvVar1 = DAT_00321380 + 2;
      ppvVar2 = DAT_00321380 + 1;
      DAT_00321380 = ppvVar3;
      FUN_0010a860(__ptr_00,*ppvVar2,(ulong)*(byte *)ppvVar1);
      free(*__ptr);
      free(__ptr[1]);
      free(__ptr);
      DAT_003212b8 = 1;
    }
    else {
      DAT_00321380 = ppvVar3;
      if ((ulong)(DAT_003210f8 - _DAT_003210f0) < 0x10) goto LAB_001057e4;
      local_58 = *(char **)(DAT_003210f8 + -0x10);
      local_50 = *(char **)(DAT_003210f8 + -8);
      DAT_003210f8 = DAT_003210f8 + -0x10;
      __ptr_00 = (void *)FUN_0010e960(DAT_003213c8,lVar4);
      if (__ptr_00 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        __assert_fail("found","src/ls.c",0x638,"main");
      }
      free(__ptr_00);
      free(*__ptr);
      free(__ptr[1]);
      free(__ptr);
    }
  }
LAB_00104c76:
  if ((DAT_00321312 != '\0') && (DAT_00321310 != '\0')) {
    if ((_DAT_00320060 != 2) ||
       (((*(short *)PTR_DAT_00320068 != 0x5b1b || (_DAT_00320070 != 1)) ||
        (*PTR_DAT_00320078 != 'm')))) {
      FUN_001072f0(&DAT_00320060);
      FUN_001072f0(&DAT_00320070);
    }
    fflush_unlocked(stdout);
    FUN_001070d0();
    iVar6 = DAT_00321214;
    while (iVar6 != 0) {
      raise(0x13);
      iVar6 = iVar6 + -1;
    }
    if (DAT_00321218 != 0) {
      raise(DAT_00321218);
    }
  }
  if (DAT_00321318 != '\0') {
    FUN_001067b0("//DIRED//",&DAT_003211a0);
    FUN_001067b0("//SUBDIRED//",&DAT_00321140);
    uVar7 = FUN_00113590(DAT_003212d0);
    __printf_chk(1,"//DIRED-OPTIONS// --quoting-style=%s\n",
                 *(undefined8 *)(quoting_style_args + (ulong)uVar7 * 8));
  }
  lVar4 = DAT_003213c8;
  if (DAT_003213c8 != 0) {
    lVar10 = FUN_0010dc80(DAT_003213c8);
    if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("hash_get_n_entries (active_dir_set) == 0","src/ls.c",0x66c,"main");
    }
    FUN_0010e350(lVar4);
  }
  if (local_40 != *(char **)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (ulong)DAT_00321210;
switchD_0010413c_caseD_90:
  __s1 = (char *)optarg;
  goto LAB_001040f8;
}



void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(FUN_00103e90,in_stack_00000000,&stack0x00000008,FUN_001162c0,FUN_00116330,
                    param_3,auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00105897)
// WARNING: Removing unreachable block (ram,0x001058a3)

void FUN_00105880(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_003202c8 != '\0') {
    return;
  }
  __cxa_finalize(PTR_LOOP_00320008);
  FUN_00105880();
  DAT_003202c8 = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x001058e8)
// WARNING: Removing unreachable block (ram,0x001058f4)

void _INIT_0(void)

{
  return;
}



ulong FUN_00105960(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



ulong FUN_00105970(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return param_2[1] & 0xffffffffffffff00U | (ulong)(param_1[1] == param_2[1]);
}



void FUN_00105990(int param_1)

{
  if (DAT_00321218 == 0) {
    DAT_00321218 = param_1;
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



ulong FUN_001059c0(byte **param_1,byte **param_2,uint param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  bool bVar10;
  
  pbVar7 = *param_2;
  pbVar8 = *param_1;
  lVar9 = 0;
LAB_001059ef:
  do {
    bVar6 = *pbVar7;
    cVar2 = bVar6 - 0x3d;
    bVar10 = bVar6 == 0x3d;
    pbVar3 = pbVar7;
    while (pbVar7 = pbVar3, !bVar10) {
      if (bVar10 || SBORROW1(bVar6,'=') != cVar2 < '\0') {
        if ((bVar6 != 0) && (bVar6 != 0x3a)) goto LAB_00105a50;
        uVar4 = 1;
        goto LAB_00105abf;
      }
      if (bVar6 == 0x5c) {
        bVar6 = pbVar3[1];
        pbVar7 = pbVar3 + 2;
        switch(bVar6) {
        case 0:
          uVar4 = 0;
          goto LAB_00105abf;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
          bVar1 = *pbVar7;
          bVar6 = bVar6 - 0x30;
          while ((byte)(bVar1 - 0x30) < 8) {
            pbVar7 = pbVar7 + 1;
            bVar6 = (bVar1 - 0x30) + bVar6 * '\b';
            bVar1 = *pbVar7;
          }
          break;
        case 0x3f:
          bVar6 = 0x7f;
          break;
        case 0x58:
        case 0x78:
          bVar6 = 0;
          goto LAB_00105b28;
        case 0x5f:
          bVar6 = 0x20;
          break;
        case 0x61:
          bVar6 = 7;
          break;
        case 0x62:
          bVar6 = 8;
          break;
        case 0x65:
          bVar6 = 0x1b;
          break;
        case 0x66:
          bVar6 = 0xc;
          break;
        case 0x6e:
          bVar6 = 10;
          break;
        case 0x72:
          bVar6 = 0xd;
          break;
        case 0x74:
          bVar6 = 9;
          break;
        case 0x76:
          bVar6 = 0xb;
        }
      }
      else {
        if (bVar6 != 0x5e) goto LAB_00105a50;
        bVar6 = pbVar3[1];
        pbVar7 = pbVar3 + 1;
        if (0x3e < (byte)(bVar6 - 0x40)) {
          if (bVar6 != 0x3f) {
            uVar4 = 0;
            goto LAB_00105abf;
          }
          *pbVar8 = 0x7f;
          lVar9 = lVar9 + 1;
          pbVar8 = pbVar8 + 1;
          goto LAB_001059ef;
        }
        pbVar7 = pbVar3 + 2;
        bVar6 = bVar6 & 0x1f;
      }
      *pbVar8 = bVar6;
      bVar6 = *pbVar7;
      lVar9 = lVar9 + 1;
      pbVar8 = pbVar8 + 1;
      cVar2 = bVar6 - 0x3d;
      bVar10 = cVar2 == '\0';
      pbVar3 = pbVar7;
    }
    if ((char)param_3 != '\0') {
      uVar4 = (ulong)param_3;
LAB_00105abf:
      *param_1 = pbVar8;
      *param_2 = pbVar7;
      *param_4 = lVar9;
      return uVar4;
    }
LAB_00105a50:
    *pbVar8 = bVar6;
    pbVar7 = pbVar3 + 1;
    lVar9 = lVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while( true );
LAB_00105b28:
  bVar1 = *pbVar7;
  bVar5 = bVar1 - 0x30;
  if (bVar5 < 0x37) {
    while (uVar4 = 1 << (bVar5 & 0x3f), (uVar4 & 0x7e0000) == 0) {
      if ((uVar4 & 0x7e000000000000) != 0) {
        pbVar7 = pbVar7 + 1;
        bVar6 = bVar1 + 0xa9 + bVar6 * '\x10';
        goto LAB_00105b28;
      }
      if ((uVar4 & 0x3ff) == 0) goto LAB_00105b78;
      pbVar7 = pbVar7 + 1;
      bVar6 = (bVar1 - 0x30) + bVar6 * '\x10';
      bVar1 = *pbVar7;
      bVar5 = bVar1 - 0x30;
      if (0x36 < bVar5) goto LAB_00105b78;
    }
    pbVar7 = pbVar7 + 1;
    bVar6 = (bVar1 - 0x37) + bVar6 * '\x10';
    goto LAB_00105b28;
  }
LAB_00105b78:
  *pbVar8 = bVar6;
  lVar9 = lVar9 + 1;
  pbVar8 = pbVar8 + 1;
  goto LAB_001059ef;
}



ulong FUN_00105c50(uint param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar1 = 0;
  lVar2 = *(long *)(&DAT_00320060 + (ulong)param_1 * 0x10);
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return (ulong)(*(&PTR_DAT_00320068)[(ulong)param_1 * 2] != '0');
    }
    bVar5 = lVar2 == 2;
    uVar1 = 1;
    if (bVar5) {
      lVar2 = 2;
      pcVar3 = (&PTR_DAT_00320068)[(ulong)param_1 * 2];
      pcVar4 = "00";
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      uVar1 = (ulong)!bVar5;
    }
  }
  return uVar1;
}



undefined8 FUN_00105ca0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00114e20(param_1,0,0,&local_18,&DAT_00117c4a);
  if (iVar1 == 0) {
    DAT_003212b0 = local_18;
    uVar2 = 1;
  }
  else {
    if (iVar1 == 1) {
      DAT_003212b0 = 0xffffffffffffffff;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00105d20(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char *__s;
  char *pcVar4;
  ulong uVar5;
  char cVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  int __item;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 uVar13;
  ulong local_660;
  char *local_658;
  long local_650;
  undefined local_648 [1536];
  undefined auStack72 [8];
  long local_40;
  
  lVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    __s = *(char **)((long)&PTR_DAT_00320040 + lVar10);
    cVar6 = *__s;
    while (cVar6 != '\0') {
      bVar12 = cVar6 == '%';
      cVar6 = __s[1];
      if (bVar12) {
        if (cVar6 == '%') {
          cVar6 = __s[2];
          __s = __s + 1;
        }
        else {
          if (cVar6 == 'b') goto LAB_00105d8e;
        }
      }
      __s = __s + 1;
    }
    __s = (char *)0x0;
LAB_00105d8e:
    *(char **)((long)&local_658 + lVar10) = __s;
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x10);
  if ((local_658 != (char *)0x0) || (local_650 != 0)) {
    uVar11 = 5;
    do {
      __item = 0x2000e;
      uVar8 = 0;
      puVar7 = local_648;
      do {
        local_660 = uVar11;
        __s = nl_langinfo(__item);
        pcVar4 = strchr(__s,0x25);
        if (pcVar4 != (char *)0x0) goto LAB_00105e68;
        uVar13 = 0x105e14;
        uVar5 = FUN_0010fd40(__s,puVar7,0x80,&local_660,0,0);
        if (0x7f < uVar5) goto LAB_00105e68;
        if (uVar8 < local_660) {
          uVar8 = local_660;
        }
        puVar7 = puVar7 + 0x80;
        __item = __item + 1;
      } while (puVar7 != auStack72);
      bVar12 = uVar8 < uVar11;
      uVar11 = uVar8;
    } while (bVar12);
    lVar10 = 0;
    do {
      lVar1 = *(long *)((long)&PTR_DAT_00320040 + lVar10);
      lVar2 = *(long *)((long)&local_658 + lVar10);
      __s = &DAT_003203e0 + lVar10 * 0xc0;
      puVar9 = local_648;
      do {
        if (lVar2 == 0) {
          uVar13 = 0x105f6a;
          uVar3 = snprintf(__s,0x80,"%s",lVar1);
        }
        else {
          if (0x80 < lVar2 - lVar1) goto LAB_00105e68;
          uVar3 = __snprintf_chk(__s,0x80,1,0xffffffffffffffff,"%.*s%s%s",lVar2 - lVar1 & 0xffffffff
                                 ,lVar1,puVar9,lVar2 + 2,uVar13);
        }
        if (0x7f < uVar3) goto LAB_00105e68;
        puVar9 = puVar9 + 0x80;
        __s = __s + 0x80;
      } while (puVar9 != puVar7);
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x10);
    DAT_003203c8 = 1;
  }
LAB_00105e68:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00105f80(long param_1,long param_2,undefined param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00114480(0x20);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_001146b0(param_2);
  }
  puVar1[1] = uVar2;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_001146b0(param_1);
  }
  *puVar1 = uVar2;
  *(undefined *)(puVar1 + 2) = param_3;
  *(undefined8 **)(puVar1 + 3) = DAT_00321380;
  DAT_00321380 = puVar1;
  return;
}



undefined8 FUN_00105ff0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 extraout_var;
  
  pcVar1 = param_2[9];
  pcVar2 = param_1[9];
  if (param_1[9] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar1 <= (long)pcVar2) {
    iVar3 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar3);
  }
  return 1;
}



undefined8 FUN_00106030(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 extraout_var;
  
  pcVar1 = param_1[9];
  pcVar2 = param_2[9];
  if (param_2[9] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar1 <= (long)pcVar2) {
    iVar3 = strcmp(*param_2,*param_1);
    return CONCAT44(extraout_var,iVar3);
  }
  return 1;
}



void FUN_00106070(char **param_1,char **param_2)

{
  strcmp(*param_1,*param_2);
  return;
}



void FUN_00106080(char **param_1,char **param_2)

{
  strcmp(*param_2,*param_1);
  return;
}



void FUN_00106090(void **param_1)

{
  free(*param_1);
  free(param_1[1]);
  free(param_1[2]);
  if ((undefined *)param_1[0x16] != &DAT_00320022) {
    freecon();
    return;
  }
  return;
}



void FUN_001060e0(void)

{
  long lVar1;
  ulong uVar2;
  
  if (DAT_003213b0 != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      FUN_00106090(*(undefined8 *)(DAT_003213a0 + lVar1));
    } while (uVar2 < DAT_003213b0);
  }
  DAT_0032133c = 0;
  DAT_00321340 = 0;
  DAT_00321344 = 0;
  DAT_00321348 = 0;
  DAT_0032134c = 0;
  DAT_00321350 = 0;
  DAT_00321354 = 0;
  DAT_00321358 = 0;
  DAT_0032135c = 0;
  DAT_00321360 = 0;
  DAT_00321364 = 0;
  DAT_003213a9 = 0;
  DAT_003213b0 = 0;
  return;
}



ulong FUN_00106190(char *param_1)

{
  size_t sVar1;
  ulong uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  char local_22 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = FUN_00113660(local_22,2,param_1,0xffffffffffffffff,DAT_003212d0);
  if (*param_1 == local_22[0]) {
    sVar3 = strlen(param_1);
    uVar2 = sVar3 & 0xffffffffffffff00 | (ulong)(sVar3 != sVar1);
  }
  else {
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



byte * FUN_00106210(byte *param_1,char param_2)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  sVar2 = strlen((char *)param_1);
  if (SUB168(ZEXT816(3) * ZEXT816(sVar2 + 1) >> 0x40,0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_001146d0();
  }
  pbVar3 = (byte *)FUN_00114480((sVar2 + 1) * 3);
  pbVar5 = pbVar3;
LAB_0010625f:
  do {
    bVar1 = *param_1;
    pbVar4 = pbVar5;
    while( true ) {
      if (bVar1 == 0) {
        *pbVar4 = 0;
        return pbVar3;
      }
      param_1 = param_1 + 1;
      if ((bVar1 == 0x2f) && (param_2 != '\0')) {
        *pbVar4 = 0x2f;
        pbVar5 = pbVar4 + 1;
        goto LAB_0010625f;
      }
      if ((&DAT_00320fe0)[(ulong)bVar1] == '\0') break;
      *pbVar4 = bVar1;
      bVar1 = *param_1;
      pbVar4 = pbVar4 + 1;
    }
    pbVar5 = pbVar4 + 3;
    __sprintf_chk(pbVar4,1,0xffffffffffffffff,"%%%02x",(ulong)bVar1);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00106423)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_001062f0(void)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  uVar3 = DAT_003213b0;
  if (_DAT_00321398 < (DAT_003213b0 >> 1) + DAT_003213b0) {
    free(DAT_003213a0);
    if (SUB168(ZEXT816(0x18) * ZEXT816(uVar3) >> 0x40,0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_001146d0();
    }
    DAT_003213a0 = (long *)FUN_00114480(uVar3 * 0x18);
    _DAT_00321398 = DAT_003213b0 * 3;
  }
  if (DAT_003213b0 != 0) {
    lVar9 = DAT_003213c0 + DAT_003213b0 * 200;
    lVar5 = DAT_003213c0;
    plVar8 = DAT_003213a0;
    do {
      *plVar8 = lVar5;
      lVar5 = lVar5 + 200;
      plVar8 = plVar8 + 1;
    } while (lVar9 != lVar5);
  }
  if (DAT_00321330 != -1) {
    iVar4 = _setjmp((__jmp_buf_tag *)&DAT_00320300);
    uVar3 = DAT_003213b0;
    plVar8 = DAT_003213a0;
    iVar2 = DAT_00321330;
    if (iVar4 != 0) {
      if (DAT_00321330 == 3) {
                    // WARNING: Subroutine does not return
        __assert_fail("sort_type != sort_version","src/ls.c",0xee5,"sort_files");
      }
      if (DAT_003213b0 != 0) {
        plVar1 = DAT_003213a0 + DAT_003213b0;
        plVar6 = DAT_003213a0;
        lVar9 = DAT_003213c0;
        do {
          *plVar6 = lVar9;
          plVar6 = plVar6 + 1;
          lVar9 = lVar9 + 200;
        } while (plVar6 != plVar1);
      }
      iVar4 = 1;
    }
    iVar7 = 0;
    if (iVar2 == 4) {
      iVar7 = DAT_00321334;
    }
    FUN_001105e0(plVar8,uVar3,
                 (&PTR_FUN_0031f000)
                 [(ulong)DAT_003212f4 +
                  ((ulong)DAT_0032132f + ((long)iVar4 + (ulong)(uint)(iVar7 + iVar2) * 2) * 2) * 2])
    ;
  }
  return;
}



void FUN_00106490(char *param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  strcoll(param_1,param_2);
  return;
}



undefined8 FUN_001064c0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[9];
  lVar2 = param_1[9];
  if (param_1[9] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    return 1;
  }
  uVar3 = FUN_00106490(*param_1,*param_2);
  return uVar3;
}



undefined8 FUN_001064f0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[9];
  lVar2 = param_2[9];
  if (param_2[9] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    return 1;
  }
  uVar3 = FUN_00106490(*param_2,*param_1);
  return uVar3;
}



void FUN_00106530(undefined8 *param_1,undefined8 *param_2)

{
  FUN_00106490(*param_1,*param_2);
  return;
}



void FUN_00106540(undefined8 *param_1,undefined8 *param_2)

{
  FUN_00106490(*param_2,*param_1);
  return;
}



void FUN_00106550(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0010d3c0(*param_2,*param_1);
  return;
}



void FUN_00106560(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0010d3c0(*param_1,*param_2);
  return;
}



void FUN_00106570(long param_1,byte param_2)

{
  long *plVar1;
  int iVar2;
  char **ppcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  void *__ptr;
  long lVar9;
  
  if ((param_1 != 0) && (DAT_003213c8 != 0)) {
    FUN_00105f80(0,param_1,0);
  }
  lVar9 = DAT_003213b0 * 8;
  plVar6 = DAT_003213a0;
  lVar5 = DAT_003213b0;
joined_r0x001065b7:
  do {
    lVar5 = lVar5 + -1;
    DAT_003213a0 = plVar6;
    if (lVar5 == -1) {
      if (DAT_003213b0 != 0) {
        plVar1 = plVar6 + DAT_003213b0;
        DAT_003213b0 = 0;
        plVar7 = plVar6;
        do {
          iVar2 = *(int *)(*plVar7 + 0xa8);
          plVar6[DAT_003213b0] = *plVar7;
          plVar7 = plVar7 + 1;
          DAT_003213b0 = DAT_003213b0 + (ulong)(iVar2 != 9);
        } while (plVar1 != plVar7);
      }
      return;
    }
    lVar9 = lVar9 + -8;
    ppcVar3 = *(char ***)((long)plVar6 + lVar9);
  } while ((*(int *)(ppcVar3 + 0x15) != 3) && (*(int *)(ppcVar3 + 0x15) != 9));
  pcVar4 = *ppcVar3;
  if (param_1 != 0) goto code_r0x00106649;
  goto LAB_001066a0;
code_r0x00106649:
  pcVar8 = (char *)FUN_0010ce10(pcVar4);
  if ((*pcVar8 != '.') ||
     ((plVar6 = DAT_003213a0, pcVar8[(ulong)(pcVar8[1] == '.') + 1] != '\0' &&
      (pcVar8[(ulong)(pcVar8[1] == '.') + 1] != '/')))) {
    if (*pcVar4 == '/') {
LAB_001066a0:
      FUN_00105f80(pcVar4,ppcVar3[1],(ulong)param_2);
    }
    else {
      __ptr = (void *)FUN_0010d200(param_1,pcVar4,0);
      FUN_00105f80(__ptr,ppcVar3[1],(ulong)param_2);
      free(__ptr);
    }
    plVar6 = DAT_003213a0;
    if (*(int *)(ppcVar3 + 0x15) == 9) {
      FUN_00106090(ppcVar3);
      plVar6 = DAT_003213a0;
    }
  }
  goto joined_r0x001065b7;
}



char * FUN_001066e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  undefined in_AL;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  if (param_2 <= param_1) {
    return (char *)_in_AL;
  }
  do {
    while( true ) {
      uVar5 = DAT_003212c0;
      uVar3 = param_1 + 1;
      pcVar1 = stdout->_IO_write_ptr;
      if ((DAT_003212c0 == 0) || (param_2 / DAT_003212c0 <= uVar3 / DAT_003212c0)) break;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = '\t';
      }
      else {
        __overflow(stdout,9);
        uVar5 = DAT_003212c0;
      }
      uVar3 = param_1 / uVar5;
      param_1 = (uVar5 + param_1) - param_1 % uVar5;
      if (param_2 <= param_1) {
        return (char *)uVar3;
      }
    }
    if (pcVar1 < stdout->_IO_write_end) {
      pcVar4 = pcVar1 + 1;
      stdout->_IO_write_ptr = pcVar4;
      *pcVar1 = ' ';
    }
    else {
      iVar2 = __overflow(stdout,0x20);
      pcVar4 = (char *)CONCAT44(extraout_var,iVar2);
    }
    param_1 = uVar3;
  } while (uVar3 < param_2);
  return pcVar4;
}



void FUN_001067b0(char *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(undefined8 *)((long)puVar1 - (long)puVar5) >> 3 != 0) {
    if (puVar1 == puVar5) {
      *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) | 2;
    }
    uVar4 = (long)puVar1 + *(ulong *)(param_2 + 0x30) & ~*(ulong *)(param_2 + 0x30);
    *(ulong *)(param_2 + 0x18) = uVar4;
    if ((ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 8)) < uVar4 - *(long *)(param_2 + 8)
       ) {
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x20);
    }
    puVar1 = (undefined8 *)
             ((long)puVar5 +
             ((ulong)(undefined8 *)((long)puVar1 - (long)puVar5) & 0xfffffffffffffff8));
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x18);
    fputs_unlocked(param_1,stdout);
    do {
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      __printf_chk(1,&DAT_00117c23,uVar2);
    } while (puVar5 != puVar1);
    pcVar3 = ((_IO_FILE *)stdout)->_IO_write_ptr;
    if (((_IO_FILE *)stdout)->_IO_write_end <= pcVar3) {
      __overflow((_IO_FILE *)stdout,10);
      return;
    }
    ((_IO_FILE *)stdout)->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = '\n';
  }
  return;
}



void FUN_00106880(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  if (param_1 == (char *)0x0) {
    lVar4 = (long)(int)param_3;
    __printf_chk(1,"%*lu ",param_3,param_2);
  }
  else {
    iVar2 = FUN_00110370(param_1,0);
    iVar2 = (int)param_3 - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    fputs_unlocked(param_1,stdout);
    sVar3 = strlen(param_1);
    lVar4 = (long)iVar2 + sVar3;
    do {
      pcVar1 = ((_IO_FILE *)stdout)->_IO_write_ptr;
      if (pcVar1 < ((_IO_FILE *)stdout)->_IO_write_end) {
        ((_IO_FILE *)stdout)->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = ' ';
      }
      else {
        __overflow((_IO_FILE *)stdout,0x20);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  DAT_003211f8 = lVar4 + 1 + DAT_003211f8;
  return;
}



void FUN_00106940(ulong param_1,uint param_2,char param_3)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_00117c2e;
  if ((param_3 != '\0') && (puVar1 = (undefined1 *)0x0, DAT_0032132d == '\0')) {
    puVar1 = (undefined1 *)FUN_0010f910();
  }
  FUN_00106880(puVar1,param_1 & 0xffffffff,(ulong)param_2);
  return;
}



void FUN_00106980(void)

{
  if (DAT_00321218 == 0) {
    DAT_00321214 = DAT_00321214 + 1;
  }
  return;
}



void FUN_001069a0(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00113a10(4,param_3);
  puVar2 = (uint *)__errno_location();
  error(0,(ulong)*puVar2,param_2,uVar1);
  if (param_1 == '\0') {
    if (DAT_00321210 == 0) {
      DAT_00321210 = 1;
      return;
    }
  }
  else {
    DAT_00321210 = 2;
  }
  return;
}



ulong FUN_00106a10(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  bool bVar6;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar6)) {
    return 0xffffffff;
  }
  if ((bVar6) || (uVar5 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_2[0xe];
    pcVar2 = param_1[0xe];
    if (param_1[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return 0xffffffff;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    uVar3 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



undefined8 FUN_00106a90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar5)) {
    return 0xffffffff;
  }
  if ((bVar5) || (iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_2[9];
    lVar3 = param_1[9];
    if (param_1[9] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar2 <= lVar3) {
      uVar4 = FUN_00106490(*param_1,*param_2);
      return uVar4;
    }
  }
  return 1;
}



undefined8 FUN_00106b00(char **param_1,char **param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 extraout_var;
  
  iVar4 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 == 9 || iVar1 == 3) || (iVar4 != 3 && iVar4 != 9)) {
    if ((iVar4 != 3 && iVar4 != 9) && (iVar1 == 9 || iVar1 == 3)) {
      return 1;
    }
    pcVar2 = param_2[9];
    pcVar3 = param_1[9];
    if (param_1[9] == pcVar2 || (long)pcVar3 < (long)pcVar2) {
      if ((long)pcVar2 <= (long)pcVar3) {
        iVar4 = strcmp(*param_1,*param_2);
        return CONCAT44(extraout_var,iVar4);
      }
      return 1;
    }
  }
  return 0xffffffff;
}



undefined8 FUN_00106b80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar5)) {
    return 0xffffffff;
  }
  if ((bVar5) || (iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_1[9];
    lVar3 = param_2[9];
    if (param_2[9] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar2 <= lVar3) {
      uVar4 = FUN_00106490(*param_2,*param_1);
      return uVar4;
    }
  }
  return 1;
}



undefined8 FUN_00106bf0(char **param_1,char **param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 extraout_var;
  
  iVar4 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 == 9 || iVar1 == 3) || (iVar4 != 3 && iVar4 != 9)) {
    if ((iVar4 != 3 && iVar4 != 9) && (iVar1 == 9 || iVar1 == 3)) {
      return 1;
    }
    pcVar2 = param_1[9];
    pcVar3 = param_2[9];
    if (param_2[9] == pcVar2 || (long)pcVar3 < (long)pcVar2) {
      if ((long)pcVar2 <= (long)pcVar3) {
        iVar4 = strcmp(*param_2,*param_1);
        return CONCAT44(extraout_var,iVar4);
      }
      return 1;
    }
  }
  return 0xffffffff;
}



undefined8 FUN_00106c70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 != 9 && iVar2 != 3) && (iVar1 == 3 || iVar1 == 9)) {
    return 0xffffffff;
  }
  if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
    return 1;
  }
  uVar3 = FUN_00106490(*param_1,*param_2);
  return uVar3;
}



undefined8 FUN_00106cd0(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return 0xffffffff;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  iVar2 = strcmp(*param_1,*param_2);
  return CONCAT44(extraout_var,iVar2);
}



undefined8 FUN_00106d30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 != 9 && iVar2 != 3) && (iVar1 == 3 || iVar1 == 9)) {
    return 0xffffffff;
  }
  if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
    return 1;
  }
  uVar3 = FUN_00106490(*param_2,*param_1);
  return uVar3;
}



undefined8 FUN_00106d90(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return 0xffffffff;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  iVar2 = strcmp(*param_2,*param_1);
  return CONCAT44(extraout_var,iVar2);
}



ulong FUN_00106df0(char param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == '\0') {
    if (param_3 == 5) {
      return 0;
    }
    bVar3 = param_3 == 3 || param_3 == 9;
  }
  else {
    uVar1 = (uint)param_2 & 0xf000;
    if (uVar1 == 0x8000) {
      if (DAT_00321314 != 3) {
        return 0;
      }
      return (ulong)(~-(uint)((param_2 & 0x49) == 0) & 0x2a);
    }
    bVar3 = uVar1 == 0x4000;
  }
  uVar2 = 0x2f;
  if ((bVar3) || (uVar2 = 0, DAT_00321314 == 1)) {
    return uVar2;
  }
  if (param_1 == '\0') {
    if (param_3 == 6) {
      return 0x40;
    }
    if (param_3 == 1) {
      return 0x7c;
    }
    bVar3 = param_3 == 7;
  }
  else {
    uVar1 = (uint)param_2 & 0xf000;
    if (uVar1 == 0xa000) {
      return 0x40;
    }
    if (uVar1 == 0x1000) {
      return 0x7c;
    }
    bVar3 = uVar1 == 0xc000;
  }
  return (ulong)(-(uint)bVar3 & 0x3d);
}



ulong FUN_00106ef0(byte param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 extraout_var;
  
  pcVar3 = (char *)FUN_00106df0((ulong)param_1);
  cVar1 = (char)pcVar3;
  pcVar4 = pcVar3;
  if (cVar1 != '\0') {
    pcVar4 = stdout->_IO_write_ptr;
    if (pcVar4 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = cVar1;
    }
    else {
      iVar2 = __overflow(stdout,(uint)pcVar3 & 0xff);
      pcVar4 = (char *)CONCAT44(extraout_var,iVar2);
    }
    DAT_003211f8 = DAT_003211f8 + 1;
  }
  return (ulong)pcVar4 & 0xffffffffffffff00 | (ulong)(cVar1 != '\0');
}



undefined8 FUN_00106f40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 3 || iVar1 == 9)) {
    return 0xffffffff;
  }
  if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 3 || iVar2 == 9)) {
    return 1;
  }
  uVar3 = FUN_0010d3c0(*param_2,*param_1);
  return uVar3;
}



undefined8 FUN_00106fa0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 3 || iVar1 == 9)) {
    return 0xffffffff;
  }
  if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 3 || iVar2 == 9)) {
    return 1;
  }
  uVar3 = FUN_0010d3c0(*param_1,*param_2);
  return uVar3;
}



undefined8 FUN_00107000(char **param_1,char **param_2)

{
  int iVar1;
  char *__s;
  char *__s_00;
  int iVar2;
  char *__s1;
  char *__s2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return 0xffffffff;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  __s = *param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_00107094;
  }
  else {
    if (__s1 == (char *)0x0) {
      __s1 = "";
    }
  }
  iVar2 = strcmp(__s1,__s2);
  if (iVar2 != 0) {
    return CONCAT44(extraout_var,iVar2);
  }
LAB_00107094:
  iVar2 = strcmp(__s,__s_00);
  return CONCAT44(extraout_var_00,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_001070d0(char param_1)

{
  int iVar1;
  int *piVar2;
  int __sig;
  int *piVar3;
  long in_FS_OFFSET;
  code *local_d8;
  undefined4 local_d0;
  undefined4 uStack204;
  undefined4 uStack200;
  undefined4 uStack196;
  undefined4 local_c0;
  undefined4 uStack188;
  undefined4 uStack184;
  undefined4 uStack180;
  undefined4 local_b0;
  undefined4 uStack172;
  undefined4 uStack168;
  undefined4 uStack164;
  undefined4 local_a0;
  undefined4 uStack156;
  undefined4 uStack152;
  undefined4 uStack148;
  undefined4 local_90;
  undefined4 uStack140;
  undefined4 uStack136;
  undefined4 uStack132;
  undefined4 local_80;
  undefined4 uStack124;
  undefined4 uStack120;
  undefined4 uStack116;
  undefined4 local_70;
  undefined4 uStack108;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 local_60;
  undefined4 uStack92;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 local_50;
  ulong local_40;
  
  local_40 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_1 == '\0') {
    piVar2 = &DAT_00116a64;
    __sig = 0x14;
    while( true ) {
      iVar1 = sigismember((sigset_t *)&DAT_00321220,__sig);
      if (iVar1 != 0) {
        signal(__sig,(__sighandler_t)0x0);
      }
      if (piVar2 == (int *)&DAT_00116a90) break;
      __sig = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  else {
    piVar3 = &DAT_00116a64;
    __sig = 0x14;
    sigemptyset((sigset_t *)&DAT_00321220);
    piVar2 = &DAT_00116a64;
    while( true ) {
      sigaction(__sig,(sigaction *)0x0,(sigaction *)&local_d8);
      if (local_d8 != (code *)0x1) {
        sigaddset((sigset_t *)&DAT_00321220,__sig);
      }
      if (piVar2 == (int *)&DAT_00116a90) break;
      __sig = *piVar2;
      piVar2 = piVar2 + 1;
    }
    __sig = 0x14;
    local_50 = 0x10000000;
    local_d0 = SUB164(_DAT_00321220,0);
    uStack204 = SUB164(_DAT_00321220 >> 0x20,0);
    uStack200 = SUB164(_DAT_00321220 >> 0x40,0);
    uStack196 = SUB164(_DAT_00321220 >> 0x60,0);
    local_c0 = SUB164(_DAT_00321230,0);
    uStack188 = SUB164(_DAT_00321230 >> 0x20,0);
    uStack184 = SUB164(_DAT_00321230 >> 0x40,0);
    uStack180 = SUB164(_DAT_00321230 >> 0x60,0);
    local_b0 = SUB164(_DAT_00321240,0);
    uStack172 = SUB164(_DAT_00321240 >> 0x20,0);
    uStack168 = SUB164(_DAT_00321240 >> 0x40,0);
    uStack164 = SUB164(_DAT_00321240 >> 0x60,0);
    local_a0 = SUB164(_DAT_00321250,0);
    uStack156 = SUB164(_DAT_00321250 >> 0x20,0);
    uStack152 = SUB164(_DAT_00321250 >> 0x40,0);
    uStack148 = SUB164(_DAT_00321250 >> 0x60,0);
    local_90 = SUB164(_DAT_00321260,0);
    uStack140 = SUB164(_DAT_00321260 >> 0x20,0);
    uStack136 = SUB164(_DAT_00321260 >> 0x40,0);
    uStack132 = SUB164(_DAT_00321260 >> 0x60,0);
    local_80 = SUB164(_DAT_00321270,0);
    uStack124 = SUB164(_DAT_00321270 >> 0x20,0);
    uStack120 = SUB164(_DAT_00321270 >> 0x40,0);
    uStack116 = SUB164(_DAT_00321270 >> 0x60,0);
    local_70 = SUB164(_DAT_00321280,0);
    uStack108 = SUB164(_DAT_00321280 >> 0x20,0);
    uStack104 = SUB164(_DAT_00321280 >> 0x40,0);
    uStack100 = SUB164(_DAT_00321280 >> 0x60,0);
    local_60 = SUB164(_DAT_00321290,0);
    uStack92 = SUB164(_DAT_00321290 >> 0x20,0);
    uStack88 = SUB164(_DAT_00321290 >> 0x40,0);
    uStack84 = SUB164(_DAT_00321290 >> 0x60,0);
    while( true ) {
      iVar1 = sigismember((sigset_t *)&DAT_00321220,__sig);
      if (iVar1 != 0) {
        local_d8 = FUN_00106980;
        if (__sig != 0x14) {
          local_d8 = FUN_00105990;
        }
        sigaction(__sig,(sigaction *)&local_d8,(sigaction *)0x0);
      }
      if (piVar3 == (int *)&DAT_00116a90) break;
      __sig = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  if (local_40 == *(ulong *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_001072a0(void)

{
  if (_DAT_00320088 != 0) {
    FUN_001072f0(&DAT_00320080);
    return;
  }
  FUN_001072f0(&DAT_00320060);
  FUN_001072f0(&DAT_00320090);
  FUN_001072f0(&DAT_00320070);
  return;
}



void FUN_001072f0(size_t *param_1)

{
  __pid_t _Var1;
  
  if (DAT_00321310 == '\0') {
    DAT_00321310 = '\x01';
    _Var1 = tcgetpgrp(1);
    if (_Var1 < 0) {
      FUN_001072a0();
    }
    else {
      FUN_001070d0(1);
      FUN_001072a0();
    }
  }
  fwrite_unlocked((void *)param_1[1],*param_1,1,stdout);
  return;
}



void FUN_00107360(void)

{
  int __sig;
  long in_FS_OFFSET;
  undefined auStack168 [136];
  ulong local_20;
  
  local_20 = *(ulong *)(in_FS_OFFSET + 0x28);
  while ((DAT_00321218 != 0 || (DAT_00321214 != 0))) {
    if (DAT_00321310 != '\0') {
      FUN_001072f0(&DAT_00320060);
      FUN_001072f0(&DAT_00320070);
    }
    fflush_unlocked(stdout);
    sigprocmask(0,(sigset_t *)&DAT_00321220,(sigset_t *)auStack168);
    __sig = DAT_00321218;
    if (DAT_00321214 == 0) {
      signal(DAT_00321218,(__sighandler_t)0x0);
    }
    else {
      DAT_00321214 = DAT_00321214 + -1;
      __sig = 0x13;
    }
    raise(__sig);
    sigprocmask(2,(sigset_t *)auStack168,(sigset_t *)0x0);
  }
  if (local_20 == *(ulong *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00107450(void)

{
  char cVar1;
  
  if (DAT_00321312 == '\0') {
    return;
  }
  cVar1 = FUN_00105c50(4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_001072f0(&DAT_00320060);
  FUN_001072f0(&DAT_003200a0);
  FUN_001072f0(&DAT_00320070);
  return;
}



byte * FUN_001074a0(byte **param_1,byte *param_2,undefined8 param_3,int param_4,byte **param_5,
                   byte *param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *__dest;
  size_t sVar6;
  long lVar7;
  ushort **ppuVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *unaff_RBP;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long in_FS_OFFSET;
  byte bVar15;
  bool local_69;
  wchar_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  bVar15 = 0;
  __dest = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_00113590(param_3,param_2,param_3,0);
  local_69 = (bool)(uVar3 < 3 & DAT_003212d8);
  if (local_69 == false) {
    bVar1 = false;
    if (param_4 == 0) {
      pbVar10 = (byte *)strlen((char *)param_2);
    }
    else {
LAB_001074fd:
      pbVar10 = (byte *)FUN_00113660(__dest,0x2000,param_2,0xffffffffffffffff,param_3);
      if ((byte *)0x1fff < pbVar10) {
        __dest = (byte *)FUN_00114480(pbVar10 + 1);
        FUN_00113660(__dest,pbVar10 + 1,param_2,0xffffffffffffffff,param_3);
      }
      local_69 = true;
      if (*param_2 == *__dest) {
        pbVar5 = (byte *)strlen((char *)param_2);
        local_69 = pbVar10 != pbVar5;
      }
      param_2 = __dest;
      if (bVar1) goto LAB_00107683;
    }
    if (param_5 == (byte **)0x0) {
      __dest = param_2;
      if (DAT_003213a8 == 0) {
        *param_6 = 0;
        goto LAB_00107605;
      }
    }
    else {
      sVar6 = __ctype_get_mb_cur_max();
      if (sVar6 < 2) {
        if (param_2 < param_2 + (long)pbVar10) {
          ppuVar8 = __ctype_b_loc();
          unaff_RBP = (byte *)0x0;
          __dest = param_2;
          do {
            unaff_RBP = unaff_RBP + (((*ppuVar8)[*__dest] & 0x4000) != 0);
            __dest = __dest + 1;
            bVar2 = DAT_003213a8;
          } while (param_2 + (long)pbVar10 != __dest);
        }
        else {
          unaff_RBP = (byte *)0x0;
          bVar2 = DAT_003213a8;
        }
      }
      else {
        iVar4 = FUN_001101b0(param_2,pbVar10,0);
        unaff_RBP = (byte *)(long)iVar4;
        bVar2 = DAT_003213a8;
      }
joined_r0x001075de:
      __dest = param_2;
      DAT_003213a8 = bVar2;
      if (bVar2 == 0) goto LAB_001075f1;
    }
LAB_001075e0:
    bVar2 = (DAT_003213a9 ^ 1 | local_69) ^ 1;
    param_2 = __dest;
  }
  else {
    if (param_4 != 0) {
      bVar1 = true;
      goto LAB_001074fd;
    }
    pbVar10 = (byte *)strlen((char *)param_2);
    if ((byte *)0x1fff < pbVar10) {
      __dest = (byte *)FUN_00114480(pbVar10 + 1);
    }
    memcpy(__dest,param_2,(size_t)(pbVar10 + 1));
    local_69 = false;
LAB_00107683:
    pbVar5 = __dest + (long)pbVar10;
    sVar6 = __ctype_get_mb_cur_max();
    param_2 = __dest;
    bVar2 = DAT_003213a8;
    if (sVar6 < 2) {
      unaff_RBP = pbVar10;
      if (__dest < pbVar5) {
        ppuVar8 = __ctype_b_loc();
        pbVar14 = __dest;
        do {
          if ((*(byte *)((long)*ppuVar8 + (ulong)*pbVar14 * 2 + 1) & 0x40) == 0) {
            *pbVar14 = 0x3f;
          }
          pbVar14 = pbVar14 + 1;
          bVar2 = DAT_003213a8;
        } while (pbVar14 != pbVar5);
      }
    }
    else {
      if (pbVar5 <= __dest) {
        pbVar10 = (byte *)0x0;
        unaff_RBP = (byte *)0x0;
        goto joined_r0x001075de;
      }
      unaff_RBP = (byte *)0x0;
      pbVar10 = __dest;
      pbVar14 = __dest;
      do {
        bVar2 = *pbVar14;
        if ((char)bVar2 < '@') {
          if (('$' < (char)bVar2) || ((byte)(bVar2 - 0x20) < 4)) goto LAB_00107808;
LAB_001076e0:
          local_48 = (mbstate_t)0x0;
          pbVar9 = pbVar10;
          pbVar13 = pbVar14;
          do {
            pbVar10 = pbVar9 + 1;
            lVar7 = FUN_00115310(&local_4c,pbVar13,pbVar5 + -(long)pbVar13,&local_48);
            if (lVar7 == -1) {
              pbVar14 = pbVar13 + 1;
              *pbVar9 = 0x3f;
LAB_0010782b:
              unaff_RBP = unaff_RBP + 1;
              break;
            }
            if (lVar7 == -2) {
              *pbVar9 = 0x3f;
              pbVar14 = pbVar5;
              goto LAB_0010782b;
            }
            if (lVar7 == 0) {
              iVar4 = wcwidth(local_4c);
              pbVar14 = pbVar13 + 1;
              if (-1 < iVar4) {
                *pbVar9 = *pbVar13;
                goto LAB_0010775f;
              }
LAB_001077c0:
              *pbVar9 = 0x3f;
              unaff_RBP = unaff_RBP + 1;
            }
            else {
              iVar4 = wcwidth(local_4c);
              pbVar14 = pbVar13 + lVar7;
              pbVar12 = pbVar9;
              if (iVar4 < 0) goto LAB_001077c0;
              do {
                pbVar11 = pbVar13 + (ulong)bVar15 * -2 + 1;
                *pbVar12 = *pbVar13;
                pbVar12 = pbVar12 + (ulong)bVar15 * -2 + 1;
                pbVar13 = pbVar11;
              } while (pbVar11 != pbVar14);
              pbVar10 = pbVar9 + lVar7;
              pbVar14 = pbVar11;
LAB_0010775f:
              unaff_RBP = unaff_RBP + iVar4;
            }
            iVar4 = mbsinit(&local_48);
            pbVar9 = pbVar10;
            pbVar13 = pbVar14;
          } while (iVar4 == 0);
        }
        else {
          if (((char)bVar2 < 'A') || (('_' < (char)bVar2 && (0x1d < (byte)(bVar2 + 0x9f)))))
          goto LAB_001076e0;
LAB_00107808:
          *pbVar10 = bVar2;
          pbVar14 = pbVar14 + 1;
          unaff_RBP = unaff_RBP + 1;
          pbVar10 = pbVar10 + 1;
        }
      } while (pbVar14 < pbVar5);
      pbVar10 = pbVar10 + -(long)__dest;
      bVar2 = DAT_003213a8;
    }
    DAT_003213a8 = bVar2;
    if (bVar2 != 0) goto LAB_001075e0;
  }
LAB_001075f1:
  *param_6 = bVar2;
  if (param_5 != (byte **)0x0) {
    *param_5 = unaff_RBP;
  }
LAB_00107605:
  *param_1 = param_2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pbVar10;
}



long FUN_00107910(byte *param_1,undefined8 param_2,ulong param_3,long param_4,char param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  size_t sVar5;
  void *__ptr;
  char *__ptr_00;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  size_t __n;
  long in_FS_OFFSET;
  byte local_2051;
  byte *local_2050;
  byte local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2050 = local_2048;
  sVar5 = FUN_001074a0(&local_2050,param_1,param_2,param_3 & 0xffffffff,0);
  if ((local_2051 != 0) && (param_5 != '\0')) {
    __ptr_00 = ((_IO_FILE *)stdout)->_IO_write_ptr;
    if (__ptr_00 < ((_IO_FILE *)stdout)->_IO_write_end) {
      ((_IO_FILE *)stdout)->_IO_write_ptr = __ptr_00 + 1;
      *__ptr_00 = ' ';
    }
    else {
      __overflow((_IO_FILE *)stdout,0x20);
    }
    DAT_003211f8 = DAT_003211f8 + 1;
  }
  if (param_4 != 0) {
    cVar4 = FUN_00105c50(4);
    if (cVar4 != '\0') {
      FUN_001072f0(&DAT_00320060);
      FUN_001072f0(&DAT_00320070);
    }
    FUN_001072f0(&DAT_00320060);
    FUN_001072f0(param_4);
    FUN_001072f0(&DAT_00320070);
  }
  cVar4 = DAT_003213a9;
  __n = sVar5;
  if (param_7 == 0) {
    lVar8 = 0;
    cVar4 = '\0';
  }
  else {
    cVar3 = DAT_003213a8;
    if ((DAT_003213a8 == '\0') || (cVar3 = DAT_003213a9, DAT_003213a9 == '\0')) {
      cVar4 = cVar3;
      lVar8 = 0;
    }
    else {
      if (local_2051 == 0) {
        bVar1 = *local_2050;
        pbVar2 = (byte *)((_IO_FILE *)stdout)->_IO_write_ptr;
        __n = sVar5 - 2;
        if (pbVar2 < ((_IO_FILE *)stdout)->_IO_write_end) {
          lVar8 = 1;
          *(byte **)&((_IO_FILE *)stdout)->_IO_write_ptr = pbVar2 + 1;
          *pbVar2 = bVar1;
        }
        else {
          __overflow((_IO_FILE *)stdout,(uint)bVar1);
          lVar8 = 1;
        }
      }
      else {
        lVar8 = 0;
        cVar4 = '\0';
      }
    }
    __ptr = (void *)FUN_00106210(DAT_00321388,0);
    __ptr_00 = (char *)FUN_00106210(param_7,1);
    puVar6 = (undefined1 *)0x117f4d;
    if (*__ptr_00 == '/') {
      puVar6 = &DAT_00117c4a;
    }
    __printf_chk(1,&DAT_00117c30,__ptr,puVar6,__ptr_00);
    free(__ptr);
    free(__ptr_00);
  }
  if (param_6 == 0) {
    fwrite_unlocked(local_2050 + lVar8,1,__n,stdout);
    DAT_003211f8 = DAT_003211f8 + sVar5;
  }
  else {
    if (DAT_00321318 != '\0') {
      plVar7 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar7) < 8) {
        _obstack_newchunk(param_6,8);
        plVar7 = *(long **)(param_6 + 0x18);
      }
      *plVar7 = DAT_003211f8;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
    fwrite_unlocked(local_2050 + lVar8,1,__n,stdout);
    DAT_003211f8 = DAT_003211f8 + sVar5;
    if (DAT_00321318 != '\0') {
      plVar7 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar7) < 8) {
        _obstack_newchunk(param_6,8);
        plVar7 = *(long **)(param_6 + 0x18);
      }
      *plVar7 = DAT_003211f8;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
  }
  if ((param_7 != 0) && (fwrite_unlocked(&DAT_00117c44,1,6,stdout), cVar4 != '\0')) {
    bVar1 = local_2050[sVar5 - 1];
    pbVar2 = (byte *)((_IO_FILE *)stdout)->_IO_write_ptr;
    if (pbVar2 < ((_IO_FILE *)stdout)->_IO_write_end) {
      *(byte **)&((_IO_FILE *)stdout)->_IO_write_ptr = pbVar2 + 1;
      *pbVar2 = bVar1;
    }
    else {
      __overflow((_IO_FILE *)stdout,(uint)bVar1);
    }
  }
  if ((local_2050 != param_1) && (local_2050 != local_2048)) {
    free(local_2050);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_2051 + sVar5;
}



long FUN_00107d20(char **param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulong __n;
  ulong *puVar6;
  long lVar7;
  char *__s;
  uint uVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    __s = *param_1;
    if (DAT_00321312 == '\0') goto LAB_00107d52;
    uVar8 = (uint)*(byte *)((long)param_1 + 0xb9);
    if ((DAT_00321390 == '\0') || (*(byte *)((long)param_1 + 0xb9) == 0)) {
      __n = (ulong)*(uint *)(param_1 + 6);
    }
    else {
      __n = (ulong)*(uint *)((long)param_1 + 0xac);
    }
LAB_00107dbf:
    bVar9 = *(bool *)(param_1 + 0x17);
    if (bVar9 == false) goto LAB_00107dcf;
LAB_00107f12:
    uVar2 = (uint)__n & 0xf000;
    if (uVar2 == 0x8000) {
      if (((__n & 0x800) != 0) && (cVar1 = FUN_00105c50(0x10), cVar1 != '\0')) {
        lVar7 = 0x100;
        goto LAB_00107e27;
      }
      uVar8 = (uint)__n;
      if (((__n & 0x400) != 0) && (cVar1 = FUN_00105c50(0x11), cVar1 != '\0')) {
        lVar7 = 0x110;
        goto LAB_00107e27;
      }
      cVar1 = FUN_00105c50(0x15);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
        lVar7 = 0x150;
        goto LAB_00107e27;
      }
      if (((uVar8 & 0x49) != 0) && (cVar1 = FUN_00105c50(0xe), cVar1 != '\0')) {
        lVar7 = 0xe0;
        goto LAB_00107e27;
      }
      if (((char *)0x1 < param_1[5]) && (cVar1 = FUN_00105c50(0x16), cVar1 != '\0')) {
        lVar7 = 0x160;
        goto LAB_00107e27;
      }
      goto LAB_00107fa0;
    }
    if (uVar2 != 0x4000) {
      if (uVar2 != 0xa000) {
        lVar7 = 0x80;
        if ((((uVar2 != 0x1000) && (lVar7 = 0x90, uVar2 != 0xc000)) &&
            (lVar7 = 0xa0, uVar2 != 0x6000)) && (lVar7 = 0xd0, uVar2 == 0x2000)) {
          lVar7 = 0xb0;
        }
        goto LAB_00107e27;
      }
      __n = 7;
      goto LAB_00107def;
    }
    if (((uint)__n & 0x202) == 0x202) {
      cVar1 = FUN_00105c50(0x14);
      lVar7 = 0x140;
      if (cVar1 != '\0') goto LAB_00107e27;
    }
    uVar8 = (uint)__n;
    if ((__n & 2) != 0) {
      cVar1 = FUN_00105c50(0x13);
      lVar7 = 0x130;
      if (cVar1 != '\0') goto LAB_00107e27;
    }
    lVar7 = 0x60;
    if ((uVar8 & 0x200) != 0) {
      cVar1 = FUN_00105c50(0x12);
      lVar7 = (-(ulong)(cVar1 == '\0') & 0xffffffffffffff40) + 0x120;
    }
  }
  else {
    __s = param_1[1];
    if (DAT_00321312 == '\0') goto LAB_00107d52;
    __n = (ulong)*(uint *)((long)param_1 + 0xac);
    if (*(char *)((long)param_1 + 0xb9) == '\0') {
      cVar1 = FUN_00105c50(0xc);
      uVar8 = 0xffffffff;
      if (cVar1 == '\0') goto LAB_00107dbf;
      lVar7 = 0xc0;
      goto LAB_00107e27;
    }
    bVar9 = *(bool *)(param_1 + 0x17);
    uVar8 = 0;
    if (bVar9 != false) goto LAB_00107f12;
LAB_00107dcf:
    uVar2 = *(uint *)(&DAT_00116aa0 + (ulong)*(uint *)(param_1 + 0x15) * 4);
    __n = (ulong)uVar2;
    bVar9 = uVar2 == 7;
    if (uVar2 == 5) {
LAB_00107fa0:
      sVar5 = strlen(__s);
      puVar6 = DAT_00321308;
      while (puVar6 != (ulong *)0x0) {
        __n = *puVar6;
        if ((__n <= sVar5) &&
           (iVar3 = strncmp(__s + (sVar5 - __n),(char *)puVar6[1],__n), iVar3 == 0)) {
          puVar6 = puVar6 + 2;
          goto LAB_00107e31;
        }
        puVar6 = (ulong *)puVar6[4];
      }
      lVar7 = 0x50;
    }
    else {
LAB_00107def:
      if ((uVar8 == 0) && (bVar9 != false)) {
        lVar7 = 0xd0;
        if (DAT_00321390 == '\0') {
          cVar1 = FUN_00105c50(0xd);
          lVar7 = (-(ulong)(cVar1 == '\0') & 0xffffffffffffffa0) + 0xd0;
        }
      }
      else {
        lVar7 = __n << 4;
      }
    }
  }
LAB_00107e27:
  puVar6 = (ulong *)(&DAT_00320060 + lVar7);
LAB_00107e31:
  if (puVar6[1] == 0) {
    cVar1 = FUN_00105c50(4);
    if (cVar1 == '\0') {
LAB_00107d52:
      uVar4 = FUN_00107910(__s,DAT_003212d0,(ulong)*(uint *)((long)param_1 + 0xc4),0,
                           (ulong)(param_2 ^ 1),param_3,param_1[2]);
      FUN_00107360();
      return uVar4;
    }
    puVar6 = (ulong *)0x0;
  }
  lVar7 = FUN_00107910(__s,DAT_003212d0,(ulong)*(uint *)((long)param_1 + 0xc4),puVar6,
                       (ulong)(param_2 ^ 1),param_3,param_1[2]);
  FUN_00107360();
  FUN_001072a0();
  if (DAT_003212b0 == 0) {
    return lVar7;
  }
  if (param_4 / DAT_003212b0 == (lVar7 + -1 + param_4) / DAT_003212b0) {
    return lVar7;
  }
  FUN_001072f0(&DAT_003201d0);
  return lVar7;
}



long FUN_00108180(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_RDX;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined auStack696 [664];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00107450();
  if (DAT_003212fc != '\0') {
    puVar3 = &DAT_00117c2e;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar3 = (undefined1 *)
               FUN_0010fcf0(*(long *)(param_1 + 0x20),auStack696,extraout_RDX,&DAT_00117c2e);
    }
    uVar4 = 0;
    if (DAT_00321338 != 4) {
      uVar4 = (ulong)DAT_00321360;
    }
    __printf_chk(1,&DAT_00117c5b,uVar4,puVar3);
  }
  if (DAT_0032132c != '\0') {
    puVar3 = &DAT_00117c2e;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      puVar3 = (undefined1 *)
               FUN_0010ed10(*(undefined8 *)(param_1 + 0x58),auStack696,(ulong)DAT_00321328,0x200,
                            DAT_00321320);
    }
    uVar4 = 0;
    if (DAT_00321338 != 4) {
      uVar4 = (ulong)DAT_0032135c;
    }
    __printf_chk(1,&DAT_00117c5b,uVar4,puVar3);
  }
  if (DAT_00321365 != '\0') {
    uVar4 = 0;
    if (DAT_00321338 != 4) {
      uVar4 = (ulong)DAT_00321354;
    }
    __printf_chk(1,&DAT_00117c5b,uVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  lVar2 = FUN_00107d20(param_1,0,0,param_2);
  if (DAT_00321314 != 0) {
    bVar1 = FUN_00106ef0((ulong)*(byte *)(param_1 + 0xb8),(ulong)*(uint *)(param_1 + 0x30),
                         (ulong)*(uint *)(param_1 + 0xa8));
    lVar2 = lVar2 + (ulong)bVar1;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_00108310(long param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  size_t sVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  uint *__s;
  long lVar14;
  int iVar15;
  undefined1 *puVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined8 local_1340;
  long local_1338;
  undefined8 local_1330;
  undefined local_1328 [16];
  int local_1318;
  undefined local_12e8 [16];
  int local_12d8;
  char local_12a4;
  undefined8 local_12a3;
  ushort local_129b;
  undefined local_1299;
  undefined local_1298 [32];
  undefined local_1278 [1008];
  uint local_e88 [914];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_12a4 = "?pcdb-lswd"[*(uint *)(param_1 + 0xa8)];
    local_12a3 = 0x3f3f3f3f3f3f3f3f;
    local_129b = 0x3f3f;
    local_129b._0_1_ = 0x3f;
    local_1299 = 0;
    if (DAT_00321364 == '\0') goto LAB_00108365;
LAB_00108752:
    if (*(int *)(param_1 + 0xbc) == 1) {
      local_129b = CONCAT11(0x2e,(byte)local_129b);
      goto LAB_0010836d;
    }
    if (*(int *)(param_1 + 0xbc) != 2) goto LAB_0010836d;
    local_129b = CONCAT11(0x2b,(byte)local_129b);
    if (DAT_00321334 == 1) goto LAB_00108788;
LAB_0010837c:
    if (DAT_00321334 == 0) {
      local_1330 = *(undefined8 *)(param_1 + 0x78);
      local_1338 = *(long *)(param_1 + 0x70);
    }
    else {
      if (DAT_00321334 != 2) {
                    // WARNING: Subroutine does not return
        abort();
      }
      local_1330 = *(undefined8 *)(param_1 + 0x68);
      local_1338 = *(long *)(param_1 + 0x60);
    }
    cVar10 = *(char *)(param_1 + 0xb8);
    if (DAT_003212fc == '\0') goto LAB_001087b4;
LAB_001083b1:
    puVar16 = &DAT_00117c2e;
    if ((cVar10 != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar16 = (undefined1 *)FUN_0010fcf0(*(long *)(param_1 + 0x20),local_1278);
    }
    __sprintf_chk(local_e88,1,0xe3b,&DAT_00117c5b,(ulong)DAT_00321360,puVar16);
    __s = local_e88;
    do {
      puVar5 = __s;
      uVar11 = *puVar5 + 0xfefefeff & ~*puVar5;
      uVar12 = uVar11 & 0x80808080;
      __s = puVar5 + 1;
    } while (uVar12 == 0);
    bVar18 = (uVar11 & 0x8080) == 0;
    bVar1 = (byte)uVar12;
    if (bVar18) {
      bVar1 = (byte)(uVar12 >> 0x10);
    }
    if (bVar18) {
      __s = (uint *)((long)puVar5 + 6);
    }
    cVar10 = *(char *)(param_1 + 0xb8);
    __s = (uint *)((long)__s + (-3 - (ulong)CARRY1(bVar1,bVar1)));
  }
  else {
    FUN_0010d1f0(param_1 + 0x18,&local_12a4);
    if (DAT_00321364 != '\0') goto LAB_00108752;
LAB_00108365:
    local_129b = (ushort)(byte)local_129b;
LAB_0010836d:
    if (DAT_00321334 != 1) goto LAB_0010837c;
LAB_00108788:
    local_1338 = *(long *)(param_1 + 0x80);
    local_1330 = *(undefined8 *)(param_1 + 0x88);
    cVar10 = *(char *)(param_1 + 0xb8);
    if (DAT_003212fc != '\0') goto LAB_001083b1;
LAB_001087b4:
    __s = local_e88;
  }
  if (DAT_0032132c != '\0') {
    pcVar17 = "?";
    if (cVar10 != '\0') {
      pcVar17 = (char *)FUN_0010ed10(*(undefined8 *)(param_1 + 0x58),local_1278,(ulong)DAT_00321328,
                                     0x200,DAT_00321320);
    }
    iVar15 = DAT_0032135c;
    iVar2 = FUN_00110370(pcVar17,0);
    if (0 < iVar15 - iVar2) {
      uVar11 = (iVar15 - iVar2) - 1;
      puVar5 = __s;
      do {
        puVar3 = (uint *)((long)puVar5 + 1);
        *(char *)puVar5 = ' ';
        puVar5 = puVar3;
      } while (puVar3 != (uint *)((long)__s + (ulong)uVar11 + 1));
      __s = (uint *)((long)__s + (long)(int)uVar11 + 1);
    }
    do {
      puVar5 = __s;
      cVar10 = *pcVar17;
      __s = (uint *)((long)puVar5 + 1);
      *(char *)puVar5 = cVar10;
      pcVar17 = pcVar17 + 1;
    } while (cVar10 != '\0');
    *(char *)puVar5 = ' ';
    cVar10 = *(char *)(param_1 + 0xb8);
  }
  puVar16 = &DAT_00117c2e;
  if (cVar10 != '\0') {
    puVar16 = (undefined1 *)FUN_0010fcf0(*(undefined8 *)(param_1 + 0x28),local_1278);
  }
  __sprintf_chk(__s,1,0xffffffffffffffff,"%s %*s ",&local_12a4,(ulong)DAT_00321358,puVar16);
  sVar4 = strlen((char *)__s);
  __s = (uint *)((long)__s + sVar4);
  if (DAT_00321318 != '\0') {
    fwrite_unlocked(&DAT_00117c53,1,2,stdout);
    DAT_003211f8 = DAT_003211f8 + 2;
  }
  if ((((DAT_00320021 != '\0') || (DAT_00320020 != '\0')) || (DAT_0032132e != '\0')) ||
     (DAT_00321365 != '\0')) {
    fputs_unlocked((char *)local_e88,stdout);
    DAT_003211f8 = (long)__s + (DAT_003211f8 - (long)local_e88);
    if (DAT_00320021 != '\0') {
      FUN_00106940((ulong)*(uint *)(param_1 + 0x34),(ulong)DAT_00321350,
                   (ulong)*(byte *)(param_1 + 0xb8));
    }
    uVar11 = DAT_0032134c;
    if (DAT_00320020 != '\0') {
      puVar16 = &DAT_00117c2e;
      uVar12 = *(uint *)(param_1 + 0x38);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar16 = (undefined1 *)0x0, DAT_0032132d == '\0')
         ) {
        puVar16 = (undefined1 *)FUN_0010fab0((ulong)uVar12);
      }
      FUN_00106880(puVar16,(ulong)uVar12,(ulong)uVar11);
    }
    if (DAT_0032132e != '\0') {
      FUN_00106940((ulong)*(uint *)(param_1 + 0x34),(ulong)DAT_00321348,
                   (ulong)*(byte *)(param_1 + 0xb8));
    }
    __s = local_e88;
    if (DAT_00321365 != '\0') {
      FUN_00106880(*(undefined8 *)(param_1 + 0xb0),0,(ulong)DAT_00321354);
    }
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pcVar17 = "?";
LAB_001085c6:
    iVar15 = DAT_0032133c;
    iVar2 = FUN_00110370(pcVar17,0);
    if (0 < iVar15 - iVar2) {
      uVar11 = (iVar15 - iVar2) - 1;
      puVar5 = __s;
      do {
        puVar3 = (uint *)((long)puVar5 + 1);
        *(undefined *)puVar5 = 0x20;
        puVar5 = puVar3;
      } while (puVar3 != (uint *)((long)__s + (ulong)uVar11 + 1));
      __s = (uint *)((long)__s + (long)(int)uVar11 + 1);
    }
    do {
      puVar5 = __s;
      cVar10 = *pcVar17;
      __s = (uint *)((long)puVar5 + 1);
      *(char *)puVar5 = cVar10;
      pcVar17 = pcVar17 + 1;
    } while (cVar10 != '\0');
    *(undefined *)puVar5 = 0x20;
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 0xb000) != 0x2000) {
      pcVar17 = (char *)FUN_0010ed10(*(undefined8 *)(param_1 + 0x48),local_1278,(ulong)DAT_0032131c,
                                     1);
      goto LAB_001085c6;
    }
    iVar2 = DAT_0032133c - (DAT_00321344 + 2 + DAT_00321340);
    uVar7 = *(ulong *)(param_1 + 0x40) & 0xff;
    uVar8 = FUN_0010fcf0((ulong)((uint)((*(ulong *)(param_1 + 0x40) >> 0x14) << 8) | (uint)uVar7),
                         local_1278,uVar7);
    uVar7 = (ulong)DAT_00321340;
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 8) & 0xfff;
    uVar9 = FUN_0010fcf0((ulong)((uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfffff000
                                | uVar11),local_1298,(ulong)uVar11);
    iVar15 = 0;
    if (-1 < iVar2) {
      iVar15 = iVar2;
    }
    __sprintf_chk(__s,1,0xffffffffffffffff,&DAT_00117c56,(ulong)(uint)(iVar15 + DAT_00321344),uVar9,
                  uVar7,uVar8);
    __s = (uint *)((long)__s + (long)DAT_0032133c + 1);
  }
  *(undefined *)__s = 1;
  puVar16 = &DAT_00117c2e;
  if (*(char *)(param_1 + 0xb8) == '\0') {
LAB_0010863a:
    uVar7 = (ulong)DAT_00320014;
    if ((int)DAT_00320014 < 0) {
      local_1340 = 0;
      lVar14 = FUN_00115a40(DAT_003212a8,&local_1340,local_12e8);
      if (lVar14 != 0) {
        puVar13 = PTR_DAT_00320040;
        if (DAT_003203c8 != '\0') {
          puVar13 = &DAT_003203e0 + (long)local_12d8 * 0x80;
        }
        lVar14 = FUN_00111f80(local_1278,0x3e9,puVar13,local_12e8,DAT_003212a8,0);
        if (lVar14 != 0) {
          DAT_00320014 = FUN_001101b0(local_1278,lVar14,0);
        }
      }
      uVar7 = (ulong)DAT_00320014;
      if ((int)DAT_00320014 < 0) {
        DAT_00320014 = 0;
        uVar7 = 0;
      }
    }
    __sprintf_chk(__s,1,0xffffffffffffffff,&DAT_00117c5b,uVar7,puVar16);
    sVar4 = strlen((char *)__s);
    lVar14 = (long)__s + sVar4;
  }
  else {
    lVar14 = FUN_00115a40(DAT_003212a8,&local_1338,local_1328);
    if (lVar14 == 0) {
LAB_00108a40:
      if (*(char *)__s != '\0') {
        puVar16 = &DAT_00117c2e;
        if (*(char *)(param_1 + 0xb8) != '\0') {
          puVar16 = (undefined1 *)FUN_0010fc50(local_1338,local_1298);
        }
        goto LAB_0010863a;
      }
    }
    else {
      if (DAT_00321370 < local_1338) {
LAB_00108aa0:
        FUN_0010d7d0(&DAT_00321370);
        iVar15 = (int)DAT_00321378;
        lVar14 = DAT_00321370 + -0xf0c2ac;
        if (local_1338 <= lVar14) {
LAB_00108c95:
          uVar7 = 0;
          if ((local_1338 < lVar14) || (-1 < iVar15 - (int)local_1330)) goto LAB_001088e0;
        }
        uVar7 = 1;
        if ((DAT_00321370 <= local_1338) && (uVar7 = 0, local_1338 <= DAT_00321370)) {
LAB_00108af3:
          uVar7 = (ulong)((uint)((int)local_1330 - iVar15) >> 0x1f);
        }
      }
      else {
        iVar15 = (int)DAT_00321378;
        if (DAT_00321370 <= local_1338) {
          if (iVar15 - (int)local_1330 < 0) goto LAB_00108aa0;
          uVar7 = 0;
          if (local_1338 <= DAT_00321370 + -0xf0c2ac) goto LAB_001088e0;
          goto LAB_00108af3;
        }
        lVar14 = DAT_00321370 + -0xf0c2ac;
        uVar7 = 1;
        if (local_1338 <= lVar14) goto LAB_00108c95;
      }
LAB_001088e0:
      if (DAT_003203c8 == '\0') {
        puVar13 = (&PTR_DAT_00320040)[uVar7];
      }
      else {
        puVar13 = &DAT_003203e0 + ((long)local_1318 + uVar7 * 0xc) * 0x80;
      }
      lVar14 = FUN_00111f80(__s,0x3e9,puVar13,local_1328);
      if (lVar14 == 0) goto LAB_00108a40;
      __s = (uint *)((long)__s + lVar14);
    }
    lVar14 = (long)__s + 1;
    *(undefined2 *)__s = 0x20;
  }
  lVar14 = lVar14 - (long)local_e88;
  fputs_unlocked((char *)local_e88,stdout);
  DAT_003211f8 = DAT_003211f8 + lVar14;
  lVar6 = FUN_00107d20(param_1,0,&DAT_003211a0,lVar14);
  if (*(int *)(param_1 + 0xa8) == 6) {
    if (*(long *)(param_1 + 8) != 0) {
      fwrite_unlocked(&DAT_00117c60,1,4,stdout);
      DAT_003211f8 = DAT_003211f8 + 4;
      FUN_00107d20(param_1,1,0,lVar14 + 4 + lVar6);
      if (DAT_00321314 != 0) {
        FUN_00106ef0(1,(ulong)*(uint *)(param_1 + 0xac),0);
      }
    }
  }
  else {
    if (DAT_00321314 != 0) {
      FUN_00106ef0((ulong)*(byte *)(param_1 + 0xb8),(ulong)*(uint *)(param_1 + 0x30));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long FUN_00108d20(undefined *param_1,undefined8 param_2,ulong param_3)

{
  long in_FS_OFFSET;
  byte local_2039;
  undefined *local_2038;
  long local_2030;
  undefined local_2028 [8200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2038 = local_2028;
  FUN_001074a0(&local_2038,param_1,param_2,param_3 & 0xffffffff,&local_2030,&local_2039);
  if ((local_2038 != local_2028) && (local_2038 != param_1)) {
    free(local_2038);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_2039 + local_2030;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long FUN_00108db0(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  long in_FS_OFFSET;
  undefined auStack696 [664];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_003212fc == '\0') {
    lVar4 = 0;
LAB_00108e8a:
    if (DAT_0032132c != '\0') {
      if (DAT_00321338 != 4) goto LAB_00108e01;
      lVar2 = 2;
      if (*(char *)(param_1 + 0x17) != '\0') {
        __s = (char *)FUN_0010ed10(param_1[0xb],auStack696,(ulong)DAT_00321328,0x200,DAT_00321320);
        sVar3 = strlen(__s);
        lVar2 = sVar3 + 1;
      }
LAB_00108e0c:
      lVar4 = lVar4 + lVar2;
    }
    if (DAT_00321365 == '\0') goto LAB_00108e1c;
    if (DAT_00321338 != 4) goto LAB_00108ef1;
    sVar3 = strlen((char *)param_1[0x16]);
  }
  else {
    if (DAT_00321338 == 4) {
      __s = (char *)FUN_0010fcf0(param_1[4],auStack696);
      sVar3 = strlen(__s);
      lVar4 = sVar3 + 1;
      goto LAB_00108e8a;
    }
    lVar4 = (long)DAT_00321360 + 1;
    if (DAT_0032132c != '\0') {
LAB_00108e01:
      lVar2 = (long)DAT_0032135c + 1;
      goto LAB_00108e0c;
    }
    if (DAT_00321365 == '\0') goto LAB_00108e1c;
LAB_00108ef1:
    sVar3 = SEXT48(DAT_00321354);
  }
  lVar4 = lVar4 + sVar3 + 1;
LAB_00108e1c:
  lVar2 = FUN_00108d20(*param_1,DAT_003212d0,(ulong)*(uint *)((long)param_1 + 0xc4));
  lVar4 = lVar4 + lVar2;
  if (DAT_00321314 != 0) {
    cVar1 = FUN_00106df0((ulong)*(byte *)(param_1 + 0x17),(ulong)*(uint *)(param_1 + 6),
                         (ulong)*(uint *)(param_1 + 0x15));
    lVar4 = lVar4 + (ulong)(cVar1 != '\0');
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar4;
}



// WARNING: Removing unreachable block (ram,0x00109256)

ulong FUN_00108f60(char param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined auVar18 [16];
  
  uVar15 = DAT_00321200;
  if (DAT_003213b0 <= DAT_00321200) {
    uVar15 = DAT_003213b0;
  }
  uVar16 = DAT_003202e0;
  if (DAT_003202e0 < uVar15) {
    pcVar11 = DAT_00321208;
    if (uVar15 < DAT_00321200 >> 1) {
      uVar12 = SUB168(ZEXT816(0x30) * ZEXT816(uVar15) >> 0x40,0);
      if (uVar12 != 0) goto LAB_00109251;
      uVar16 = uVar15 * 2;
      auVar18 = FUN_001144e0(DAT_00321208,uVar15 * 0x30);
    }
    else {
      uVar12 = SUB168(ZEXT816(0x18) * ZEXT816(DAT_00321200) >> 0x40,0);
      param_2 = (ulong)(uVar12 != 0);
      if (uVar12 != 0) goto LAB_00109251;
      auVar18 = FUN_001144e0(DAT_00321208,DAT_00321200 * 0x18);
      uVar16 = DAT_00321200;
    }
    uVar12 = SUB168(auVar18 >> 0x40,0);
    DAT_00321208 = SUB168(auVar18,0);
    pcVar11 = (char *)(uVar16 - DAT_003202e0);
    param_2 = DAT_003202e0 + 1 + uVar16;
    uVar9 = (long)pcVar11 * param_2;
    if ((CARRY8(DAT_003202e0 + 1,uVar16) != false) ||
       (uVar12 = uVar9 % (ulong)pcVar11, param_2 != uVar9 / (ulong)pcVar11)) {
LAB_00109251:
                    // WARNING: Subroutine does not return
      FUN_001146d0(pcVar11,param_2,uVar12);
    }
    lVar5 = FUN_00114480((uVar9 >> 1) * 8);
    if (DAT_003202e0 < uVar16) {
      lVar13 = DAT_003202e0 * 8 + 8;
      plVar10 = (long *)(DAT_00321208 + DAT_003202e0 * 0x18 + 0x10);
      do {
        *plVar10 = lVar5;
        lVar5 = lVar5 + lVar13;
        lVar13 = lVar13 + 8;
        plVar10 = plVar10 + 3;
      } while (uVar16 * 8 + 8 != lVar13);
    }
  }
  DAT_003202e0 = uVar16;
  uVar16 = DAT_003213b0;
  pcVar11 = DAT_00321208;
  if (uVar15 != 0) {
    lVar13 = 0;
    lVar5 = 3;
    do {
      puVar6 = *(undefined8 **)(pcVar11 + lVar5 * 8 + -8);
      lVar13 = lVar13 + 8;
      pcVar11[lVar5 * 8 + -0x18] = '\x01';
      *(long *)(pcVar11 + lVar5 * 8 + -0x10) = lVar5;
      puVar2 = (undefined8 *)((long)puVar6 + lVar13);
      do {
        *puVar6 = 3;
        puVar6 = puVar6 + 1;
      } while (puVar2 != puVar6);
      lVar5 = lVar5 + 3;
    } while (uVar15 * 3 + 3 != lVar5);
  }
  if (uVar16 != 0) {
    uVar16 = 0;
    do {
      uVar7 = FUN_00108db0(*(undefined8 *)(DAT_003213a0 + uVar16 * 8));
      uVar9 = DAT_003213b0;
      uVar12 = DAT_003212b0;
      if (uVar15 != 0) {
        lVar5 = DAT_003213b0 - 1;
        pcVar11 = DAT_00321208;
        uVar17 = 0;
        do {
          uVar1 = uVar17 + 1;
          if (*pcVar11 != '\0') {
            if (param_1 == '\0') {
              uVar14 = uVar16 % uVar1;
            }
            else {
              uVar14 = SUB168(ZEXT816(uVar16) /
                              (ZEXT816(lVar5 + uVar1) / ZEXT816(uVar1) &
                              (undefined  [16])0xffffffffffffffff),0);
            }
            uVar8 = uVar7;
            if (uVar14 != uVar17) {
              uVar8 = uVar7 + 2;
            }
            puVar3 = (ulong *)(*(long *)(pcVar11 + 0x10) + uVar14 * 8);
            uVar17 = *puVar3;
            if (uVar17 < uVar8) {
              *(ulong *)(pcVar11 + 8) = (*(long *)(pcVar11 + 8) - uVar17) + uVar8;
              *puVar3 = uVar8;
              *(bool *)pcVar11 = *(ulong *)(pcVar11 + 8) < uVar12;
            }
          }
          pcVar11 = pcVar11 + 0x18;
          uVar17 = uVar1;
        } while (uVar15 != uVar1);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar9);
  }
  if ((1 < uVar15) && (DAT_00321208[uVar15 * 0x18 + -0x18] == '\0')) {
    pcVar11 = DAT_00321208 + uVar15 * 0x18 + -0x30;
    do {
      uVar15 = uVar15 - 1;
      if (uVar15 == 1) {
        return 1;
      }
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + -0x18;
    } while (cVar4 == '\0');
  }
  return uVar15;
}



void FUN_00109270(char param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (DAT_003213b0 != 0) {
    uVar8 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(DAT_003213a0 + uVar7 * 8);
      if (DAT_003212b0 == 0) {
        if (uVar7 != 0) {
          uVar1 = uVar8 + 2;
LAB_00109377:
          uVar4 = uVar1;
          iVar5 = 0x20;
          cVar6 = ' ';
          goto LAB_00109329;
        }
      }
      else {
        uVar4 = FUN_00108db0(uVar2);
        if (uVar7 == 0) {
          uVar8 = uVar8 + uVar4;
        }
        else {
          uVar1 = uVar4 + uVar8 + 2;
          if ((DAT_003212b0 == 0) || ((uVar1 < DAT_003212b0 && (uVar8 <= -uVar4 - 3))))
          goto LAB_00109377;
          iVar5 = 10;
          cVar6 = '\n';
LAB_00109329:
          pcVar3 = stdout->_IO_write_ptr;
          if (pcVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = param_1;
          }
          else {
            __overflow(stdout,(int)param_1);
          }
          pcVar3 = stdout->_IO_write_ptr;
          uVar8 = uVar4;
          if (pcVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = cVar6;
          }
          else {
            __overflow(stdout,iVar5);
          }
        }
      }
      uVar7 = uVar7 + 1;
      FUN_00108180(uVar2);
    } while (uVar7 < DAT_003213b0);
  }
  pcVar3 = stdout->_IO_write_ptr;
  if (stdout->_IO_write_end <= pcVar3) {
    __overflow(stdout,10);
    return;
  }
  stdout->_IO_write_ptr = pcVar3 + 1;
  *pcVar3 = '\n';
  return;
}



void FUN_00109420(void)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_40;
  
  switch(DAT_00321338) {
  case 0:
    uVar3 = 0;
    if (DAT_003213b0 == 0) {
      return;
    }
    do {
      FUN_00107450();
      FUN_00108310(DAT_003213a0[uVar3]);
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      DAT_003211f8 = DAT_003211f8 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_003213b0);
    return;
  case 1:
    uVar3 = 0;
    if (DAT_003213b0 == 0) {
      return;
    }
    do {
      FUN_00108180(DAT_003213a0[uVar3],0);
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_003213b0);
    return;
  case 2:
    if (DAT_003212b0 != 0) {
      uVar3 = FUN_00108f60(1);
      lVar1 = DAT_00321208 + uVar3 * 0x18;
      uVar3 = (ulong)(DAT_003213b0 % uVar3 != 0) + DAT_003213b0 / uVar3;
      if (uVar3 == 0) {
        return;
      }
      local_40 = 0;
      do {
        lVar10 = 0;
        lVar11 = local_40 * 8;
        lVar4 = 0;
        uVar7 = local_40;
        while( true ) {
          uVar8 = *(undefined8 *)((long)DAT_003213a0 + lVar11);
          lVar5 = FUN_00108db0(uVar8);
          lVar9 = *(long *)(*(long *)(lVar1 + -8) + lVar10);
          lVar10 = lVar10 + 8;
          FUN_00108180(uVar8,lVar4);
          uVar7 = uVar7 + uVar3;
          lVar11 = lVar11 + uVar3 * 8;
          if (DAT_003213b0 <= uVar7) break;
          lVar9 = lVar9 + lVar4;
          FUN_001066e0(lVar5 + lVar4,lVar9);
          lVar4 = lVar9;
        }
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        local_40 = local_40 + 1;
      } while (uVar3 != local_40);
      return;
    }
    break;
  case 3:
    if (DAT_003212b0 != 0) {
      uVar3 = FUN_00108f60(0);
      lVar1 = DAT_00321208 + -0x18 + uVar3 * 0x18;
      uVar8 = *DAT_003213a0;
      lVar4 = FUN_00108db0(uVar8);
      lVar11 = **(long **)(lVar1 + 0x10);
      FUN_00108180(uVar8,0);
      if (1 < DAT_003213b0) {
        uVar7 = 1;
        lVar10 = 0;
        do {
          uVar6 = uVar7 % uVar3;
          if (uVar6 == 0) {
            pcVar2 = stdout->_IO_write_ptr;
            if (pcVar2 < stdout->_IO_write_end) {
              lVar9 = 0;
              stdout->_IO_write_ptr = pcVar2 + 1;
              *pcVar2 = '\n';
            }
            else {
              lVar9 = 0;
              __overflow(stdout,10);
            }
          }
          else {
            lVar9 = lVar11 + lVar10;
            FUN_001066e0(lVar4 + lVar10,lVar9,uVar6,lVar4);
          }
          uVar8 = DAT_003213a0[uVar7];
          uVar7 = uVar7 + 1;
          FUN_00108180(uVar8,lVar9);
          lVar4 = FUN_00108db0(uVar8);
          lVar11 = *(long *)(*(long *)(lVar1 + 0x10) + uVar6 * 8);
          lVar10 = lVar9;
        } while (uVar7 < DAT_003213b0);
      }
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
        return;
      }
      __overflow(stdout,10);
      return;
    }
    break;
  case 4:
    uVar8 = 0x2c;
    goto LAB_00109555;
  default:
    return;
  }
  uVar8 = 0x20;
LAB_00109555:
  FUN_00109270(uVar8);
  return;
}



ulong FUN_00109800(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  bool bVar6;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar6)) {
    return 0xffffffff;
  }
  if ((bVar6) || (uVar5 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_1[0xc];
    pcVar2 = param_2[0xc];
    if (param_2[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return 0xffffffff;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    uVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_00109880(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  bool bVar6;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar6)) {
    return 0xffffffff;
  }
  if ((bVar6) || (uVar5 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_1[0x10];
    pcVar2 = param_2[0x10];
    if (param_2[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return 0xffffffff;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    uVar3 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_00109910(ulong param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  uint local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DAT_0032132d == '\0') && (lVar5 = FUN_0010f910(), lVar5 != 0)) {
    uVar6 = FUN_00110370(lVar5,0);
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
  }
  else {
    __sprintf_chk(local_38,1,0x15,&DAT_00117c24,param_1 & 0xffffffff);
    puVar2 = local_38;
    do {
      puVar4 = puVar2;
      uVar7 = *puVar4 + 0xfefefeff & ~*puVar4;
      uVar8 = uVar7 & 0x80808080;
      puVar2 = puVar4 + 1;
    } while (uVar8 == 0);
    bVar9 = (uVar7 & 0x8080) == 0;
    bVar1 = (byte)uVar8;
    if (bVar9) {
      bVar1 = (byte)(uVar8 >> 0x10);
    }
    iVar3 = (int)(puVar4 + 1);
    if (bVar9) {
      iVar3 = (int)puVar4 + 6;
    }
    uVar6 = (ulong)(((iVar3 + -3) - (uint)CARRY1(bVar1,bVar1)) - ((int)register0x00000020 + -0x38));
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar6;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_001099e0(byte *param_1,int param_2,byte param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 __s;
  size_t sVar9;
  char *__dest;
  size_t sVar10;
  int *__n;
  uint *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  long __dest_00;
  byte bVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  char *__s_00;
  byte *pbVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  byte bVar24;
  byte *__filename;
  long in_FS_OFFSET;
  bool bVar25;
  byte bVar26;
  undefined auStack936 [8];
  byte abStack928 [6];
  byte local_39a;
  byte local_399;
  int *local_398;
  byte *local_390;
  undefined local_388 [24];
  uint local_370;
  undefined local_2f8 [32];
  uint local_2d8 [166];
  long local_40;
  
  bVar26 = 0;
  puVar20 = auStack936;
  puVar19 = auStack936;
  puVar18 = auStack936;
  local_390 = param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_003213b0 == _DAT_003213b8) {
    if (SUB168(ZEXT816(400) * ZEXT816(DAT_003213b0) >> 0x40,0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_001146d0();
    }
    DAT_003213c0 = FUN_001144e0(DAT_003213c0,DAT_003213b0 * 400);
    _DAT_003213b8 = _DAT_003213b8 << 1;
  }
  puVar3 = (undefined8 *)(DAT_003213c0 + DAT_003213b0 * 200);
  *puVar3 = 0;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  uVar15 = (ulong)(((int)puVar3 - (int)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) +
                   0xc4U >> 3);
  puVar22 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
  while (uVar15 != 0) {
    uVar15 = uVar15 - 1;
    *puVar22 = 0;
    puVar22 = puVar22 + (ulong)bVar26 * 0x1ffffffffffffffe + 1;
  }
  puVar3[4] = 0;
  *(int *)(puVar3 + 0x15) = param_2;
  *(undefined4 *)((long)puVar3 + 0xc4) = 0xffffffff;
  if ((DAT_003213a9 == '\0') && (DAT_003213a8 != '\0')) {
    bVar5 = FUN_00106190(local_390);
    *(uint *)((long)puVar3 + 0xc4) = (uint)bVar5;
    if (bVar5 != 0) {
      DAT_003213a9 = '\x01';
    }
  }
  __filename = local_390;
  local_398._0_1_ = DAT_00321311;
  if (param_3 == 0) {
    if (DAT_00321311 != 0) {
      bVar5 = *local_390;
      if ((bVar5 != 0x2f) && (bVar14 = *param_4, puVar20 = auStack936, bVar14 != 0))
      goto LAB_0010a31b;
      goto LAB_0010a0ea;
    }
    if (DAT_003212a1 != '\0') {
LAB_00109e10:
      bVar5 = *local_390;
      __filename = local_390;
      if (bVar5 != 0x2f) {
        bVar14 = *param_4;
        puVar19 = auStack936;
        if (bVar14 != 0) goto LAB_0010a31b;
        goto LAB_00109b1c;
      }
      puVar19 = auStack936;
      if (((2 < DAT_003212f8) && (puVar19 = auStack936, 4 < DAT_003212f8)) &&
         (puVar19 = auStack936, DAT_003212f8 == 5)) goto LAB_00109b41;
      goto LAB_00109e50;
    }
    if ((param_2 == 3) && (DAT_00321312 != '\0')) {
      local_398 = (int *)((ulong)local_398 & 0xffffffffffffff00);
      cVar6 = FUN_00105c50(0x13);
      if (cVar6 == '\0') {
        cVar6 = FUN_00105c50(0x12);
        if (cVar6 == '\0') {
          cVar6 = FUN_00105c50(0x14);
          if (cVar6 == '\0') goto LAB_00109cf0;
        }
      }
      goto LAB_00109e10;
    }
LAB_00109cf0:
    if (DAT_003212fc != '\0') {
      if ((param_2 == 6) || (param_2 == 0)) {
LAB_00109d44:
        if ((DAT_003212f8 != 5) &&
           (((DAT_00321390 == '\0' && (DAT_003212fd == '\0')) && (DAT_003212fc == '\0')))) {
          if (DAT_003212a0 == '\0') goto LAB_00109d20;
          if (param_2 != 0) goto LAB_00109d84;
        }
      }
      goto LAB_00109e10;
    }
    if (DAT_003212a0 == '\0') {
LAB_00109d20:
      uVar13 = 0;
      puVar19 = auStack936;
    }
    else {
      if ((param_2 == 6) || (param_2 == 0)) goto LAB_00109d44;
      if (DAT_003212a0 == '\0') goto LAB_00109d20;
LAB_00109d84:
      uVar13 = 0;
      puVar19 = auStack936;
      if (param_2 == 5) {
        if (DAT_00321314 != 3) {
          local_398 = (int *)((ulong)local_398 & 0xffffffffffffff00 | (ulong)(byte)local_398);
          puVar19 = auStack936;
          if (DAT_00321312 == '\0') goto LAB_00109c8d;
          cVar6 = FUN_00105c50(0xe);
          if (cVar6 == '\0') {
            cVar6 = FUN_00105c50(0x10);
            if (cVar6 == '\0') {
              cVar6 = FUN_00105c50(0x11);
              if (cVar6 == '\0') {
                cVar6 = FUN_00105c50(0x15);
                puVar19 = auStack936;
                if (cVar6 == '\0') goto LAB_00109c8d;
              }
            }
          }
        }
        goto LAB_00109e10;
      }
    }
  }
  else {
    bVar5 = *local_390;
    bVar24 = DAT_00321311;
    if ((bVar5 != 0x2f) && (bVar14 = *param_4, puVar19 = auStack936, bVar14 != 0)) {
LAB_0010a31b:
      local_398 = (int *)((ulong)local_398 & 0xffffffffffffff00 | (ulong)bVar14);
      local_39a = (byte)local_398;
      local_399 = bVar5;
      sVar9 = strlen((char *)local_390);
      sVar10 = strlen((char *)param_4);
      bVar5 = param_4[1];
      __dest_00 = -(sVar9 + 0x20 + sVar10 & 0xfffffffffffffff0);
      puVar19 = auStack936 + __dest_00;
      __filename = abStack928 + __dest_00;
      pbVar21 = param_4;
      pbVar23 = __filename;
      bVar14 = local_399;
      pbVar4 = local_390;
      if (((byte)local_398 != 0x2e) || (pbVar2 = __filename, bVar5 != 0)) {
        while( true ) {
          pbVar2 = pbVar23 + 1;
          *pbVar23 = (byte)local_398;
          if (bVar5 == 0) break;
          pbVar1 = pbVar21 + 2;
          pbVar21 = pbVar21 + 1;
          pbVar23 = pbVar2;
          local_398._0_1_ = bVar5;
          bVar5 = *pbVar1;
        }
        if ((param_4 < pbVar21 + 1) && (*pbVar21 != 0x2f)) {
          *pbVar2 = 0x2f;
          pbVar2 = pbVar23 + 2;
        }
      }
      while (bVar14 != 0) {
        *pbVar2 = bVar14;
        pbVar2 = pbVar2 + 1;
        bVar14 = pbVar4[1];
        pbVar4 = pbVar4 + 1;
      }
      *pbVar2 = 0;
      bVar24 = local_39a;
    }
    puVar20 = puVar19;
    if (bVar24 != 0) {
LAB_0010a0ea:
      *(undefined8 *)(puVar20 + -8) = 0x10a0f7;
      __dest_00 = FUN_0010c640(__filename,2);
      puVar3[2] = __dest_00;
      puVar19 = puVar20;
      if (__dest_00 == 0) {
        *(undefined8 *)(puVar20 + -8) = 0x10a117;
        uVar13 = dcgettext(0,"error canonicalizing %s",5);
        *(undefined8 *)(puVar20 + -8) = 0x10a126;
        FUN_001069a0((ulong)param_3,uVar13,__filename);
      }
    }
LAB_00109b1c:
    if (DAT_003212f8 < 3) goto LAB_00109e50;
    if (DAT_003212f8 < 5) {
      if (param_3 == 0) {
LAB_00109e50:
        *(undefined8 *)(puVar19 + -8) = 0x109e60;
        iVar7 = __lxstat(1,__filename,puVar3 + 3,puVar19[-8]);
        local_398._0_1_ = 0;
        goto joined_r0x00109e64;
      }
      local_398 = (int *)((ulong)local_398 & 0xffffffff00000000 | (ulong)DAT_003212f8);
      *(undefined8 *)(puVar19 + -8) = 0x10a14f;
      iVar7 = __xstat(1,__filename,puVar3 + 3,puVar19[-8]);
      if ((int)local_398 != 3) {
        if (iVar7 < 0) {
          *(undefined8 *)(puVar19 + -8) = 0x10a6b5;
          __n = __errno_location(puVar19[-8]);
          if (*__n != 2) goto LAB_0010a6be;
        }
        else {
          if ((*(uint *)(puVar3 + 6) & 0xf000) == 0x4000) goto LAB_0010a177;
        }
        goto LAB_00109e50;
      }
LAB_0010a177:
      local_398._0_1_ = param_3;
      if (iVar7 != 0) {
LAB_0010a6be:
        *(undefined8 *)(puVar19 + -8) = 0x10a6d1;
        uVar13 = dcgettext(0,"cannot access %s",5);
        *(undefined8 *)(puVar19 + -8) = 0x10a6e1;
        FUN_001069a0(1,uVar13,__filename);
        uVar13 = 0;
        goto LAB_00109ca4;
      }
    }
    else {
      puVar18 = puVar19;
      if (DAT_003212f8 != 5) goto LAB_00109e50;
LAB_00109b41:
      *(undefined8 *)(puVar18 + -8) = 0x109b51;
      iVar7 = __xstat(1,__filename,puVar3 + 3,puVar18[-8]);
      local_398._0_1_ = 1;
      puVar19 = puVar18;
joined_r0x00109e64:
      if (iVar7 != 0) {
        *(undefined8 *)(puVar19 + -8) = 0x109e7d;
        uVar13 = dcgettext(0,"cannot access %s",5);
        *(undefined8 *)(puVar19 + -8) = 0x109e8c;
        FUN_001069a0((ulong)param_3,uVar13,__filename);
        uVar13 = 0;
        if (param_3 != 0) goto LAB_00109ca4;
        goto LAB_00109c8d;
      }
    }
    *(undefined *)(puVar3 + 0x17) = 1;
    if (((param_2 == 5) || ((*(uint *)(puVar3 + 6) & 0xf000) == 0x8000)) && (DAT_00321312 != '\0'))
    {
      local_398 = (int *)((ulong)local_398 & 0xffffffffffffff00 | (ulong)(byte)local_398);
      *(undefined8 *)(puVar19 + -8) = 0x10a08d;
      cVar6 = FUN_00105c50();
      if (cVar6 != '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x10a0a1;
        __n = __errno_location(puVar19[-8]);
        __dest_00 = puVar3[3];
        bVar25 = __dest_00 != _DAT_003202f8;
        *__n = 0x5f;
        if (bVar25) {
          _DAT_003202f8 = __dest_00;
        }
        *(undefined *)(puVar3 + 0x18) = 0;
      }
    }
    if ((DAT_00321338 == 0) || (DAT_00321365 != '\0')) {
      if (puVar3[3] == DAT_003202f0) {
        *(undefined8 *)(puVar19 + -8) = 0x10a82b;
        __n = __errno_location(puVar19[-8]);
        *__n = 0x5f;
        puVar3[0x16] = 0x320022;
LAB_0010a2e4:
        if (DAT_00321338 != 0) {
          *(undefined4 *)((long)puVar3 + 0xbc) = 0;
          goto LAB_00109b9f;
        }
        bVar25 = false;
LAB_0010a4a0:
        if (puVar3[3] == DAT_003202e8) {
          *__n = 0x5f;
          uVar8 = 0;
LAB_00109efc:
          iVar7 = 0;
          if (bVar25) {
            iVar7 = ((int)((uint)bVar25 << 0x1f) >> 0x1f) + 2;
          }
        }
        else {
          *__n = 0;
          local_398 = __n;
          *(undefined8 *)(puVar19 + -8) = 0x10a4c9;
          uVar8 = FUN_0010cec0(__filename,puVar3 + 3);
          if ((int)uVar8 < 1) {
            uVar8 = uVar8 >> 0x1f;
            if (((*local_398 - 0x16U & 0xffffffef) == 0) || (*local_398 == 0x5f)) {
              DAT_003202e8 = puVar3[3];
            }
            goto LAB_00109efc;
          }
          uVar8 = 0;
          bVar25 = true;
          iVar7 = 2;
        }
        DAT_00321364 = DAT_00321364 | bVar25;
        *(int *)((long)puVar3 + 0xbc) = iVar7;
        if (uVar8 != 0) goto LAB_0010a55a;
      }
      else {
        if ((byte)local_398 != 0) {
          *(undefined8 *)(puVar19 + -8) = 0x109ec8;
          iVar7 = FUN_001152b0();
          if (iVar7 < 0) goto LAB_0010a29d;
LAB_00109ed0:
          bVar25 = iVar7 == 0;
          __dest_00 = 10;
          __s_00 = "unlabeled";
          __dest = (char *)puVar3[0x16];
          do {
            if (__dest_00 == 0) break;
            __dest_00 = __dest_00 + -1;
            bVar25 = *__s_00 == *__dest;
            __s_00 = __s_00 + (ulong)bVar26 * -2 + 1;
            __dest = __dest + (ulong)bVar26 * -2 + 1;
          } while (bVar25);
          bVar25 = !bVar25;
          if (DAT_00321338 == 0) {
            *(undefined8 *)(puVar19 + -8) = 0x10a49d;
            __n = __errno_location(puVar19[-8]);
            goto LAB_0010a4a0;
          }
          uVar8 = 0;
          goto LAB_00109efc;
        }
        *(undefined8 *)(puVar19 + -8) = 0x10a295;
        iVar7 = FUN_001152d0();
        if (-1 < iVar7) goto LAB_00109ed0;
LAB_0010a29d:
        *(undefined8 *)(puVar19 + -8) = 0x10a2a2;
        __n = __errno_location(puVar19[-8]);
        iVar7 = *__n;
        if (((iVar7 - 0x16U & 0xffffffef) == 0) || (iVar7 == 0x5f)) {
          DAT_003202f0 = puVar3[3];
        }
        puVar3[0x16] = 0x320022;
        if (iVar7 == 0x3d || iVar7 == 0x5f) goto LAB_0010a2e4;
        *(undefined4 *)((long)puVar3 + 0xbc) = 0;
LAB_0010a55a:
        *(undefined8 *)(puVar19 + -8) = 0x10a569;
        FUN_00113b10(0,3,__filename);
        *(undefined8 *)(puVar19 + -8) = 0x10a571;
        puVar11 = (uint *)__errno_location(puVar19[-8]);
        uVar8 = *puVar11;
        *(undefined8 *)(puVar19 + -8) = 0x10a586;
        error(0,(ulong)uVar8,&DAT_0011a2fc);
      }
      uVar8 = *(uint *)(puVar3 + 6) & 0xf000;
      if (uVar8 != 0xa000) goto LAB_00109bb2;
      if (DAT_00321338 != 0) goto LAB_0010a478;
LAB_00109f48:
      uVar13 = puVar3[9];
      *(undefined8 *)(puVar19 + -8) = 0x109f54;
      __s_00 = (char *)FUN_0010c1c0(__filename,uVar13);
      *(char **)(puVar3 + 1) = __s_00;
      if (__s_00 == (char *)0x0) {
        *(undefined8 *)(puVar19 + -8) = 0x10a703;
        uVar13 = dcgettext(0,"cannot read symbolic link %s",5);
        *(undefined8 *)(puVar19 + -8) = 0x10a712;
        FUN_001069a0((ulong)param_3,uVar13,__filename);
        __s_00 = (char *)puVar3[1];
        if (__s_00 != (char *)0x0) goto LAB_00109f64;
LAB_0010a720:
        __dest_00 = 0;
      }
      else {
LAB_00109f64:
        if (*__s_00 == '/') {
LAB_0010a688:
          *(undefined8 *)(puVar19 + -8) = 0x10a690;
          __dest_00 = FUN_001146b0(__s_00);
        }
        else {
          *(undefined8 *)(puVar19 + -8) = 0x109f76;
          __n = (int *)FUN_0010cd50(__filename);
          if (__n == (int *)0x0) goto LAB_0010a688;
          local_398 = __n;
          *(undefined8 *)(puVar19 + -8) = 0x109f8e;
          sVar9 = strlen(__s_00,puVar19[-8]);
          __dest_00 = (long)local_398 + sVar9 + 2;
          *(undefined8 *)(puVar19 + -8) = 0x109f9f;
          __dest_00 = FUN_00114480(__dest_00);
          __n = local_398;
          if (*(char *)((long)__filename + -1 + (long)local_398) != '/') {
            __n = (int *)((long)local_398 + 1);
          }
          *(undefined8 *)(puVar19 + -8) = 0x109fc0;
          __dest = stpncpy(__dest_00,__filename,__n,puVar19[-8]);
          *(undefined8 *)(puVar19 + -8) = 0x109fcb;
          strcpy(__dest,__s_00,puVar19[-8]);
        }
        if (__dest_00 == 0) goto LAB_0010a720;
        if (*(int *)((long)puVar3 + 0xc4) == 0) {
          uVar13 = puVar3[1];
          *(undefined8 *)(puVar19 + -8) = 0x10a7d9;
          cVar6 = FUN_00106190(uVar13);
          if (cVar6 != '\0') {
            *(undefined4 *)((long)puVar3 + 0xc4) = 0xffffffff;
          }
        }
        if ((1 < DAT_00321314) || (DAT_003212fd != '\0')) {
          *(undefined8 *)(puVar19 + -8) = 0x10a00a;
          iVar7 = __xstat(1,__dest_00,local_388,puVar19[-8]);
          if ((iVar7 == 0) &&
             (((*(undefined *)((long)puVar3 + 0xb9) = 1, param_3 == 0 || (DAT_00321338 == 0)) ||
              ((local_370 & 0xf000) != 0x4000)))) {
            *(uint *)((long)puVar3 + 0xac) = local_370;
          }
        }
      }
      *(undefined8 *)(puVar19 + -8) = 0x10a04e;
      free(__dest_00,puVar19[-8]);
      uVar8 = *(uint *)(puVar3 + 6) & 0xf000;
      if (uVar8 != 0xa000) goto LAB_00109bb2;
LAB_0010a485:
      *(undefined4 *)(puVar3 + 0x15) = 6;
    }
    else {
LAB_00109b9f:
      uVar8 = *(uint *)(puVar3 + 6) & 0xf000;
      if (uVar8 == 0xa000) {
LAB_0010a478:
        if (DAT_003212fd != '\0') goto LAB_00109f48;
        goto LAB_0010a485;
      }
LAB_00109bb2:
      if (uVar8 == 0x4000) {
        if ((param_3 == 0) || (DAT_003212f5 != '\0')) {
          *(undefined4 *)(puVar3 + 0x15) = 3;
        }
        else {
          *(undefined4 *)(puVar3 + 0x15) = 9;
        }
      }
      else {
        *(undefined4 *)(puVar3 + 0x15) = 5;
      }
    }
    uVar13 = puVar3[0xb];
    if ((DAT_00321338 == 0) || (DAT_0032132c != '\0')) {
      *(undefined8 *)(puVar19 + -8) = 0x109c02;
      __s = FUN_0010ed10(uVar13,local_2d8,(ulong)DAT_00321328,0x200,DAT_00321320);
      *(undefined8 *)(puVar19 + -8) = 0x109c0c;
      iVar7 = FUN_00110370(__s);
      if (DAT_0032135c < iVar7) {
        DAT_0032135c = iVar7;
      }
      if (DAT_00321338 == 0) {
        if (DAT_00320021 != '\0') {
          uVar8 = *(uint *)((long)puVar3 + 0x34);
          *(undefined8 *)(puVar19 + -8) = 0x10a640;
          iVar7 = FUN_00109910((ulong)uVar8);
          if (DAT_00321350 < iVar7) {
            DAT_00321350 = iVar7;
          }
        }
        if (DAT_00320020 != '\0') {
          uVar8 = *(uint *)(puVar3 + 7);
          if (DAT_0032132d == '\0') {
            *(undefined8 *)(puVar19 + -8) = 0x10a7a8;
            __dest_00 = FUN_0010fab0((ulong)uVar8);
            if (__dest_00 == 0) goto LAB_0010a5c1;
            *(undefined8 *)(puVar19 + -8) = 0x10a7bb;
            iVar7 = FUN_00110370(__dest_00,0);
            if (iVar7 < 0) {
              iVar7 = 0;
            }
          }
          else {
LAB_0010a5c1:
            *(undefined8 *)(puVar19 + -8) = 0x10a5df;
            __sprintf_chk(local_2d8,1,0x15,&DAT_00117c24,(ulong)uVar8);
            puVar11 = local_2d8;
            do {
              puVar12 = puVar11;
              uVar8 = *puVar12 + 0xfefefeff & ~*puVar12;
              uVar16 = uVar8 & 0x80808080;
              puVar11 = puVar12 + 1;
            } while (uVar16 == 0);
            bVar25 = (uVar8 & 0x8080) == 0;
            bVar26 = (byte)uVar16;
            if (bVar25) {
              bVar26 = (byte)(uVar16 >> 0x10);
            }
            iVar7 = (int)(puVar12 + 1);
            if (bVar25) {
              iVar7 = (int)puVar12 + 6;
            }
            iVar7 = ((iVar7 + -3) - (uint)CARRY1(bVar26,bVar26)) - (int)local_2d8;
          }
          if (DAT_0032134c < iVar7) {
            DAT_0032134c = iVar7;
          }
        }
        if (DAT_0032132e != '\0') {
          uVar8 = *(uint *)((long)puVar3 + 0x34);
          *(undefined8 *)(puVar19 + -8) = 0x10a598;
          iVar7 = FUN_00109910((ulong)uVar8);
          if (DAT_00321348 < iVar7) {
            DAT_00321348 = iVar7;
          }
        }
        goto LAB_00109c4f;
      }
      if (DAT_00321365 != '\0') goto LAB_00109c58;
    }
    else {
LAB_00109c4f:
      if (DAT_00321365 != '\0') {
LAB_00109c58:
        __s = puVar3[0x16];
        *(undefined8 *)(puVar19 + -8) = 0x109c64;
        sVar9 = strlen(__s,puVar19[-8]);
        if (DAT_00321354 < (int)sVar9) {
          DAT_00321354 = (int)sVar9;
        }
      }
      if (DAT_00321338 == 0) {
        __s = puVar3[5];
        *(undefined8 *)(puVar19 + -8) = 0x10a1d0;
        __s = FUN_0010fcf0(__s,local_2f8);
        *(undefined8 *)(puVar19 + -8) = 0x10a1d8;
        sVar9 = strlen(__s,puVar19[-8]);
        if (DAT_00321358 < (int)sVar9) {
          DAT_00321358 = (int)sVar9;
        }
        if ((*(uint *)(puVar3 + 6) & 0xb000) == 0x2000) {
          __s = puVar3[8];
          uVar8 = (uint)((ulong)__s >> 8) & 0xfff;
          *(undefined8 *)(puVar19 + -8) = 0x10a22a;
          __s = FUN_0010fcf0((ulong)((uint)((ulong)__s >> 0x20) & 0xfffff000 | uVar8),local_2d8,
                             (ulong)uVar8);
          *(undefined8 *)(puVar19 + -8) = 0x10a232;
          sVar9 = strlen(__s,puVar19[-8]);
          if (DAT_00321344 < (int)sVar9) {
            DAT_00321344 = (int)sVar9;
          }
          uVar15 = puVar3[8];
          uVar17 = uVar15 & 0xff;
          *(undefined8 *)(puVar19 + -8) = 0x10a25b;
          __s = FUN_0010fcf0((ulong)((uint)((uVar15 >> 0x14) << 8) | (uint)uVar17),local_2d8,uVar17)
          ;
          *(undefined8 *)(puVar19 + -8) = 0x10a263;
          sVar9 = strlen(__s,puVar19[-8]);
          if (DAT_00321340 < (int)sVar9) {
            DAT_00321340 = (int)sVar9;
          }
          iVar7 = DAT_00321340 + 2 + DAT_00321344;
          if (DAT_0032133c < iVar7) {
LAB_0010a468:
            DAT_0032133c = iVar7;
          }
        }
        else {
          __s = puVar3[9];
          *(undefined8 *)(puVar19 + -8) = 0x10a452;
          __s = FUN_0010ed10(__s,local_2d8,(ulong)DAT_0032131c,1,DAT_00320018);
          *(undefined8 *)(puVar19 + -8) = 0x10a45c;
          iVar7 = FUN_00110370(__s,0);
          if (DAT_0032133c < iVar7) goto LAB_0010a468;
        }
      }
    }
    if (DAT_003212fc != '\0') {
      __s = puVar3[4];
      *(undefined8 *)(puVar19 + -8) = 0x10a1a0;
      __s = FUN_0010fcf0(__s,local_2d8);
      *(undefined8 *)(puVar19 + -8) = 0x10a1a8;
      sVar9 = strlen(__s,puVar19[-8]);
      if (DAT_00321360 < (int)sVar9) {
        DAT_00321360 = (int)sVar9;
      }
    }
  }
LAB_00109c8d:
  __filename = local_390;
  *(undefined8 *)(puVar19 + -8) = 0x109c99;
  __s = FUN_001146b0(__filename);
  DAT_003213b0 = DAT_003213b0 + 1;
  *puVar3 = __s;
LAB_00109ca4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)(puVar19 + -8) = 0x10a84c;
    __stack_chk_fail();
  }
  return uVar13;
}



void FUN_0010a860(char *param_1,char *param_2,ulong param_3)

{
  __dev_t _Var1;
  __ino_t _Var2;
  char **ppcVar3;
  char **ppcVar4;
  byte bVar5;
  int __fildes;
  int *piVar6;
  DIR *__dirp;
  undefined8 uVar7;
  __ino_t *p_Var8;
  undefined8 uVar9;
  __ino_t *__ptr;
  dirent *pdVar10;
  char *__s;
  size_t sVar11;
  long lVar12;
  void *__ptr_00;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_378;
  stat local_368;
  undefined local_2d8 [664];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  *piVar6 = 0;
  __dirp = opendir(param_1);
  if (__dirp == (DIR *)0x0) {
    uVar7 = dcgettext(0,"cannot open directory %s",5);
    FUN_001069a0(param_3 & 0xff,uVar7,param_1);
  }
  else {
    if (DAT_003213c8 == 0) {
LAB_0010aa37:
      uVar7 = 0x10aa3c;
      FUN_001060e0();
      if ((DAT_003212f6 != '\0') || (DAT_003212b8 != '\0')) {
        if (DAT_00320010 == '\0') {
          __s = stdout->_IO_write_ptr;
          if (__s < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = __s + 1;
            *__s = '\n';
          }
          else {
            uVar7 = 0x10af05;
            __overflow(stdout,10);
          }
          DAT_003211f8 = DAT_003211f8 + 1;
        }
        DAT_00320010 = '\0';
        if (DAT_00321318 != '\0') {
          uVar7 = 0x10aed0;
          fwrite_unlocked(&DAT_00117c53,1,2,(FILE *)stdout);
          DAT_003211f8 = DAT_003211f8 + 2;
        }
        __ptr_00 = (void *)0x0;
        if (DAT_00321311 != '\0') {
          uVar7 = 0x10ae7f;
          __ptr_00 = (void *)FUN_0010c640(param_1,2);
          if (__ptr_00 == (void *)0x0) {
            uVar9 = dcgettext(0,"error canonicalizing %s",5);
            uVar7 = 0x10aeae;
            FUN_001069a0(param_3 & 0xff,uVar9,param_1);
          }
        }
        if (param_2 == (char *)0x0) {
          param_2 = param_1;
        }
        FUN_00107910(param_2,DAT_003212c8,0xffffffff,0,1,&DAT_00321140,__ptr_00,uVar7);
        free(__ptr_00);
        fwrite_unlocked(":\n",1,2,(FILE *)stdout);
        DAT_003211f8 = DAT_003211f8 + 2;
      }
      local_378 = 0;
      do {
        *piVar6 = 0;
        pdVar10 = readdir(__dirp);
        if (pdVar10 == (dirent *)0x0) {
          if (*piVar6 == 0) goto LAB_0010abe6;
          uVar7 = dcgettext(0,"reading directory %s",5);
          FUN_001069a0(param_3 & 0xff,uVar7,param_1);
          if (*piVar6 != 0x4b) goto LAB_0010abe6;
        }
        else {
          __s = pdVar10->d_name;
          ppcVar4 = DAT_003212e8;
          if (DAT_003212f0 != 2) {
            if (pdVar10->d_name[0] == '.') {
              if ((DAT_003212f0 == 0) ||
                 (pdVar10->d_name[(ulong)(pdVar10->d_name[1] == '.') + 1] == '\0'))
              goto LAB_0010aae0;
            }
            else {
              ppcVar3 = DAT_003212e0;
              if (DAT_003212f0 == 0) {
                while (ppcVar4 = DAT_003212e8, ppcVar3 != (char **)0x0) {
                  __fildes = fnmatch(*ppcVar3,__s,4);
                  if (__fildes == 0) goto LAB_0010aae0;
                  ppcVar3 = (char **)ppcVar3[1];
                }
              }
            }
          }
          while (ppcVar4 != (char **)0x0) {
            __fildes = fnmatch(*ppcVar4,__s,4);
            if (__fildes == 0) goto LAB_0010aae0;
            ppcVar4 = (char **)ppcVar4[1];
          }
          uVar13 = 0;
          bVar5 = pdVar10->d_type - 1;
          if (bVar5 < 0xe) {
            uVar13 = (ulong)*(uint *)(&DAT_00116a00 + (ulong)bVar5 * 4);
          }
          lVar12 = FUN_001099e0(__s,uVar13,0,param_1);
          local_378 = local_378 + lVar12;
          if ((((DAT_00321338 == 1) && (DAT_00321330 == -1)) && (DAT_0032132c == '\0')) &&
             (DAT_003212f6 == '\0')) {
            FUN_001062f0();
            FUN_00109420();
            FUN_001060e0();
          }
        }
LAB_0010aae0:
        FUN_00107360();
      } while( true );
    }
    __fildes = dirfd(__dirp);
    if (__fildes < 0) {
      __fildes = __xstat(1,param_1,&local_368);
      _Var1 = local_368.st_dev;
      _Var2 = local_368.st_ino;
    }
    else {
      __fildes = __fxstat(1,__fildes,&local_368);
      _Var1 = local_368.st_dev;
      _Var2 = local_368.st_ino;
    }
    if (__fildes < 0) {
      uVar7 = dcgettext(0,"cannot determine device and inode of %s",5);
      FUN_001069a0(param_3 & 0xff,uVar7,param_1);
      closedir(__dirp);
    }
    else {
      local_368.st_dev = _Var1;
      local_368.st_ino = _Var2;
      __ptr = (__ino_t *)FUN_00114480(0x10);
      lVar12 = DAT_003213c8;
      __ptr[1] = _Var1;
      *__ptr = _Var2;
      p_Var8 = (__ino_t *)FUN_0010e900(lVar12,__ptr);
      if (p_Var8 == (__ino_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_001146d0();
      }
      if (__ptr == p_Var8) {
        __ptr = DAT_003210f8;
        if ((ulong)(DAT_00321100 - (long)DAT_003210f8) < 0x10) {
          _obstack_newchunk(&DAT_003210e0,0x10);
          __ptr = DAT_003210f8;
        }
        DAT_003210f8 = __ptr + 2;
        __ptr[1] = local_368.st_dev;
        *__ptr = local_368.st_ino;
        goto LAB_0010aa37;
      }
      free(__ptr);
      uVar7 = FUN_00113b10(0,3,param_1);
      uVar9 = dcgettext(0,"%s: not listing already-listed directory",5);
      error(0,0,uVar9,uVar7);
      closedir(__dirp);
      DAT_00321210 = 2;
    }
  }
  goto LAB_0010a911;
LAB_0010abe6:
  __fildes = closedir(__dirp);
  if (__fildes != 0) {
    uVar7 = dcgettext(0,"closing directory %s",5);
    FUN_001069a0(param_3 & 0xff,uVar7,param_1);
  }
  FUN_001062f0();
  if (DAT_003212f6 != '\0') {
    FUN_00106570(param_1,0);
  }
  if ((DAT_00321338 == 0) || (DAT_0032132c != '\0')) {
    if (DAT_00321318 != '\0') {
      fwrite_unlocked(&DAT_00117c53,1,2,(FILE *)stdout);
      DAT_003211f8 = DAT_003211f8 + 2;
    }
    __s = (char *)dcgettext(0,"total",5);
    fputs_unlocked(__s,(FILE *)stdout);
    sVar11 = strlen(__s);
    DAT_003211f8 = DAT_003211f8 + sVar11;
    __s = stdout->_IO_write_ptr;
    if (__s < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = __s + 1;
      *__s = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
    DAT_003211f8 = DAT_003211f8 + 1;
    __s = (char *)FUN_0010ed10(local_378,local_2d8,(ulong)DAT_00321328,0x200,DAT_00321320);
    fputs_unlocked(__s,(FILE *)stdout);
    sVar11 = strlen(__s);
    DAT_003211f8 = DAT_003211f8 + sVar11;
    __s = stdout->_IO_write_ptr;
    if (__s < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = __s + 1;
      *__s = '\n';
    }
    else {
      __overflow(stdout,10);
    }
    DAT_003211f8 = DAT_003211f8 + 1;
  }
  if (DAT_003213b0 != 0) {
    FUN_00109420();
  }
LAB_0010a911:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulong FUN_0010af20(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_2[0x10];
  lVar2 = param_1[0x10];
  if (param_1[0x10] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = FUN_00106490(*param_1,*param_2);
      return uVar4;
    }
  }
  return uVar5;
}



ulong FUN_0010af70(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1[0xc];
  lVar2 = param_2[0xc];
  if (param_2[0xc] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = FUN_00106490(*param_2,*param_1);
      return uVar4;
    }
  }
  return uVar5;
}



ulong FUN_0010afb0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1[0xe];
  lVar2 = param_2[0xe];
  if (param_2[0xe] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = FUN_00106490(*param_2,*param_1);
      return uVar4;
    }
  }
  return uVar5;
}



ulong FUN_0010aff0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_2[0xc];
  lVar2 = param_1[0xc];
  if (param_1[0xc] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = FUN_00106490(*param_1,*param_2);
      return uVar4;
    }
  }
  return uVar5;
}



ulong FUN_0010b030(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1[0x10];
  lVar2 = param_2[0x10];
  if (param_2[0x10] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = FUN_00106490(*param_2,*param_1);
      return uVar4;
    }
  }
  return uVar5;
}



ulong FUN_0010b080(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_2[0xe];
  lVar2 = param_1[0xe];
  if (param_1[0xe] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = FUN_00106490(*param_1,*param_2);
      return uVar4;
    }
  }
  return uVar5;
}



ulong FUN_0010b0c0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  pcVar1 = param_1[0xc];
  pcVar2 = param_2[0xc];
  if (param_2[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b100(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  pcVar1 = param_2[0xe];
  pcVar2 = param_1[0xe];
  if (param_1[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b140(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  pcVar1 = param_2[0xc];
  pcVar2 = param_1[0xc];
  if (param_1[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b180(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  pcVar1 = param_1[0xe];
  pcVar2 = param_2[0xe];
  if (param_2[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b1c0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  pcVar1 = param_1[0x10];
  pcVar2 = param_2[0x10];
  if (param_2[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b210(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  ulong uVar5;
  
  pcVar1 = param_2[0x10];
  pcVar2 = param_1[0x10];
  if (param_1[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b260(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar7 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar7)) {
    return 0xffffffff;
  }
  if ((bVar7) || (uVar5 = 1, iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_1[0x10];
    lVar3 = param_2[0x10];
    if (param_2[0x10] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar3 < lVar2) {
      return 1;
    }
    uVar4 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = FUN_00106490(*param_2,*param_1);
      return uVar6;
    }
  }
  return uVar5;
}



ulong FUN_0010b2f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar7 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar7)) {
    return 0xffffffff;
  }
  if ((bVar7) || (uVar5 = 1, iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_1[0xc];
    lVar3 = param_2[0xc];
    if (param_2[0xc] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar3 < lVar2) {
      return 1;
    }
    uVar4 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = FUN_00106490(*param_2,*param_1);
      return uVar6;
    }
  }
  return uVar5;
}



ulong FUN_0010b370(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar7 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar7)) {
    return 0xffffffff;
  }
  if ((bVar7) || (uVar5 = 1, iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_2[0xe];
    lVar3 = param_1[0xe];
    if (param_1[0xe] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar3 < lVar2) {
      return 1;
    }
    uVar4 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = FUN_00106490(*param_1,*param_2);
      return uVar6;
    }
  }
  return uVar5;
}



ulong FUN_0010b3f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar7 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar7)) {
    return 0xffffffff;
  }
  if ((bVar7) || (uVar5 = 1, iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_2[0x10];
    lVar3 = param_1[0x10];
    if (param_1[0x10] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar3 < lVar2) {
      return 1;
    }
    uVar4 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = FUN_00106490(*param_1,*param_2);
      return uVar6;
    }
  }
  return uVar5;
}



ulong FUN_0010b480(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar7 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar7)) {
    return 0xffffffff;
  }
  if ((bVar7) || (uVar5 = 1, iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_1[0xe];
    lVar3 = param_2[0xe];
    if (param_2[0xe] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar3 < lVar2) {
      return 1;
    }
    uVar4 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = FUN_00106490(*param_2,*param_1);
      return uVar6;
    }
  }
  return uVar5;
}



ulong FUN_0010b500(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  bVar7 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar1 != 9 && iVar1 != 3) && (bVar7)) {
    return 0xffffffff;
  }
  if ((bVar7) || (uVar5 = 1, iVar1 != 9 && iVar1 != 3)) {
    lVar2 = param_2[0xc];
    lVar3 = param_1[0xc];
    if (param_1[0xc] != lVar2 && lVar2 <= lVar3) {
      return 0xffffffff;
    }
    if (lVar3 < lVar2) {
      return 1;
    }
    uVar4 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = FUN_00106490(*param_1,*param_2);
      return uVar6;
    }
  }
  return uVar5;
}



void FUN_0010b580(char **param_1,char **param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = strrchr(*param_2,0x2e);
  pcVar3 = strrchr(*param_1,0x2e);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar1 = FUN_00106490(pcVar2,pcVar3,&DAT_00117c4a);
  if (iVar1 == 0) {
    FUN_00106490(*param_2,*param_1);
    return;
  }
  return;
}



void FUN_0010b5f0(char **param_1,char **param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = strrchr(*param_1,0x2e);
  pcVar3 = strrchr(*param_2,0x2e);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar1 = FUN_00106490(pcVar2,pcVar3,&DAT_00117c4a);
  if (iVar1 == 0) {
    FUN_00106490(*param_1,*param_2);
    return;
  }
  return;
}



ulong FUN_0010b660(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  bool bVar6;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar6)) {
    return 0xffffffff;
  }
  if ((bVar6) || (uVar5 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_2[0x10];
    pcVar2 = param_1[0x10];
    if (param_1[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return 0xffffffff;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    uVar3 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b6f0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  bool bVar6;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar6)) {
    return 0xffffffff;
  }
  if ((bVar6) || (uVar5 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_2[0xc];
    pcVar2 = param_1[0xc];
    if (param_1[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return 0xffffffff;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    uVar3 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



ulong FUN_0010b770(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  bool bVar6;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar6)) {
    return 0xffffffff;
  }
  if ((bVar6) || (uVar5 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_1[0xe];
    pcVar2 = param_2[0xe];
    if (param_2[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return 0xffffffff;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    uVar3 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return CONCAT44(extraout_var,iVar4);
    }
  }
  return uVar5;
}



void FUN_0010b7f0(char **param_1,char **param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s = *param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    if (__s1 == (char *)0x0) goto LAB_0010b83d;
    iVar1 = strcmp(__s1,"");
  }
  else {
    if (__s1 == (char *)0x0) {
      __s1 = "";
    }
    iVar1 = strcmp(__s1,__s2);
  }
  if (iVar1 != 0) {
    return;
  }
LAB_0010b83d:
  strcmp(__s,__s_00);
  return;
}



void FUN_0010b870(char **param_1,char **param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s = *param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    if (__s1 == (char *)0x0) goto LAB_0010b8bd;
    iVar1 = strcmp(__s1,"");
  }
  else {
    if (__s1 == (char *)0x0) {
      __s1 = "";
    }
    iVar1 = strcmp(__s1,__s2);
  }
  if (iVar1 != 0) {
    return;
  }
LAB_0010b8bd:
  strcmp(__s,__s_00);
  return;
}



undefined8 FUN_0010b8f0(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 != 9 && iVar2 != 3) && (iVar1 == 3 || iVar1 == 9)) {
    return 0xffffffff;
  }
  if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
    return 1;
  }
  pcVar3 = strrchr(*param_2,0x2e);
  pcVar4 = strrchr(*param_1,0x2e);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  uVar5 = FUN_00106490(pcVar3,pcVar4,&DAT_00117c4a);
  if ((int)uVar5 == 0) {
    uVar5 = FUN_00106490(*param_2,*param_1);
    return uVar5;
  }
  return uVar5;
}



undefined8 FUN_0010b9a0(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 != 9 && iVar2 != 3) && (iVar1 == 3 || iVar1 == 9)) {
    return 0xffffffff;
  }
  if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
    return 1;
  }
  pcVar3 = strrchr(*param_1,0x2e);
  pcVar4 = strrchr(*param_2,0x2e);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  uVar5 = FUN_00106490(pcVar3,pcVar4,&DAT_00117c4a);
  if ((int)uVar5 == 0) {
    uVar5 = FUN_00106490(*param_1,*param_2);
    return uVar5;
  }
  return uVar5;
}



undefined8 FUN_0010ba50(char **param_1,char **param_2)

{
  int iVar1;
  char *__s;
  char *__s_00;
  int iVar2;
  char *__s1;
  char *__s2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return 0xffffffff;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  __s = *param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_0010bae4;
  }
  else {
    if (__s1 == (char *)0x0) {
      __s1 = "";
    }
  }
  iVar2 = strcmp(__s1,__s2);
  if (iVar2 != 0) {
    return CONCAT44(extraout_var,iVar2);
  }
LAB_0010bae4:
  iVar2 = strcmp(__s,__s_00);
  return CONCAT44(extraout_var_00,iVar2);
}



void FUN_0010bb20(int param_1)

{
  FILE *__stream;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *__s1;
  char *__s;
  char **ppcVar4;
  char *__s1_00;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char *local_98;
  char *local_90;
  char *local_88 [4];
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined *local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  uVar3 = program_name;
  ppcVar4 = &local_98;
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar2 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar2,uVar3);
    goto LAB_0010bb72;
  }
  __s1_00 = "ls";
  uVar2 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar2,uVar3);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "\nMandatory arguments to long options are mandatory for short options too.\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "      --block-size=SIZE      scale sizes by SIZE before printing them; e.g.,\n                               \'--block-size=M\' prints sizes in units of\n                               1,048,576 bytes; see SIZE format below\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information);\n                               with -l: show ctime and sort by name;\n                               otherwise: sort by ctime, newest first\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output; WHEN can be \'always\' (default\n                               if omitted), \'auto\', or \'never\'; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append \'*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,"  -g                         like -l, but do not list owner\n",5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "      --group-directories-first\n                             group directories before files;\n                               can be augmented with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l and/or -s, print human readable sizes\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                               that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "      --hyperlink[=WHEN]     hyperlink file names; WHEN can be \'always\'\n                               (default if omitted), \'auto\', or \'never\'\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k, --kibibytes            default to 1024-byte blocks for disk usage\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -q, --hide-control-chars   print ? instead of nongraphic characters\n      --show-control-chars   show nongraphic characters as-is (the default,\n                               unless program is \'ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always,\n                               shell-escape, shell-escape-always, c, escape\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -S                         sort by file size, largest first\n      --sort=WORD            sort by WORD instead of name: none (-U), size (-S),\n                               time (-t), version (-v), extension (-X)\n      --time=WORD            with -l, show time as WORD instead of default\n                               modification time: atime or access or use (-u);\n                               ctime or status (-c); also use specified time\n                               as sort key if --sort=time (newest first)\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "      --time-style=STYLE     with -l, show times using style STYLE:\n                               full-iso, long-iso, iso, locale, or +FORMAT;\n                               FORMAT is interpreted like in \'date\'; if FORMAT\n                               is FORMAT1<newline>FORMAT2, then FORMAT1 applies\n                               to non-recent files and FORMAT2 to recent files;\n                               if STYLE is prefixed with \'posix-\', STYLE\n                               takes effect only outside the POSIX locale\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -u                         with -lt: sort by, and show, access time;\n                               with -l: show access time and sort by name;\n                               otherwise: sort by access time, newest first\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n  -1                         list one file per line.  Avoid \'\\n\' with -q or -b\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  __stream = stdout;
  __s = (char *)dcgettext(0,
                          "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n"
                          ,5);
  fputs_unlocked(__s,__stream);
  if ((ls_mode != 1) && (__s1_00 = "vdir", ls_mode == 2)) {
    __s1_00 = "dir";
  }
  __s = (char *)((long)&DAT_0011813c + 1);
  local_38 = 0;
  local_30 = 0;
  local_90 = "test invocation";
  local_68 = "sha256sum";
  local_98 = (char *)((long)&DAT_0011813c + 1);
  local_88[0] = 0x117d7b;
  local_58 = "sha384sum";
  local_88[1] = "Multi-call invocation";
  local_48 = &DAT_00117d56;
  local_88[2] = "sha224sum";
  local_88[3] = "sha2 utilities";
  local_60 = "sha2 utilities";
  local_50 = "sha2 utilities";
  local_40 = "sha2 utilities";
  do {
    iVar1 = strcmp(__s1_00,__s);
    if (iVar1 == 0) break;
    ppcVar4 = ppcVar4 + 2;
    __s = *ppcVar4;
  } while (__s != (char *)0x0);
  __s = ppcVar4[1];
  if (__s == (char *)0x0) {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","http://www.gnu.org/software/coreutils/");
    __s = setlocale(5,(char *)0x0);
    if ((__s != (char *)0x0) && (iVar1 = strncmp(__s,"en_",3), __s = __s1_00, iVar1 != 0))
    goto LAB_0010c191;
    uVar3 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    puVar5 = (undefined1 *)0x117d1d;
    __printf_chk(1,uVar3,"http://www.gnu.org/software/coreutils/",__s1_00);
  }
  else {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","http://www.gnu.org/software/coreutils/");
    __s1 = setlocale(5,(char *)0x0);
    if ((__s1 != (char *)0x0) && (iVar1 = strncmp(__s1,"en_",3), iVar1 != 0)) {
LAB_0010c191:
      uVar3 = dcgettext(0,"Report %s translation bugs to <http://translationproject.org/team/>\n",5)
      ;
      __printf_chk(1,uVar3,__s1_00);
    }
    uVar3 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar3,"http://www.gnu.org/software/coreutils/",__s1_00);
    bVar6 = __s1_00 == __s;
    puVar5 = &DAT_00117c4a;
    __s1_00 = __s;
    if (bVar6) {
      puVar5 = (undefined1 *)0x117d1d;
    }
  }
  uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar3,__s1_00,puVar5);
LAB_0010bb72:
                    // WARNING: Subroutine does not return
  exit(param_1);
}



char * FUN_0010c1c0(char *param_1,ulong param_2)

{
  char *__buf;
  ulong uVar1;
  int *piVar2;
  size_t __size;
  
  __size = param_2 + 1;
  if (0x400 < param_2) {
    __size = 0x401;
  }
  do {
    __buf = (char *)malloc(__size);
    while( true ) {
      if (__buf == (char *)0x0) {
        return (char *)0;
      }
      uVar1 = readlink(param_1,__buf,__size);
      if (((long)uVar1 < 0) && (piVar2 = __errno_location(), *piVar2 != 0x22)) {
        free(__buf);
        return (char *)0;
      }
      if (uVar1 < __size) {
        __buf[uVar1] = '\0';
        return __buf;
      }
      free(__buf);
      if (0x3fffffffffffffff < __size) break;
      __size = __size * 2;
      __buf = (char *)malloc(__size);
    }
    if (0x7ffffffffffffffe < __size) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return (char *)0;
    }
    __size = 0x7fffffffffffffff;
  } while( true );
}



void FUN_0010c2b0(void)

{
  FUN_0010bb20(1);
  return;
}



long FUN_0010c2c0(char *param_1,char **param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  size_t sVar4;
  long lVar5;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(param_1);
  __s1 = *param_2;
  local_58 = -1;
  lVar2 = local_58;
  if (__s1 != (char *)0x0) {
    bVar1 = false;
    lVar2 = 0;
    __s2 = param_3;
LAB_0010c357:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,param_1,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + param_4);
          __s1 = param_2[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_0010c357;
        }
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * param_4 + (long)param_3),__s2,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + param_4);
      __s1 = param_2[lVar5 + 1];
      lVar2 = lVar5 + 1;
    } while (__s1 != (char *)0x0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = local_58;
    }
  }
  local_58 = lVar2;
  return local_58;
}



void FUN_0010c3e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_00113cc0(1,param_1);
  uVar3 = FUN_001138f0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}



void FUN_0010c460(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *__s;
  undefined8 uVar2;
  long lVar3;
  void *__s2;
  void *__s1;
  long lVar4;
  
  __stream = stderr;
  __s = (char *)dcgettext(0,"Valid arguments are:",5);
  fputs_unlocked(__s,__stream);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar3 = 0;
    __s1 = (void *)0x0;
LAB_0010c4e8:
    do {
      __s2 = param_2;
      if (lVar3 != 0) {
        iVar1 = memcmp(__s1,__s2,param_3);
        if (iVar1 == 0) {
          lVar3 = lVar3 + 1;
          uVar2 = FUN_00113ce0(lVar4);
          __fprintf_chk(stderr,1,&DAT_0011a2fa,uVar2);
          lVar4 = param_1[lVar3];
          param_2 = (void *)((long)__s2 + param_3);
          if (lVar4 == 0) break;
          goto LAB_0010c4e8;
        }
      }
      lVar3 = lVar3 + 1;
      uVar2 = FUN_00113ce0(lVar4);
      __fprintf_chk(stderr,1,"\n  - %s",uVar2);
      lVar4 = param_1[lVar3];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
    } while (lVar4 != 0);
  }
  __s = ((_IO_FILE *)stderr)->_IO_write_ptr;
  if (__s < ((_IO_FILE *)stderr)->_IO_write_end) {
    ((_IO_FILE *)stderr)->_IO_write_ptr = __s + 1;
    *__s = '\n';
    return;
  }
  __overflow((_IO_FILE *)stderr,10);
  return;
}



long FUN_0010c580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_0010c2c0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_0010c3e0(param_1,param_2,lVar1);
    FUN_0010c460(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}



long FUN_0010c5f0(void *param_1,long *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = memcmp(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = (void *)((long)param_3 + param_4);
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}



char * FUN_0010c640(char *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  size_t __n;
  size_t sVar6;
  int *piVar7;
  char *pcVar8;
  char *__s;
  uint uVar9;
  char *__n_00;
  char *pcVar10;
  char *__dest;
  char *__s_00;
  long in_FS_OFFSET;
  long local_108;
  char *local_f8;
  char *local_f0;
  ulong local_e8;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_2 & 3;
  if (((uVar9 & uVar9 - 1) == 0) && (param_1 != (char *)0x0)) {
    if (*param_1 == '\0') {
      piVar7 = __errno_location();
      __s = (char *)0x0;
      *piVar7 = 2;
    }
    else {
      if (*param_1 == '/') {
        __s = (char *)FUN_00114480(0x1000);
        pcVar10 = __s + 0x1000;
        __s_00 = __s + 1;
        *__s = '/';
      }
      else {
        __s = (char *)FUN_00114840();
        if (__s == (char *)0x0) goto LAB_0010c860;
        __n = strlen(__s);
        if (__n < 0x1000) {
          __s = (char *)FUN_001144e0(__s,0x1000);
          __s_00 = __s + __n;
          pcVar10 = __s + 0x1000;
        }
        else {
          pcVar10 = __s + __n;
          __s_00 = pcVar10;
        }
      }
      local_108 = 0;
      local_e8 = 0;
      local_f0 = (char *)0x0;
      local_f8 = param_1;
LAB_0010c6fb:
      cVar4 = *param_1;
      __dest = __s_00;
      if (cVar4 != '\0') {
        do {
          __s_00 = param_1;
          if (cVar4 == '/') {
            do {
              param_1 = param_1 + 1;
              cVar4 = *param_1;
            } while (cVar4 == '/');
            __s_00 = param_1;
            if (cVar4 != '\0') goto LAB_0010c73d;
          }
          else {
LAB_0010c73d:
            do {
              param_1 = param_1 + 1;
              if (*param_1 == '\0') break;
            } while (*param_1 != '/');
          }
          if (param_1 == __s_00) break;
          __n_00 = param_1 + -(long)__s_00;
          if (__n_00 == (char *)0x1) {
            if (cVar4 != '.') goto LAB_0010c771;
          }
          else {
            if (((__n_00 == (char *)0x2) && (cVar4 == '.')) && (__s_00[1] == '.')) {
              __s_00 = __dest;
              if (((__dest <= __s + 1) || (__s_00 = __dest + -1, __s_00 <= __s)) ||
                 (__dest[-2] == '/')) goto LAB_0010c6fb;
              do {
                __dest = __s_00 + -1;
                if (__s == __dest) break;
                __n_00 = __s_00 + -2;
                __s_00 = __dest;
              } while (*__n_00 != '/');
            }
            else {
LAB_0010c771:
              if (__dest[-1] != '/') {
                *__dest = '/';
                __dest = __dest + 1;
              }
              if (pcVar10 <= __dest + (long)__n_00) {
                lVar3 = -(long)__s;
                pcVar8 = pcVar10 + -(long)__s + 0x1000;
                if (0xfff < (long)__n_00) {
                  pcVar8 = __n_00 + 1 + (long)(pcVar10 + -(long)__s);
                }
                __s = (char *)FUN_001144e0(__s,pcVar8);
                pcVar10 = pcVar8 + (long)__s;
                __dest = __dest + lVar3 + (long)__s;
              }
              memcpy(__dest,__s_00,(size_t)__n_00);
              __dest = __dest + (long)__n_00;
              *__dest = '\0';
              if ((uVar9 == 2) && ((param_2 & 4) != 0)) {
LAB_0010c7e6:
                local_d8.st_mode = 0;
LAB_0010c7ee:
                if ((*param_1 != '\0') && (uVar9 != 2)) {
                  piVar7 = __errno_location();
                  iVar5 = 0x14;
LAB_0010c901:
                  free(local_f0);
                  free(__s);
                  if (local_108 != 0) {
LAB_0010c9ca:
                    FUN_0010e350(local_108);
                  }
                  *piVar7 = iVar5;
                  __s = (char *)0x0;
                  goto LAB_0010c860;
                }
              }
              else {
                if ((param_2 & 4) == 0) {
                  iVar5 = __lxstat(1,__s,&local_d8);
                }
                else {
                  iVar5 = __xstat(1,__s,&local_d8);
                }
                if (iVar5 != 0) {
                  piVar7 = __errno_location();
                  iVar5 = *piVar7;
                  if ((param_2 & 3) != 0) {
                    if (uVar9 != 1) goto LAB_0010c7e6;
                    __n = strspn(param_1,"/");
                    if ((param_1[__n] == '\0') && (iVar5 == 2)) goto LAB_0010c800;
                  }
                  goto LAB_0010c901;
                }
                if ((local_d8.st_mode & 0xf000) == 0xa000) {
                  if ((local_108 == 0) &&
                     (local_108 = FUN_0010e100(7,0,FUN_0010eb70,FUN_0010ebe0,FUN_0010ec20),
                     local_108 == 0)) {
                    // WARNING: Subroutine does not return
                    FUN_001146d0();
                  }
                  cVar4 = FUN_0010d000(local_108,local_f8,&local_d8);
                  if (cVar4 == '\0') {
                    FUN_0010cf70(local_108,local_f8,&local_d8);
                    __s_00 = (char *)FUN_0010c1c0(__s,local_d8.st_size);
                    if (__s_00 == (char *)0x0) {
                      piVar7 = __errno_location();
                      iVar5 = *piVar7;
                      if ((uVar9 != 2) || (iVar5 == 0xc)) goto LAB_0010c9b0;
                    }
                    else {
                      __n = strlen(__s_00);
                      sVar6 = strlen(param_1);
                      uVar1 = __n + 1 + sVar6;
                      if (local_e8 == 0) {
                        local_e8 = 0x1000;
                        if (0xfff < uVar1) {
                          local_e8 = uVar1;
                        }
                        local_f0 = (char *)FUN_00114480(local_e8);
                      }
                      else {
                        if (local_e8 < uVar1) {
                          local_f0 = (char *)FUN_001144e0(local_f0,uVar1);
                          local_e8 = uVar1;
                        }
                      }
                      memmove(local_f0 + __n,param_1,sVar6 + 1);
                      memcpy(local_f0,__s_00,__n);
                      local_f8 = local_f0;
                      __n_00 = __s + 1;
                      if (*__s_00 == '/') {
                        *__s = '/';
                      }
                      else {
                        bVar2 = __n_00 < __dest;
                        __n_00 = __dest;
                        if ((bVar2) && (__n_00 = __dest + -1, __s < __n_00)) {
                          cVar4 = __dest[-2];
                          __dest = __n_00;
                          while ((__n_00 = __dest, cVar4 != '/' &&
                                 (__n_00 = __dest + -1, __s != __n_00))) {
                            cVar4 = __dest[-2];
                            __dest = __n_00;
                          }
                        }
                      }
                      free(__s_00);
                      param_1 = local_f0;
                      __dest = __n_00;
                    }
                  }
                  else {
                    if (uVar9 != 2) {
                      piVar7 = __errno_location();
                      iVar5 = 0x28;
LAB_0010c9b0:
                      free(local_f0);
                      free(__s);
                      goto LAB_0010c9ca;
                    }
                  }
                }
                else {
                  if ((local_d8.st_mode & 0xf000) != 0x4000) goto LAB_0010c7ee;
                }
              }
            }
          }
LAB_0010c800:
          cVar4 = *param_1;
          if (cVar4 == '\0') break;
        } while( true );
      }
      if ((__s + 1 < __dest) && (__dest[-1] == '/')) {
        __dest = __dest + -1;
      }
      *__dest = '\0';
      if (pcVar10 != __dest + 1) {
        __s = (char *)FUN_001144e0(__s,__dest + (1 - (long)__s));
      }
      free(local_f0);
      if (local_108 != 0) {
        FUN_0010e350(local_108);
      }
    }
  }
  else {
    piVar7 = __errno_location();
    __s = (char *)0x0;
    *piVar7 = 0x16;
  }
LAB_0010c860:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __s;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0010cc80(undefined8 param_1)

{
  DAT_003213d8 = param_1;
  return;
}



void FUN_0010cc90(undefined param_1)

{
  DAT_003213d0 = param_1;
  return;
}



void FUN_0010cca0(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00115c70(stdout);
  if (iVar1 != 0) {
    puVar2 = (uint *)__errno_location();
    if ((DAT_003213d0 == '\0') || (*puVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_003213d8 == 0) {
        error(0,(ulong)*puVar2,&DAT_0011a2fc,uVar3);
      }
      else {
        uVar4 = FUN_00113ae0();
        error(0,(ulong)*puVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0010cd22;
    }
  }
  iVar1 = FUN_00115c70();
  if (iVar1 == 0) {
    return;
  }
LAB_0010cd22:
                    // WARNING: Subroutine does not return
  _exit(exit_failure);
}



ulong FUN_0010cd50(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_0010ce10();
  uVar3 = lVar2 - (long)param_1;
  if (((ulong)(cVar1 == '/') < uVar3) && (*(char *)(lVar2 + -1) == '/')) {
    do {
      uVar4 = uVar3 - 1;
      if ((ulong)(cVar1 == '/') == uVar4) {
        return uVar4;
      }
      lVar2 = uVar3 - 2;
      uVar3 = uVar4;
    } while (param_1[lVar2] == '/');
    return uVar4;
  }
  return uVar3;
}



undefined * FUN_0010cdb0(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_0010cd50();
  __dest = (undefined *)malloc(__n + 1 + (ulong)(__n == 0));
  if (__dest != (undefined *)0x0) {
    __dest = (undefined *)memcpy(__dest,param_1,__n);
    if (__n == 0) {
      *__dest = 0x2e;
      __n = 1;
    }
    __dest[__n] = 0;
  }
  return __dest;
}



char * FUN_0010ce10(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 == '/') {
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = param_1;
    do {
      while (cVar3 == '/') {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
        bVar1 = true;
        if (cVar3 == '\0') {
          return param_1;
        }
      }
      if (bVar1) {
        bVar1 = false;
        param_1 = pcVar2;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    } while (cVar3 != '\0');
  }
  return param_1;
}



size_t FUN_0010ce70(char *param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  
  sVar2 = strlen(param_1);
  if ((1 < sVar2) && (param_1[sVar2 - 1] == '/')) {
    do {
      sVar3 = sVar2 - 1;
      if (sVar3 == 1) {
        return 1;
      }
      lVar1 = sVar2 - 2;
      sVar2 = sVar3;
    } while (param_1[lVar1] == '/');
    return sVar3;
  }
  return sVar2;
}



ulong FUN_0010cec0(char *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ssize_t sVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  
  if ((*(uint *)(param_2 + 0x18) & 0xf000) == 0xa000) {
    return 0;
  }
  sVar3 = getxattr(param_1,"system.posix_acl_access",(void *)0x0,0);
  if (sVar3 < 0) {
    piVar5 = __errno_location();
    if (*piVar5 == 0x3d) {
LAB_0010cf28:
      if ((*(uint *)(param_2 + 0x18) & 0xf000) != 0x4000) {
        return 0;
      }
      sVar3 = getxattr(param_1,"system.posix_acl_default",(void *)0x0,0);
      if (-1 < sVar3) {
        if (sVar3 == 0) {
          return 0;
        }
        goto LAB_0010cef2;
      }
      puVar6 = (uint *)__errno_location();
      uVar1 = *puVar6;
      if (uVar1 == 0x3d) {
        return 0;
      }
    }
    else {
      puVar6 = (uint *)__errno_location();
      uVar1 = *puVar6;
    }
    bVar2 = FUN_00115c40((ulong)uVar1);
    uVar4 = (ulong)-(uint)bVar2;
  }
  else {
    if (sVar3 == 0) goto LAB_0010cf28;
LAB_0010cef2:
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_0010cf70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined8 *)FUN_00114480(0x18);
  uVar2 = FUN_001146b0(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined8 *)FUN_0010e900(param_1,puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar1 != puVar3) {
      FUN_0010ec20(puVar1);
      return;
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_001146d0();
}



ulong FUN_0010d000(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_0010de90(param_1,&local_28);
    uVar1 = uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0010d060(ulong param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0x2d;
  uVar4 = (uint)param_1 & 0xf000;
  if ((((uVar4 != 0x8000) && (uVar2 = 100, uVar4 != 0x4000)) && (uVar2 = 0x62, uVar4 != 0x6000)) &&
     (((uVar2 = 99, uVar4 != 0x2000 && (uVar2 = 0x6c, uVar4 != 0xa000)) &&
      ((uVar2 = 0x70, uVar4 != 0x1000 && (uVar2 = 0x73, uVar4 != 0xc000)))))) {
    uVar2 = 0x3f;
  }
  *param_2 = uVar2;
  param_2[1] = (-((param_1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((param_1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 0x40) == 0);
  if ((param_1 & 0x800) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[3] = cVar3;
  param_2[4] = (-((param_1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((param_1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 8) == 0);
  if ((param_1 & 0x400) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[6] = cVar3;
  param_2[7] = (-((param_1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((param_1 & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 1) == 0);
  if ((param_1 & 0x200) != 0) {
    param_2[9] = (bVar1 & 0xe0) + 0x74;
    *(undefined2 *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)(param_2 + 10) = 0x20;
  return;
}



void FUN_0010d1f0(long param_1)

{
  FUN_0010d060((ulong)*(uint *)(param_1 + 0x18));
  return;
}



void FUN_0010d200(void)

{
  long lVar1;
  
  lVar1 = FUN_0010d220();
  if (lVar1 != 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_001146d0();
}



void * FUN_0010d220(void *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_0010ce10();
  uVar4 = FUN_0010ce70(lVar3);
  __n_00 = (lVar3 - (long)param_1) + uVar4;
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(char *)(lVar3 + -1 + uVar4) != '/');
  }
  cVar1 = *param_2;
  cVar2 = cVar1;
  while (cVar2 == '/') {
    param_2 = param_2 + 1;
    cVar2 = *param_2;
  }
  __n = strlen(param_2);
  __dest = malloc(uVar4 + 1 + __n_00 + __n);
  if (__dest != (void *)0x0) {
    puVar5 = (undefined *)mempcpy(__dest,param_1,__n_00);
    *puVar5 = 0x2f;
    if (param_3 != (undefined8 *)0x0) {
      *(undefined **)param_3 = puVar5 + uVar4 + -(ulong)(cVar1 == '/');
    }
    puVar5 = (undefined *)mempcpy(puVar5 + uVar4,param_2,__n);
    *puVar5 = 0;
  }
  return __dest;
}



char * FUN_0010d2f0(char **param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = *param_1;
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    return (char *)0;
  }
  bVar1 = false;
  pcVar2 = (char *)0x0;
  do {
    if (bVar1) {
      if (((0x39 < (int)cVar3 - 0x41U) ||
          (bVar1 = false, (1 << ((byte)((int)cVar3 - 0x41U) & 0x3f) & 0x3ffffff03ffffffU) == 0)) &&
         (bVar1 = false, cVar3 != '~')) {
        pcVar2 = (char *)0x0;
      }
LAB_0010d341:
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    else {
      if (cVar3 == '.') {
        bVar1 = true;
        if (pcVar2 == (char *)0x0) {
          pcVar2 = pcVar4;
        }
        goto LAB_0010d341;
      }
      if (cVar3 < '[') {
        if (('@' < cVar3) || ((byte)(cVar3 - 0x30U) < 10)) goto LAB_0010d341;
      }
      else {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) goto LAB_0010d341;
      }
      if (cVar3 != '~') {
        pcVar2 = (char *)0x0;
      }
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    pcVar4 = pcVar4 + 1;
    if (cVar3 == '\0') {
      return pcVar2;
    }
  } while( true );
}



ulong FUN_0010d3c0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *__n;
  char *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  byte bVar15;
  char *local_50;
  char *local_48;
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = strcmp(param_1,param_2);
  uVar11 = uVar2;
  if (uVar2 == 0) goto LAB_0010d618;
  if (*param_1 == '\0') {
LAB_0010d758:
    uVar11 = 0xffffffff;
    goto LAB_0010d618;
  }
  cVar1 = *param_2;
  bVar14 = cVar1 == '\0';
  if (bVar14) {
LAB_0010d640:
    uVar11 = 1;
    goto LAB_0010d618;
  }
  lVar6 = 2;
  __n = ".";
  pcVar13 = param_1;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    bVar14 = *__n == *pcVar13;
    __n = __n + (ulong)bVar15 * -2 + 1;
    pcVar13 = pcVar13 + (ulong)bVar15 * -2 + 1;
  } while (bVar14);
  if (bVar14) goto LAB_0010d758;
  lVar6 = 2;
  __n = ".";
  pcVar13 = param_2;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    bVar14 = *__n == *pcVar13;
    __n = __n + (ulong)bVar15 * -2 + 1;
    pcVar13 = pcVar13 + (ulong)bVar15 * -2 + 1;
  } while (bVar14);
  if (bVar14) goto LAB_0010d640;
  lVar6 = 3;
  __n = "..";
  pcVar13 = param_1;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    bVar14 = *__n == *pcVar13;
    __n = __n + (ulong)bVar15 * -2 + 1;
    pcVar13 = pcVar13 + (ulong)bVar15 * -2 + 1;
  } while (bVar14);
  if (bVar14) goto LAB_0010d758;
  lVar6 = 3;
  __n = "..";
  pcVar13 = param_2;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    bVar14 = *__n == *pcVar13;
    __n = __n + (ulong)bVar15 * -2 + 1;
    pcVar13 = pcVar13 + (ulong)bVar15 * -2 + 1;
  } while (bVar14);
  if (bVar14) goto LAB_0010d640;
  if (*param_1 == '.') {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (cVar1 != '.') goto LAB_0010d758;
  }
  else {
    if (cVar1 == '.') goto LAB_0010d640;
  }
  local_50 = param_1;
  local_48 = param_2;
  lVar6 = FUN_0010d2f0(&local_50);
  lVar4 = FUN_0010d2f0();
  if (lVar6 == 0) {
    __n = local_50 + -(long)param_1;
    if (lVar4 != 0) goto LAB_0010d4ac;
LAB_0010d6c1:
    pcVar13 = local_48 + -(long)param_2;
  }
  else {
    __n = (char *)(lVar6 - (long)param_1);
    if (lVar4 == 0) {
      pcVar13 = local_48 + -(long)param_2;
    }
    else {
LAB_0010d4ac:
      pcVar13 = (char *)(lVar4 - (long)param_2);
    }
    if ((__n == pcVar13) && (iVar3 = strncmp(param_1,param_2,(size_t)__n), iVar3 == 0)) {
      __n = local_50 + -(long)param_1;
      goto LAB_0010d6c1;
    }
  }
  pcVar8 = (char *)0x0;
  pcVar7 = (char *)0x0;
  do {
    if ((__n <= pcVar7) && (uVar11 = uVar2, pcVar13 <= pcVar8)) break;
    pcVar12 = pcVar8 + -(long)pcVar7;
    pcVar9 = param_2 + (long)pcVar12;
    while (((pcVar7 < __n && (9 < (byte)(param_1[(long)pcVar7] - 0x30U))) ||
           ((cVar1 = pcVar7[(long)pcVar9], pcVar8 < pcVar13 && (9 < (byte)(cVar1 - 0x30U)))))) {
      if (__n != pcVar7) {
        bVar15 = param_1[(long)pcVar7];
        if ((byte)(bVar15 - 0x30) < 10) {
          uVar11 = 0;
LAB_0010d56a:
          if ((pcVar13 != pcVar8) && (bVar15 = pcVar7[(long)pcVar9], 9 < (byte)(bVar15 - 0x30)))
          goto LAB_0010d678;
          uVar10 = 0;
          goto LAB_0010d582;
        }
        uVar11 = (uint)bVar15;
        if ((((uint)bVar15 - 0x41 < 0x3a) &&
            ((1 << ((byte)((uint)bVar15 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0)) ||
           (uVar11 = (uint)bVar15 + 0x100, bVar15 != 0x7e)) goto LAB_0010d56a;
        if ((pcVar13 != pcVar12 + (long)pcVar7) &&
           (bVar15 = pcVar7[(long)pcVar9], 9 < (byte)(bVar15 - 0x30))) {
          uVar11 = 0xffffffff;
          goto LAB_0010d678;
        }
        uVar10 = 0;
        uVar11 = 0xffffffff;
LAB_0010d718:
        uVar11 = uVar11 - uVar10;
        if (uVar11 == 0) {
          uVar11 = uVar2;
        }
        goto LAB_0010d618;
      }
      if ((pcVar13 != __n + (long)pcVar12) &&
         (bVar15 = __n[(long)pcVar9], 9 < (byte)(bVar15 - 0x30))) {
        uVar11 = 0;
LAB_0010d678:
        uVar10 = (uint)bVar15;
        if (((0x39 < (uint)bVar15 - 0x41) ||
            ((1 << ((byte)((uint)bVar15 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) == 0)) &&
           (uVar10 = (uint)bVar15 + 0x100, bVar15 == 0x7e)) {
          uVar10 = 0xffffffff;
        }
LAB_0010d582:
        if (uVar10 != uVar11) goto LAB_0010d718;
      }
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    cVar5 = param_1[(long)pcVar7];
    while (cVar5 == '0') {
      pcVar7 = pcVar7 + 1;
      cVar5 = param_1[(long)pcVar7];
    }
    while (cVar1 == '0') {
      pcVar8 = pcVar8 + 1;
      cVar1 = param_2[(long)pcVar8];
    }
    pcVar9 = pcVar8 + -(long)pcVar7;
    uVar11 = 0;
    while( true ) {
      pcVar8 = pcVar7 + (long)pcVar9;
      if (9 < (byte)(cVar5 - 0x30U)) break;
      if (9 < (byte)(cVar1 - 0x30U)) {
        uVar11 = 1;
        goto LAB_0010d618;
      }
      if (uVar11 == 0) {
        uVar11 = (int)cVar5 - (int)cVar1;
      }
      pcVar7 = pcVar7 + 1;
      cVar5 = param_1[(long)pcVar7];
      cVar1 = pcVar7[(long)(param_2 + (long)pcVar9)];
    }
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar11 = 0xffffffff;
      break;
    }
  } while (uVar11 == 0);
LAB_0010d618:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar11;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0010d7d0(timespec *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = clock_gettime(0,param_1);
  if (iVar1 != 0) {
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    param_1->tv_sec = local_28.tv_sec;
    param_1->tv_nsec = local_28.tv_usec * 1000;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulong FUN_0010d830(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  pbVar4 = (byte *)setlocale(param_1,(char *)0x0);
  uVar1 = 1;
  bVar6 = false;
  bVar7 = pbVar4 == (byte *)0x0;
  if (!bVar7) {
    lVar2 = 2;
    pbVar3 = pbVar4;
    pbVar5 = &DAT_0011a33f;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar6 = *pbVar3 < *pbVar5;
      bVar7 = *pbVar3 == *pbVar5;
      pbVar3 = pbVar3 + (ulong)bVar8 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
    } while (bVar7);
    uVar1 = 0;
    bVar6 = (!bVar6 && !bVar7) == bVar6;
    if (!bVar6) {
      lVar2 = 6;
      pbVar3 = (byte *)"POSIX";
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar6 = *pbVar4 == *pbVar3;
        pbVar4 = pbVar4 + (ulong)bVar8 * -2 + 1;
        pbVar3 = pbVar3 + (ulong)bVar8 * -2 + 1;
      } while (bVar6);
      return (ulong)!bVar6;
    }
  }
  return uVar1;
}



ulong FUN_0010d890(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 < 10) {
    param_1 = 10;
  }
  param_1 = param_1 | 1;
  do {
    if (param_1 == 0xffffffffffffffff) {
      return 0xffffffffffffffff;
    }
    uVar1 = param_1 % 3;
    if (param_1 < 10) {
LAB_0010d910:
      if (uVar1 != 0) {
        return param_1;
      }
    }
    else {
      if (uVar1 != 0) {
        lVar4 = 0x10;
        uVar3 = 9;
        uVar2 = 3;
        do {
          uVar2 = uVar2 + 2;
          uVar1 = param_1 % uVar2;
          uVar3 = uVar3 + lVar4;
          if (param_1 <= uVar3) goto LAB_0010d910;
          lVar4 = lVar4 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1 = param_1 + 2;
  } while( true );
}



ulong FUN_0010d930(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}



undefined FUN_0010d940(long param_1,long param_2)

{
  return param_1 == param_2;
}



long FUN_0010d950(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    // WARNING: Subroutine does not return
  abort();
}



long FUN_0010d980(long param_1,long param_2,long **param_3,char param_4)

{
  undefined auVar1 [16];
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)FUN_0010d950();
  *param_3 = plVar4;
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    return 0;
  }
  if (lVar6 != param_2) {
    cVar3 = (**(code **)(param_1 + 0x38))(param_2);
    if (cVar3 == '\0') {
      plVar5 = (long *)plVar4[1];
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      lVar6 = *plVar5;
      do {
        if (param_2 == lVar6) {
LAB_0010da0c:
          if (param_4 == '\0') {
            return lVar6;
          }
          plVar4[1] = plVar5[1];
          *plVar5 = 0;
          plVar5[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar5;
          return lVar6;
        }
        cVar3 = (**(code **)(param_1 + 0x38))(param_2);
        if (cVar3 != '\0') {
          plVar5 = (long *)plVar4[1];
          lVar6 = *plVar5;
          goto LAB_0010da0c;
        }
        plVar4 = (long *)plVar4[1];
        plVar5 = (long *)plVar4[1];
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        lVar6 = *plVar5;
      } while( true );
    }
    lVar6 = *plVar4;
  }
  if (param_4 != '\0') {
    puVar2 = (undefined8 *)plVar4[1];
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Load size is inaccurate
      auVar1 = *(undefined *)puVar2;
      *(int *)plVar4 = SUB164(auVar1,0);
      *(undefined4 *)((long)plVar4 + 4) = SUB164(auVar1 >> 0x20,0);
      *(int *)(plVar4 + 1) = SUB164(auVar1 >> 0x40,0);
      *(undefined4 *)((long)plVar4 + 0xc) = SUB164(auVar1 >> 0x60,0);
      *puVar2 = 0;
      puVar2[1] = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar2;
      return lVar6;
    }
    *plVar4 = 0;
  }
  return lVar6;
}



undefined8 FUN_0010daa0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  
  pfVar2 = *param_1;
  uVar3 = 1;
  if (pfVar2 != (float *)&DAT_0011a3c0) {
    fVar1 = pfVar2[2];
    if ((((0.10000000 < fVar1) && (fVar1 < 0.89999998)) && (1.10000002 < pfVar2[3])) &&
       (0.00000000 <= *pfVar2)) {
      fVar4 = *pfVar2 + 0.10000000;
      if (((fVar4 < pfVar2[1]) && (pfVar2[1] <= 1.00000000)) && (fVar4 < fVar1)) {
        return 1;
      }
    }
    *(undefined **)param_1 = &DAT_0011a3c0;
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_0010db20(long param_1,long **param_2,char param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *param_2;
  if (plVar5 < param_2[1]) {
    do {
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        plVar4 = (long *)plVar5[1];
        if ((long *)plVar5[1] != (long *)0x0) {
          do {
            while( true ) {
              lVar6 = *plVar4;
              plVar2 = (long *)FUN_0010d950(param_1,lVar6);
              plVar3 = (long *)plVar4[1];
              if (*plVar2 != 0) break;
              *plVar2 = lVar6;
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
              *plVar4 = 0;
              plVar4[1] = *(long *)(param_1 + 0x48);
              *(long **)(param_1 + 0x48) = plVar4;
              plVar4 = plVar3;
              if (plVar3 == (long *)0x0) goto LAB_0010dbb7;
            }
            plVar4[1] = plVar2[1];
            *(long **)(plVar2 + 1) = plVar4;
            plVar4 = plVar3;
          } while (plVar3 != (long *)0x0);
LAB_0010dbb7:
          lVar6 = *plVar5;
        }
        plVar5[1] = 0;
        if (param_3 == '\0') {
          plVar4 = (long *)FUN_0010d950(param_1,lVar6);
          if (*plVar4 == 0) {
            *plVar4 = lVar6;
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          }
          else {
            plVar3 = *(long **)(param_1 + 0x48);
            if (plVar3 == (long *)0x0) {
              plVar3 = (long *)malloc(0x10);
              if (plVar3 == (long *)0x0) {
                return 0;
              }
            }
            else {
              *(long *)(param_1 + 0x48) = plVar3[1];
            }
            lVar1 = plVar4[1];
            *plVar3 = lVar6;
            plVar3[1] = lVar1;
            *(long **)(plVar4 + 1) = plVar3;
          }
          *plVar5 = 0;
          param_2[3] = (long *)((long)param_2[3] + -1);
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_2[1] && param_2[1] != plVar5);
  }
  return 1;
}



undefined8 FUN_0010dc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 FUN_0010dc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 FUN_0010dc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



void FUN_0010dc90(long **param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *param_1;
  uVar2 = 0;
  if (param_1[1] <= plVar4) {
    return;
  }
  do {
    if (*plVar4 != 0) {
      lVar1 = plVar4[1];
      uVar3 = 1;
      while (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
        uVar3 = uVar3 + 1;
      }
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    plVar4 = plVar4 + 2;
  } while (plVar4 < param_1[1]);
  return;
}



ulong FUN_0010dce0(long **param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *param_1;
  plVar3 = (long *)0x0;
  plVar4 = (long *)0x0;
  while (plVar2 < param_1[1]) {
    if (*plVar2 != 0) {
      lVar1 = plVar2[1];
      plVar4 = (long *)((long)plVar4 + 1);
      while (plVar3 = (long *)((long)plVar3 + 1), lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
      }
    }
    plVar2 = plVar2 + 2;
  }
  if (param_1[3] == plVar4) {
    return (ulong)(param_1[4] == plVar3);
  }
  return 0;
}



void FUN_0010dd40(long **param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  double dVar7;
  double dVar8;
  
  uVar5 = 0;
  plVar6 = *param_1;
  plVar1 = param_1[2];
  plVar2 = param_1[3];
  while (plVar6 < param_1[1]) {
    if (*plVar6 != 0) {
      lVar3 = plVar6[1];
      uVar4 = 1;
      while (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 8);
        uVar4 = uVar4 + 1;
      }
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
    }
    plVar6 = plVar6 + 2;
  }
  __fprintf_chk(param_2,1,"# entries:         %lu\n",param_1[4]);
  __fprintf_chk(param_2,1,"# buckets:         %lu\n",plVar1);
  if ((long)plVar2 < 0) {
    dVar7 = (double)((ulong)plVar2 >> 1 | (ulong)((uint)plVar2 & 1));
    dVar7 = dVar7 + dVar7;
  }
  else {
    dVar7 = (double)(long)plVar2;
  }
  if ((long)plVar1 < 0) {
    dVar8 = (double)((ulong)plVar1 >> 1 | (ulong)((uint)plVar1 & 1));
    dVar8 = dVar8 + dVar8;
  }
  else {
    dVar8 = (double)(long)plVar1;
  }
  __fprintf_chk((dVar7 * 100.00000000) / dVar8,dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",
                plVar2);
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}



long FUN_0010de90(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0010d950();
  lVar3 = *plVar2;
  if (lVar3 == 0) {
LAB_0010decd:
    lVar3 = 0;
  }
  else {
    while (lVar3 != param_2) {
      cVar1 = (**(code **)(param_1 + 0x38))(param_2);
      if (cVar1 != '\0') {
        return *plVar2;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto LAB_0010decd;
      lVar3 = *plVar2;
    }
  }
  return lVar3;
}



long FUN_0010def0(long **param_1)

{
  long *plVar1;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar1 = *param_1;
  if (plVar1 < param_1[1]) {
    if (*plVar1 != 0) {
      return *plVar1;
    }
    while (plVar1 = plVar1 + 2, plVar1 < param_1[1]) {
      if (*plVar1 != 0) {
        return *plVar1;
      }
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



long FUN_0010df40(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_0010d950();
  lVar1 = *plVar3;
  plVar2 = (long *)plVar3[1];
  while (lVar1 != param_2) {
    if (plVar2 == (long *)0x0) goto LAB_0010df7e;
    lVar1 = *plVar2;
    plVar2 = (long *)plVar2[1];
  }
  if (plVar2 != (long *)0x0) {
    return *plVar2;
  }
LAB_0010df7e:
  do {
    plVar3 = plVar3 + 2;
    if (*(long **)(param_1 + 8) <= plVar3) {
      return 0;
    }
  } while (*plVar3 == 0);
  return *plVar3;
}



ulong FUN_0010dfc0(long **param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *param_1;
  if (param_1[1] < plVar3 || param_1[1] == plVar3) {
    return 0;
  }
  uVar2 = 0;
  do {
    if (*plVar3 != 0) {
      if (param_3 <= uVar2) {
        return uVar2;
      }
      *(long *)(param_2 + uVar2 * 8) = *plVar3;
      puVar1 = (undefined8 *)plVar3[1];
      uVar2 = uVar2 + 1;
      while (puVar1 != (undefined8 *)0x0) {
        if (param_3 == uVar2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        *(undefined8 *)(param_2 + -8 + uVar2 * 8) = *puVar1;
        puVar1 = (undefined8 *)puVar1[1];
      }
    }
    plVar3 = plVar3 + 2;
  } while (plVar3 <= param_1[1] && param_1[1] != plVar3);
  return uVar2;
}



long FUN_0010e030(long **param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *param_1;
  if (param_1[1] < plVar5 || param_1[1] == plVar5) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar4 = *plVar5;
      plVar2 = plVar5;
      if (lVar4 != 0) {
        while( true ) {
          cVar1 = (*param_2)(lVar4,param_3);
          if (cVar1 == '\0') {
            return lVar3;
          }
          plVar2 = (long *)plVar2[1];
          lVar3 = lVar3 + 1;
          if (plVar2 == (long *)0x0) break;
          lVar4 = *plVar2;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
  return lVar3;
}



ulong FUN_0010e0a0(byte *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  bVar1 = *param_1;
  uVar3 = 0;
  while (bVar1 != 0) {
    uVar2 = (ulong)bVar1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    uVar3 = (uVar3 * 0x1f + uVar2) % param_2;
  }
  return uVar3;
}



void FUN_0010e0e0(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}



void ** FUN_0010e100(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0010d930;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0010d940;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0;
  }
  if (param_2 == (void *)0x0) {
    *(undefined **)(__ptr + 5) = &DAT_0011a3c0;
    cVar1 = FUN_0010daa0(__ptr + 5);
    fVar4 = 0.80000001;
    if (cVar1 == '\0') goto LAB_0010e1f0;
    if ((long)param_1 < 0) goto LAB_0010e27b;
LAB_0010e231:
    fVar3 = (float)param_1;
LAB_0010e23a:
    fVar3 = fVar3 / fVar4;
    if (18446744073709551616.00000000 <= fVar3) goto LAB_0010e1f0;
    if (fVar3 < 9223372036854775808.00000000) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - 9223372036854775808.00000000) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0010daa0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0010e1f0;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0010e231;
LAB_0010e27b:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0010e23a;
    }
  }
  __nmemb = (void *)FUN_0010d890(param_1);
  if ((SUB168(ZEXT816(8) * ZEXT816(__nmemb) >> 0x40,0) == 0) &&
     (__ptr[2] = __nmemb, __nmemb != (void *)0x0)) {
    pvVar2 = calloc((size_t)__nmemb,0x10);
    *__ptr = pvVar2;
    if (pvVar2 != (void *)0x0) {
      __ptr[3] = (void *)0x0;
      __ptr[4] = (void *)0x0;
      *(code **)(__ptr + 6) = param_3;
      *(code **)(__ptr + 7) = param_4;
      __ptr[1] = (void *)((long)__nmemb * 0x10 + (long)pvVar2);
      __ptr[8] = param_5;
      __ptr[9] = (void *)0x0;
      return __ptr;
    }
  }
LAB_0010e1f0:
  free(__ptr);
  return (void **)0;
}



void FUN_0010e2c0(long **param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *param_1;
  if (plVar5 < param_1[1]) {
    do {
      if (*plVar5 != 0) {
        plVar4 = param_1[8];
        plVar3 = (long *)plVar5[1];
        while (plVar3 != (long *)0x0) {
          if (plVar4 != (long *)0x0) {
            (*(code *)plVar4)(*plVar3);
            plVar4 = param_1[8];
          }
          plVar1 = (long *)plVar3[1];
          plVar2 = param_1[9];
          *plVar3 = 0;
          *(long **)(plVar3 + 1) = plVar2;
          param_1[9] = plVar3;
          plVar3 = plVar1;
        }
        if (plVar4 != (long *)0x0) {
          (*(code *)plVar4)(*plVar5);
        }
        *plVar5 = 0;
        plVar5[1] = 0;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}



void FUN_0010e350(long **param_1)

{
  void *pvVar1;
  void *__ptr;
  long *plVar2;
  long *plVar3;
  long *__ptr_00;
  long lVar4;
  
  __ptr_00 = *param_1;
  plVar2 = param_1[1];
  if ((param_1[8] != (long *)0x0) && (param_1[4] != (long *)0x0)) {
    if (plVar2 <= __ptr_00) goto LAB_0010e3ec;
    do {
      lVar4 = *__ptr_00;
      plVar3 = __ptr_00;
      if (lVar4 != 0) {
        while( true ) {
          (*(code *)param_1[8])(lVar4);
          plVar3 = (long *)plVar3[1];
          if (plVar3 == (long *)0x0) break;
          lVar4 = *plVar3;
        }
        plVar2 = param_1[1];
      }
      __ptr_00 = __ptr_00 + 2;
    } while (__ptr_00 < plVar2);
    __ptr_00 = *param_1;
  }
  if (__ptr_00 < plVar2) {
    do {
      __ptr = (void *)__ptr_00[1];
      while (__ptr != (void *)0x0) {
        pvVar1 = *(void **)((long)__ptr + 8);
        free(__ptr);
        __ptr = pvVar1;
      }
      __ptr_00 = __ptr_00 + 2;
    } while (__ptr_00 <= param_1[1] && param_1[1] != __ptr_00);
  }
LAB_0010e3ec:
  __ptr_00 = param_1[9];
  while (__ptr_00 != (long *)0x0) {
    plVar2 = (long *)__ptr_00[1];
    free(__ptr_00);
    __ptr_00 = plVar2;
  }
  free(*param_1);
  free(param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x0010e4ce)

ulong FUN_0010e430(void **param_1,ulong param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  void *__nmemb;
  ulong uVar4;
  long in_FS_OFFSET;
  float fVar5;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  void *local_48;
  void *local_40;
  void *local_38;
  void *local_30;
  long local_20;
  
  pvVar1 = param_1[5];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long)pvVar1 + 0x10) == '\0') {
    if ((long)param_2 < 0) {
      fVar5 = (float)(param_2 >> 1 | (ulong)((uint)param_2 & 1));
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)param_2;
    }
    fVar5 = fVar5 / *(float *)((long)pvVar1 + 8);
    if (fVar5 < 18446744073709551616.00000000) {
      if (fVar5 < 9223372036854775808.00000000) {
        param_2 = (ulong)fVar5;
      }
      else {
        param_2 = (long)(fVar5 - 9223372036854775808.00000000) ^ 0x8000000000000000;
      }
      goto LAB_0010e4a8;
    }
  }
  else {
LAB_0010e4a8:
    __nmemb = (void *)FUN_0010d890(param_2,param_2);
    if ((__nmemb != (void *)0x0) && (SUB168(ZEXT816(8) * ZEXT816(__nmemb) >> 0x40,0) == 0)) {
      if (param_1[2] == __nmemb) {
        uVar4 = 1;
        goto LAB_0010e5b2;
      }
      local_78 = calloc((size_t)__nmemb,0x10);
      if (local_78 != (void *)0x0) {
        local_70 = (void *)((long)__nmemb * 0x10 + (long)local_78);
        local_48 = param_1[6];
        local_60 = (void *)0x0;
        local_40 = param_1[7];
        local_58 = 0;
        local_38 = param_1[8];
        local_30 = param_1[9];
        local_68 = __nmemb;
        local_50 = pvVar1;
        uVar3 = FUN_0010db20(&local_78,param_1,0);
        uVar4 = (ulong)uVar3;
        if ((char)uVar3 == '\0') {
          param_1[9] = local_30;
          cVar2 = FUN_0010db20(param_1,&local_78,1);
          if ((cVar2 == '\0') || (cVar2 = FUN_0010db20(param_1,&local_78,0), cVar2 == '\0')) {
                    // WARNING: Subroutine does not return
            abort();
          }
          free(local_78);
        }
        else {
          free(*param_1);
          *param_1 = local_78;
          param_1[1] = local_70;
          param_1[2] = local_68;
          param_1[3] = local_60;
          param_1[9] = local_30;
        }
        goto LAB_0010e5b2;
      }
    }
  }
  uVar4 = 0;
LAB_0010e5b2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 FUN_0010e670(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 uVar8;
  undefined auVar9 [12];
  float fVar10;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0010e84d;
  lVar2 = FUN_0010d980(param_1,param_2,&local_38,0);
  if (lVar2 != 0) {
    uVar4 = 0;
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2;
    }
    goto LAB_0010e6bc;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar6 < 0) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
    lVar2 = *(long *)(param_1 + 0x28);
    uVar4 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar7 + fVar7),0);
    if ((long)uVar5 < 0) goto LAB_0010e78a;
LAB_0010e703:
    fVar7 = (float)uVar5;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar4 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar6),0);
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar5) goto LAB_0010e703;
LAB_0010e78a:
    fVar7 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
    fVar7 = fVar7 + fVar7;
  }
  fVar7 = fVar7 * *(float *)(lVar2 + 8);
  if (fVar7 < (float)uVar4) {
    FUN_0010daa0(SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar7),0),uVar4,
                 param_1 + 0x28);
    uVar6 = *(ulong *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x28);
    if ((long)uVar6 < 0) {
      fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
      fVar7 = fVar7 + fVar7;
    }
    else {
      fVar7 = (float)uVar6;
    }
    auVar9 = SUB1612((undefined  [16])0x0 >> 0x20,0);
    uVar6 = *(ulong *)(param_1 + 0x18);
    if ((long)uVar6 < 0) {
      fVar10 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
      uVar4 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar10 + fVar10),0);
    }
    else {
      uVar4 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar6),0);
    }
    if ((float)uVar4 <= *(float *)(lVar2 + 8) * fVar7) goto LAB_0010e71a;
    fVar7 = fVar7 * *(float *)(lVar2 + 0xc);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      fVar7 = fVar7 * *(float *)(lVar2 + 8);
    }
    uVar8 = SUB168(CONCAT124(auVar9,fVar7),0);
    if (fVar7 < 18446744073709551616.00000000) {
      if (9223372036854775808.00000000 <= fVar7) {
        uVar8 = SUB168(CONCAT124(auVar9,fVar7 - 9223372036854775808.00000000),0);
        uVar6 = (long)(fVar7 - 9223372036854775808.00000000) ^ 0x8000000000000000;
      }
      else {
        uVar6 = (ulong)fVar7;
      }
      cVar1 = FUN_0010e430(uVar8,uVar4,param_1,uVar6);
      if (cVar1 != '\0') {
        lVar2 = FUN_0010d980(param_1,param_2,&local_38,0);
        if (lVar2 != 0) {
LAB_0010e84d:
                    // WARNING: Subroutine does not return
          abort();
        }
        goto LAB_0010e71a;
      }
    }
LAB_0010e883:
    uVar4 = 0xffffffff;
  }
  else {
LAB_0010e71a:
    if (*local_38 == 0) {
      *local_38 = param_2;
      uVar4 = 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      goto LAB_0010e6bc;
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)malloc(0x10);
      if (plVar3 == (long *)0x0) goto LAB_0010e883;
    }
    else {
      *(long *)(param_1 + 0x48) = plVar3[1];
    }
    lVar2 = local_38[1];
    *plVar3 = param_2;
    plVar3[1] = lVar2;
    *(long **)(local_38 + 1) = plVar3;
    uVar4 = 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
LAB_0010e6bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 FUN_0010e900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0010e670(param_1,param_2,&local_18);
  if (iVar1 == -1) {
    param_2 = 0;
  }
  else {
    if (iVar1 == 0) {
      param_2 = local_18;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long FUN_0010e960(long param_1,undefined8 param_2)

{
  float *pfVar1;
  void *pvVar2;
  void *__ptr;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [12];
  float fVar9;
  float fVar10;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_0010d980(param_1,param_2,&local_28,1);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1, *local_28 == 0))
  {
    uVar5 = *(long *)(param_1 + 0x18) - 1;
    *(ulong *)(param_1 + 0x18) = uVar5;
    if ((long)uVar5 < 0) {
      fVar9 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
      uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar9 + fVar9),0);
    }
    else {
      uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar5),0);
    }
    uVar5 = *(ulong *)(param_1 + 0x10);
    if ((long)uVar5 < 0) {
      fVar9 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = (float)uVar5;
    }
    fVar9 = fVar9 * **(float **)(param_1 + 0x28);
    if ((float)uVar6 < fVar9) {
      FUN_0010daa0(uVar6,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar9),0),
                   param_1 + 0x28);
      uVar5 = *(ulong *)(param_1 + 0x10);
      pfVar1 = *(float **)(param_1 + 0x28);
      if ((long)uVar5 < 0) {
        fVar9 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
        fVar9 = fVar9 + fVar9;
      }
      else {
        fVar9 = (float)uVar5;
      }
      auVar8 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar5 = *(ulong *)(param_1 + 0x18);
      if ((long)uVar5 < 0) {
        fVar10 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
        uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar10 + fVar10),0);
      }
      else {
        uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar5),0);
      }
      if ((float)uVar6 < *pfVar1 * fVar9) {
        fVar9 = fVar9 * pfVar1[1];
        if (*(char *)(pfVar1 + 4) == '\0') {
          fVar9 = fVar9 * pfVar1[2];
        }
        uVar7 = SUB168(CONCAT124(auVar8,fVar9),0);
        if (9223372036854775808.00000000 <= fVar9) {
          uVar7 = SUB168(CONCAT124(auVar8,fVar9 - 9223372036854775808.00000000),0);
          uVar5 = (long)(fVar9 - 9223372036854775808.00000000) ^ 0x8000000000000000;
        }
        else {
          uVar5 = (ulong)fVar9;
        }
        cVar3 = FUN_0010e430(uVar7,uVar6,param_1,uVar5);
        if (cVar3 == '\0') {
          __ptr = *(void **)(param_1 + 0x48);
          while (__ptr != (void *)0x0) {
            pvVar2 = *(void **)((long)__ptr + 8);
            free(__ptr);
            __ptr = pvVar2;
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar4;
}



ulong FUN_0010eb70(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00115d10(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}



ulong FUN_0010eba0(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}



undefined8 FUN_0010ebb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_00113d00(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}



ulong FUN_0010ebe0(char **param_1,char **param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}



void FUN_0010ec20(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x0010ec98)

void FUN_0010ec40(int param_1)

{
  ulong uVar1;
  float10 fVar2;
  float10 param_7;
  
  if ((float10)9223372036854775808.00000000 <= param_7) {
    uVar1 = (long)ROUND(param_7 - (float10)9223372036854775808.00000000) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(param_7);
  }
  fVar2 = (float10)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float10)18446744073709551616.00000000;
  }
  if (((param_1 == 0) && (param_7 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}



undefined8 * FUN_0010ed10(ulong param_1,char *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint uVar4;
  uint uVar5;
  lconv *plVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *__s;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  char cVar21;
  undefined8 *__n_00;
  char *__s_00;
  uint uVar22;
  undefined8 *__dest;
  byte *pbVar23;
  long in_FS_OFFSET;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  undefined8 *local_c0;
  undefined local_78 [56];
  long local_40;
  
  uVar22 = (uint)param_3 & 3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (-(uint)((param_3 & 0x20) == 0) & 0xffffffe8) + 0x400;
  plVar6 = localeconv();
  __s = (undefined8 *)plVar6->decimal_point;
  uVar7 = strlen((char *)__s);
  pbVar23 = (byte *)plVar6->grouping;
  __s_00 = plVar6->thousands_sep;
  if (0xf < uVar7 - 1) {
    uVar7 = 1;
    __s = (undefined8 *)&DAT_0011a33d;
  }
  __n = strlen(__s_00);
  if (0x10 < __n) {
    __s_00 = "";
  }
  local_c0 = (undefined8 *)(param_2 + 0x287);
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar3 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        uVar14 = SUB168(ZEXT816(param_1) / (auVar3 & (undefined  [16])0xffffffffffffffff),0);
        auVar2 = ZEXT816((ulong)(SUB168(ZEXT816(param_1) %
                                        (auVar3 & (undefined  [16])0xffffffffffffffff),0) * 10));
        uVar18 = SUB168(auVar2 % (auVar3 & (undefined  [16])0xffffffffffffffff),0) * 2;
        uVar8 = (ulong)SUB164(auVar2 / (auVar3 & (undefined  [16])0xffffffffffffffff),0);
        if (uVar18 < SUB168(auVar3,0)) {
          uVar18 = (ulong)(uVar18 != 0);
        }
        else {
          uVar18 = (ulong)((uint)(SUB168(auVar3,0) < uVar18) + 2);
        }
        goto LAB_0010ef79;
      }
    }
LAB_0010edf5:
    fVar24 = (float10)param_4;
    if ((long)param_4 < 0) {
      fVar24 = fVar24 + (float10)18446744073709551616.00000000;
    }
    fVar25 = (float10)param_5;
    if ((long)param_5 < 0) {
      fVar25 = fVar25 + (float10)18446744073709551616.00000000;
    }
    fVar26 = (float10)param_1;
    if ((long)param_1 < 0) {
      fVar26 = fVar26 + (float10)18446744073709551616.00000000;
    }
    fVar26 = fVar26 * (fVar24 / fVar25);
    if ((param_3 & 0x10) == 0) {
      if ((uVar22 != 1) && (fVar26 < FLOAT_UNKNOWN)) {
        FUN_0010ec40((ulong)uVar22);
      }
      lVar12 = 0;
      __sprintf_chk(param_2,1,0xffffffffffffffff);
      uVar10 = 0xffffffff;
      __n = strlen(param_2);
    }
    else {
      uVar10 = 0;
      fVar24 = (float10)uVar4;
      do {
        fVar25 = fVar24;
        uVar10 = uVar10 + 1;
        fVar24 = fVar25 * (float10)uVar4;
        if (fVar26 < fVar24) break;
      } while (uVar10 != 8);
      lVar12 = uVar7 + 1;
      fVar26 = fVar26 / fVar25;
      uVar7 = uVar7 + 2 + (ulong)((param_3 & 0x20) == 0);
      if (uVar22 == 1) {
        __sprintf_chk(param_2,1,0xffffffffffffffff);
        __n = strlen(param_2);
        if (__n <= uVar7) goto LAB_0010eef2;
      }
      else {
        if (fVar26 < FLOAT_UNKNOWN) {
          FUN_0010ec40((ulong)uVar22);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar7) {
LAB_0010eef2:
          if (((param_3 & 8) == 0) || (param_2[__n - 1] != '0')) goto LAB_0010f070;
          if (uVar22 == 1) goto LAB_0010f453;
        }
        if (fVar26 * (float10)10.00000000 < FLOAT_UNKNOWN) {
          FUN_0010ec40((ulong)uVar22);
        }
      }
LAB_0010f453:
      lVar12 = 0;
      __sprintf_chk(param_2,1,0xffffffffffffffff);
      __n = strlen(param_2);
    }
LAB_0010f070:
    __dest = (undefined8 *)((long)local_c0 - __n);
    memmove(__dest,param_2,__n);
    puVar20 = (undefined8 *)((__n - lVar12) + (long)__dest);
  }
  else {
    if ((param_4 % param_5 != 0) ||
       (uVar14 = param_1 * SUB168(ZEXT816(param_4) / ZEXT816(param_5),0),
       SUB168(ZEXT816(uVar14) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined  [16])0xffffffffffffffff),0) !=
       param_1)) goto LAB_0010edf5;
    uVar18 = 0;
    uVar8 = 0;
LAB_0010ef79:
    uVar5 = (uint)uVar8;
    iVar15 = (int)uVar18;
    uVar10 = 0xffffffff;
    uVar11 = (uint)uVar7;
    puVar20 = local_c0;
    if ((param_3 & 0x10) != 0) {
      uVar19 = (ulong)uVar4;
      if (uVar14 < uVar19) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        uVar13 = uVar14;
        while( true ) {
          uVar14 = uVar13 / uVar19;
          uVar5 = (int)uVar8 + (int)(uVar13 % uVar19) * 10;
          uVar8 = uVar5 / uVar19;
          uVar17 = ((int)uVar18 >> 1) + (uVar5 % uVar4) * 2;
          uVar5 = (uint)uVar8;
          cVar21 = (char)uVar8;
          uVar16 = (int)uVar18 + uVar17;
          if (uVar17 < uVar4) {
            uVar18 = (ulong)(uVar16 != 0);
          }
          else {
            uVar18 = (ulong)((uint)(uVar4 < uVar16) + 2);
          }
          iVar15 = (int)uVar18;
          uVar10 = uVar10 + 1;
          if (uVar14 < uVar19) break;
          uVar13 = uVar14;
          if (uVar10 == 8) goto LAB_0010f350;
        }
        if (9 < uVar14) goto LAB_0010f350;
        if (uVar22 == 1) {
          bVar9 = 2 < (uVar5 & 1) + iVar15;
        }
        else {
          bVar9 = (param_3 & 3) == 0 && iVar15 != 0;
        }
        if (bVar9) {
          cVar21 = (char)(uVar5 + 1);
          if (uVar5 + 1 != 10) goto LAB_0010f306;
          uVar14 = uVar14 + 1;
          if (uVar14 == 10) goto LAB_0010f347;
          iVar15 = 0;
LAB_0010f581:
          if ((param_3 & 8) != 0) {
            uVar5 = 0;
            goto LAB_0010f350;
          }
          cVar21 = '0';
        }
        else {
          if (uVar5 == 0) goto LAB_0010f581;
LAB_0010f306:
          cVar21 = cVar21 + '0';
        }
        param_2[0x286] = cVar21;
        uVar8 = uVar7 & 0xffffffff;
        puVar20 = (undefined8 *)(param_2 + (0x286 - uVar7));
        if (uVar11 < 8) {
          if ((uVar7 & 4) == 0) {
            if (((int)uVar8 != 0) && (*(undefined *)puVar20 = *(undefined *)__s, (uVar7 & 2) != 0))
            {
              *(undefined2 *)((long)puVar20 + (uVar8 - 2)) =
                   *(undefined2 *)((long)__s + (uVar8 - 2));
            }
          }
          else {
            *(undefined4 *)puVar20 = *(undefined4 *)__s;
            *(undefined4 *)((long)puVar20 + (uVar8 - 4)) = *(undefined4 *)((long)__s + (uVar8 - 4));
          }
        }
        else {
          *puVar20 = *__s;
          *(undefined8 *)((long)puVar20 + ((uVar7 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)__s + ((uVar7 & 0xffffffff) - 8));
          __dest = (undefined8 *)((long)puVar20 - ((ulong)(puVar20 + 1) & 0xfffffffffffffff8));
          uVar5 = (int)__dest + uVar11 & 0xfffffff8;
          if (7 < uVar5) {
            uVar17 = 0;
            do {
              uVar8 = (ulong)uVar17;
              uVar17 = uVar17 + 8;
              *(undefined8 *)(((ulong)(puVar20 + 1) & 0xfffffffffffffff8) + uVar8) =
                   *(undefined8 *)((long)__s + (uVar8 - (long)__dest));
            } while (uVar17 < uVar5);
          }
        }
LAB_0010f347:
        iVar15 = 0;
        uVar5 = 0;
      }
    }
LAB_0010f350:
    __dest = puVar20;
    if (uVar22 == 1) {
      if (5 < (int)(uVar5 + (((uint)uVar14 & 1) + iVar15 != 0))) goto LAB_0010f366;
LAB_0010f390:
      do {
        __dest = (undefined8 *)((long)__dest + -1);
        uVar7 = uVar14 / 10;
        *(char *)__dest = (char)uVar14 + (char)uVar7 * -10 + '0';
        uVar14 = uVar7;
      } while (uVar7 != 0);
    }
    else {
      if (((param_3 & 3) != 0) || ((int)(iVar15 + uVar5) < 1)) goto LAB_0010f390;
LAB_0010f366:
      uVar14 = uVar14 + 1;
      if (((param_3 & 0x10) == 0) || (((ulong)uVar4 != uVar14 || (uVar10 == 8)))) goto LAB_0010f390;
      uVar10 = uVar10 + 1;
      if ((param_3 & 8) == 0) {
        *(undefined *)((long)puVar20 + -1) = 0x30;
        puVar20 = (undefined8 *)((long)puVar20 + ~uVar7);
        uVar14 = uVar7 & 0xffffffff;
        if (uVar11 < 8) {
          if ((uVar7 & 4) == 0) {
            if (((int)uVar14 != 0) && (*(undefined *)puVar20 = *(undefined *)__s, (uVar7 & 2) != 0))
            {
              *(undefined2 *)((long)puVar20 + (uVar14 - 2)) =
                   *(undefined2 *)((long)__s + (uVar14 - 2));
            }
          }
          else {
            *(undefined4 *)puVar20 = *(undefined4 *)__s;
            *(undefined4 *)((long)puVar20 + (uVar14 - 4)) =
                 *(undefined4 *)((long)__s + (uVar14 - 4));
          }
        }
        else {
          *puVar20 = *__s;
          *(undefined8 *)((long)puVar20 + ((uVar7 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)__s + ((uVar7 & 0xffffffff) - 8));
          __dest = (undefined8 *)((long)puVar20 - ((ulong)(puVar20 + 1) & 0xfffffffffffffff8));
          uVar22 = (int)__dest + uVar11 & 0xfffffff8;
          if (7 < uVar22) {
            uVar5 = 0;
            do {
              uVar7 = (ulong)uVar5;
              uVar5 = uVar5 + 8;
              *(undefined8 *)(((ulong)(puVar20 + 1) & 0xfffffffffffffff8) + uVar7) =
                   *(undefined8 *)((long)__s + (uVar7 - (long)__dest));
            } while (uVar5 < uVar22);
          }
        }
      }
      __dest = (undefined8 *)((long)puVar20 + -1);
      *(undefined *)((long)puVar20 + -1) = 0x31;
    }
  }
  if ((param_3 & 4) != 0) {
    __n_00 = (undefined8 *)((long)puVar20 - (long)__dest);
    __s = (undefined8 *)0xffffffffffffffff;
    __n = strlen(__s_00);
    __memcpy_chk(local_78,__dest,__n_00);
    while( true ) {
      bVar1 = *pbVar23;
      if (bVar1 != 0) {
        __s = (undefined8 *)(ulong)bVar1;
        if (0x7e < bVar1) {
          __s = __n_00;
        }
        pbVar23 = pbVar23 + 1;
      }
      if (__n_00 < __s) break;
      __n_00 = (undefined8 *)((long)__n_00 - (long)__s);
      __dest = (undefined8 *)
               memcpy((undefined8 *)((long)puVar20 - (long)__s),local_78 + (long)__n_00,(size_t)__s)
      ;
      if (__n_00 == (undefined8 *)0x0) goto LAB_0010f09a;
      puVar20 = (undefined8 *)memcpy((undefined8 *)((long)__dest - __n),__s_00,__n);
    }
    __dest = (undefined8 *)((long)puVar20 - (long)__n_00);
    memcpy(__dest,local_78,(size_t)__n_00);
  }
LAB_0010f09a:
  if ((param_3 & 0x80) == 0) goto LAB_0010f117;
  if (uVar10 == 0xffffffff) {
    if (param_5 < 2) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
      uVar7 = 1;
      do {
        uVar7 = uVar7 * uVar4;
        if (param_5 <= uVar7) break;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 8);
    }
  }
  if (((uint)param_3 & 0x100 | uVar10) == 0) goto LAB_0010f117;
  if ((param_3 & 0x40) != 0) {
    local_c0 = (undefined8 *)(param_2 + 0x288);
    param_2[0x287] = ' ';
  }
  if (uVar10 == 0) {
    __s = local_c0;
    if ((param_3 & 0x100) == 0) goto LAB_0010f117;
  }
  else {
    if ((uVar10 == 1) && ((param_3 & 0x20) == 0)) {
      *(undefined *)local_c0 = 0x6b;
      __s = (undefined8 *)((long)local_c0 + 1);
      if ((param_3 & 0x100) == 0) {
LAB_0010f534:
        local_c0 = (undefined8 *)((long)local_c0 + 1);
        goto LAB_0010f117;
      }
    }
    else {
      *(undefined *)local_c0 = (&DAT_0011a440)[(int)uVar10];
      if ((param_3 & 0x100) == 0) goto LAB_0010f534;
      __s = (undefined8 *)((long)local_c0 + 1);
      if ((param_3 & 0x20) != 0) {
        *(undefined *)((long)local_c0 + 1) = 0x69;
        __s = (undefined8 *)((long)local_c0 + 2);
      }
    }
  }
  local_c0 = (undefined8 *)((long)__s + 1);
  *(undefined *)__s = 0x42;
LAB_0010f117:
  lVar12 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined *)local_c0 = 0;
  if (local_40 == lVar12) {
    return __dest;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 FUN_0010f720(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar4 = getenv("POSIXLY_CORRECT");
    if (pcVar4 == (char *)0x0) {
      *param_3 = 0x400;
      uVar3 = 0;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      uVar3 = 0;
      *param_2 = 0;
    }
  }
  else {
    uVar6 = 0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar6 = 4;
    }
    iVar2 = FUN_0010c2c0(param_1,&PTR_s_human_readable_0031f9b0,&DAT_0011a438,4);
    if (iVar2 < 0) {
      uVar3 = FUN_00114e20(param_1,&local_38,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if ((int)uVar3 == 0) {
        cVar1 = *param_1;
        while (9 < (byte)(cVar1 - 0x30U)) {
          if (param_1 == local_38) {
            if (local_38[-1] == 'B') {
              uVar6 = uVar6 | 0x180;
              if (local_38[-2] != 'i') break;
            }
            else {
              uVar6 = uVar6 | 0x80;
            }
            uVar6 = uVar6 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          cVar1 = *param_1;
        }
        lVar5 = *param_3;
        *param_2 = uVar6;
      }
      else {
        lVar5 = *param_3;
        *param_2 = 0;
      }
      if (lVar5 == 0) {
        pcVar4 = getenv("POSIXLY_CORRECT");
        *param_3 = (ulong)(-(uint)(pcVar4 == (char *)0x0) & 0x200) + 0x200;
        uVar3 = 4;
      }
    }
    else {
      *param_3 = 1;
      uVar3 = 0;
      *param_2 = uVar6 | *(uint *)(&DAT_0011a438 + (long)iVar2 * 4);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



__uid_t * FUN_0010f910(__uid_t param_1)

{
  __uid_t _Var1;
  __uid_t *p_Var2;
  passwd *ppVar3;
  size_t sVar4;
  __uid_t *p_Var5;
  ulong uVar6;
  char *__s;
  
  if (DAT_003213f8 == (__uid_t *)0x0) {
LAB_0010f93d:
    __s = "";
    ppVar3 = getpwuid(param_1);
    uVar6 = 0x18;
    if (ppVar3 != (passwd *)0x0) {
      __s = ppVar3->pw_name;
      sVar4 = strlen(__s);
      uVar6 = sVar4 + 0x18 & 0xfffffffffffffff8;
    }
    p_Var5 = (__uid_t *)FUN_00114480(uVar6);
    *p_Var5 = param_1;
    strcpy((char *)(p_Var5 + 4),__s);
    p_Var2 = p_Var5;
    *(__uid_t **)(p_Var5 + 2) = DAT_003213f8;
    DAT_003213f8 = p_Var2;
  }
  else {
    _Var1 = *DAT_003213f8;
    p_Var5 = DAT_003213f8;
    while (param_1 != _Var1) {
      p_Var5 = *(__uid_t **)(p_Var5 + 2);
      if (p_Var5 == (__uid_t *)0x0) goto LAB_0010f93d;
      _Var1 = *p_Var5;
    }
  }
  if (*(char *)(p_Var5 + 4) == '\0') {
    p_Var5 = (__uid_t *)0x0;
  }
  else {
    p_Var5 = p_Var5 + 4;
  }
  return p_Var5;
}



__uid_t * FUN_0010f9b0(char *param_1)

{
  char cVar1;
  __uid_t *p_Var2;
  int iVar3;
  passwd *ppVar4;
  size_t sVar5;
  __uid_t *p_Var6;
  
  if (DAT_003213f8 != (__uid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = DAT_003213f8;
    do {
      if ((*(char *)(p_Var6 + 4) == cVar1) &&
         (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0)) {
        return p_Var6;
      }
      p_Var6 = *(__uid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__uid_t *)0x0);
  }
  if (DAT_003213f0 != (__uid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = DAT_003213f0;
    do {
      if ((*(char *)(p_Var6 + 4) == cVar1) &&
         (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0)) {
        return (__uid_t *)0;
      }
      p_Var6 = *(__uid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__uid_t *)0x0);
  }
  ppVar4 = getpwnam(param_1);
  sVar5 = strlen(param_1);
  p_Var6 = (__uid_t *)FUN_00114480(sVar5 + 0x18 & 0xfffffffffffffff8);
  strcpy((char *)(p_Var6 + 4),param_1);
  if (ppVar4 == (passwd *)0x0) {
    *(__uid_t **)(p_Var6 + 2) = DAT_003213f0;
    DAT_003213f0 = p_Var6;
    p_Var6 = (__uid_t *)0x0;
  }
  else {
    *p_Var6 = ppVar4->pw_uid;
    p_Var2 = p_Var6;
    *(__uid_t **)(p_Var6 + 2) = DAT_003213f8;
    DAT_003213f8 = p_Var2;
  }
  return p_Var6;
}



__gid_t * FUN_0010fab0(__gid_t param_1)

{
  __gid_t _Var1;
  __gid_t *p_Var2;
  group *pgVar3;
  size_t sVar4;
  __gid_t *p_Var5;
  ulong uVar6;
  char *__s;
  
  if (DAT_003213e8 == (__gid_t *)0x0) {
LAB_0010fadd:
    __s = "";
    pgVar3 = getgrgid(param_1);
    uVar6 = 0x18;
    if (pgVar3 != (group *)0x0) {
      __s = pgVar3->gr_name;
      sVar4 = strlen(__s);
      uVar6 = sVar4 + 0x18 & 0xfffffffffffffff8;
    }
    p_Var5 = (__gid_t *)FUN_00114480(uVar6);
    *p_Var5 = param_1;
    strcpy((char *)(p_Var5 + 4),__s);
    p_Var2 = p_Var5;
    *(__gid_t **)(p_Var5 + 2) = DAT_003213e8;
    DAT_003213e8 = p_Var2;
  }
  else {
    _Var1 = *DAT_003213e8;
    p_Var5 = DAT_003213e8;
    while (param_1 != _Var1) {
      p_Var5 = *(__gid_t **)(p_Var5 + 2);
      if (p_Var5 == (__gid_t *)0x0) goto LAB_0010fadd;
      _Var1 = *p_Var5;
    }
  }
  if (*(char *)(p_Var5 + 4) == '\0') {
    p_Var5 = (__gid_t *)0x0;
  }
  else {
    p_Var5 = p_Var5 + 4;
  }
  return p_Var5;
}



__gid_t * FUN_0010fb50(char *param_1)

{
  char cVar1;
  __gid_t *p_Var2;
  int iVar3;
  group *pgVar4;
  size_t sVar5;
  __gid_t *p_Var6;
  
  if (DAT_003213e8 != (__gid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = DAT_003213e8;
    do {
      if ((*(char *)(p_Var6 + 4) == cVar1) &&
         (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0)) {
        return p_Var6;
      }
      p_Var6 = *(__gid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__gid_t *)0x0);
  }
  if (DAT_003213e0 != (__gid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = DAT_003213e0;
    do {
      if ((*(char *)(p_Var6 + 4) == cVar1) &&
         (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0)) {
        return (__gid_t *)0;
      }
      p_Var6 = *(__gid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__gid_t *)0x0);
  }
  pgVar4 = getgrnam(param_1);
  sVar5 = strlen(param_1);
  p_Var6 = (__gid_t *)FUN_00114480(sVar5 + 0x18 & 0xfffffffffffffff8);
  strcpy((char *)(p_Var6 + 4),param_1);
  if (pgVar4 == (group *)0x0) {
    *(__gid_t **)(p_Var6 + 2) = DAT_003213e0;
    DAT_003213e0 = p_Var6;
    p_Var6 = (__gid_t *)0x0;
  }
  else {
    *p_Var6 = pgVar4->gr_gid;
    p_Var2 = p_Var6;
    *(__gid_t **)(p_Var6 + 2) = DAT_003213e8;
    DAT_003213e8 = p_Var2;
  }
  return p_Var6;
}



char * FUN_0010fc50(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  if ((long)param_1 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)param_1 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)param_1;
      pcVar1 = pcVar2 + -1;
      param_1 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return pcVar2 + -2;
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
    param_1 = uVar3;
  } while (uVar3 != 0);
  return pcVar1;
}



char * FUN_0010fcf0(ulong param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  do {
    pcVar1 = pcVar1 + -1;
    uVar2 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar2 * -10 + '0';
    param_1 = uVar2;
  } while (uVar2 != 0);
  return pcVar1;
}



undefined *
FUN_0010fd40(char *param_1,undefined *param_2,long param_3,undefined8 *param_4,int param_5,
            uint param_6)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  size_t sVar6;
  undefined *__n_00;
  undefined *puVar7;
  wint_t *pwVar8;
  long lVar9;
  wint_t __wc;
  undefined *puVar10;
  undefined *puVar11;
  wint_t *local_68;
  char *local_60;
  undefined *local_48;
  
  __n_00 = (undefined *)strlen(param_1);
  puVar10 = __n_00;
  if (((param_6 & 2) == 0) && (sVar5 = __ctype_get_mb_cur_max(), 1 < sVar5)) {
    sVar5 = mbstowcs((wchar_t *)0x0,param_1,0);
    if (sVar5 == 0xffffffffffffffff) {
      if ((param_6 & 1) == 0) {
LAB_0010ff0a:
        local_68 = (wint_t *)0x0;
        local_60 = (char *)0x0;
        puVar10 = (undefined *)0xffffffffffffffff;
        goto LAB_0010fe71;
      }
      goto LAB_0010fd7a;
    }
    __n = sVar5 + 1;
    local_68 = (wint_t *)malloc(__n * 4);
    if (local_68 == (wint_t *)0x0) {
      local_60 = (char *)0x0;
      if ((param_6 & 1) == 0) goto LAB_0010ff0a;
      goto LAB_0010fd8e;
    }
    sVar6 = mbstowcs((wchar_t *)local_68,param_1,__n);
    if (sVar6 == 0) {
      local_60 = (char *)0x0;
      goto LAB_0010fd8e;
    }
    local_68[sVar5] = 0;
    __wc = *local_68;
    if (__wc != 0) {
      bVar1 = false;
      pwVar8 = local_68;
      do {
        iVar2 = iswprint(__wc);
        if (iVar2 == 0) {
          *pwVar8 = 0xfffd;
          bVar1 = true;
        }
        pwVar8 = pwVar8 + 1;
        __wc = *pwVar8;
      } while (__wc != 0);
      iVar2 = wcswidth((wchar_t *)local_68,__n);
      puVar10 = (undefined *)(long)iVar2;
      if (!bVar1) goto LAB_00110098;
      local_48 = (undefined *)wcstombs((char *)0x0,(wchar_t *)local_68,0);
LAB_0010fff0:
      local_48 = local_48 + 1;
      local_60 = (char *)malloc((size_t)local_48);
      if (local_60 == (char *)0x0) {
        if ((param_6 & 1) == 0) {
          puVar10 = (undefined *)0xffffffffffffffff;
          goto LAB_0010fe71;
        }
      }
      else {
        __n_00 = (undefined *)*param_4;
        __wc = *local_68;
        pwVar8 = local_68;
        if (__wc == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = (undefined *)0x0;
          do {
            iVar2 = wcwidth(__wc);
            lVar9 = (long)iVar2;
            if (iVar2 == -1) {
              *pwVar8 = 0xfffd;
              lVar9 = 1;
            }
            puVar4 = puVar10 + lVar9;
            if (__n_00 < puVar4) break;
            pwVar8 = pwVar8 + 1;
            __wc = *pwVar8;
            puVar10 = puVar4;
          } while (__wc != 0);
        }
        *pwVar8 = 0;
        __n_00 = (undefined *)wcstombs(local_60,(wchar_t *)local_68,(size_t)local_48);
        param_1 = local_60;
      }
      goto LAB_0010fd8e;
    }
    iVar2 = wcswidth((wchar_t *)local_68,__n);
    puVar10 = (undefined *)(long)iVar2;
LAB_00110098:
    puVar4 = (undefined *)*param_4;
    local_48 = __n_00;
    if (puVar4 < puVar10) goto LAB_0010fff0;
    local_60 = (char *)0x0;
LAB_0010fea9:
    puVar3 = __n_00;
    puVar7 = puVar10;
    if (puVar4 <= puVar10) goto LAB_0010fda0;
    puVar4 = puVar4 + -(long)puVar10;
    *(undefined **)param_4 = puVar10;
    if (param_5 != 0) goto LAB_0010fdb0;
LAB_0010fecb:
    __n_00 = (undefined *)0x0;
    puVar7 = puVar4;
  }
  else {
LAB_0010fd7a:
    local_68 = (wint_t *)0x0;
    local_60 = (char *)0x0;
LAB_0010fd8e:
    puVar4 = (undefined *)*param_4;
    puVar7 = puVar4;
    puVar3 = puVar4;
    if (puVar10 <= puVar4) goto LAB_0010fea9;
LAB_0010fda0:
    puVar4 = (undefined *)0x0;
    *(undefined **)param_4 = puVar7;
    if (param_5 == 0) goto LAB_0010fecb;
LAB_0010fdb0:
    __n_00 = puVar4;
    puVar7 = (undefined *)0x0;
    if (param_5 != 1) {
      __n_00 = (undefined *)((ulong)puVar4 >> 1) + ((uint)puVar4 & 1);
      puVar7 = (undefined *)((ulong)puVar4 >> 1);
    }
  }
  puVar10 = __n_00 + (long)puVar3;
  if ((param_6 & 4) != 0) {
    __n_00 = (undefined *)0x0;
    puVar10 = puVar3;
  }
  if ((param_6 & 8) == 0) {
    puVar10 = puVar10 + (long)puVar7;
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  if (param_3 != 0) {
    puVar4 = param_2 + param_3 + -1;
    if ((param_2 < puVar4) && (puVar11 = param_2, __n_00 != (undefined *)0x0)) {
      do {
        __n_00 = __n_00 + -1;
        param_2 = puVar11 + 1;
        *puVar11 = 0x20;
        puVar11 = param_2;
      } while (param_2 < puVar4 && __n_00 != (undefined *)0x0);
    }
    *param_2 = 0;
    __n_00 = puVar4 + -(long)param_2;
    if (puVar3 < puVar4 + -(long)param_2) {
      __n_00 = puVar3;
    }
    __n_00 = (undefined *)mempcpy(param_2,param_1,(size_t)__n_00);
    if ((__n_00 < puVar4) && (puVar3 = __n_00, puVar7 != (undefined *)0x0)) {
      do {
        puVar7 = puVar7 + -1;
        __n_00 = puVar3 + 1;
        *puVar3 = 0x20;
        puVar3 = __n_00;
      } while (puVar7 != (undefined *)0x0 && __n_00 < puVar4);
    }
    *__n_00 = 0;
  }
LAB_0010fe71:
  free(local_68);
  free(local_60);
  return puVar10;
}



void * FUN_00110110(undefined8 param_1,ulong *param_2,uint param_3,uint param_4)

{
  ulong __size;
  ulong uVar1;
  void *__ptr;
  ulong uVar2;
  void *__ptr_00;
  
  uVar1 = *param_2;
  uVar2 = uVar1;
  __ptr_00 = (void *)0x0;
  while( true ) {
    __size = uVar2 + 1;
    __ptr = realloc(__ptr_00,__size);
    if (__ptr == (void *)0x0) {
      free(__ptr_00);
      return (void *)0;
    }
    *param_2 = uVar1;
    uVar2 = FUN_0010fd40(param_1,__ptr,__size,param_2,(ulong)param_3,(ulong)param_4);
    if (uVar2 == 0xffffffffffffffff) break;
    __ptr_00 = __ptr;
    if (uVar2 < __size) {
      return __ptr;
    }
  }
  free(__ptr);
  return (void *)0;
}



ulong FUN_001101b0(byte *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  uint uVar8;
  long in_FS_OFFSET;
  wint_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  pbVar1 = param_1 + param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar4 = __ctype_get_mb_cur_max();
  if (sVar4 < 2) {
    uVar8 = 0;
    if (param_1 < pbVar1) {
      ppuVar6 = __ctype_b_loc();
      uVar8 = 0;
      do {
        pbVar7 = param_1 + 1;
        if (((*ppuVar6)[*param_1] & 0x4000) == 0) {
          if ((param_3 & 2) != 0) goto LAB_001102d8;
          if (((*ppuVar6)[*param_1] & 2) == 0) goto LAB_00110349;
        }
        else {
LAB_00110349:
          if (uVar8 == 0x7fffffff) break;
          uVar8 = uVar8 + 1;
        }
        param_1 = pbVar7;
      } while (pbVar1 != pbVar7);
    }
  }
  else {
    uVar8 = 0;
    if (param_1 < pbVar1) {
      do {
        bVar2 = *param_1;
        if ((char)bVar2 < '@') {
          if (((char)bVar2 < '%') && (3 < (byte)(bVar2 - 0x20))) goto LAB_00110231;
LAB_0011020b:
          param_1 = param_1 + 1;
          uVar8 = uVar8 + 1;
        }
        else {
          if (('@' < (char)bVar2) && (((char)bVar2 < '`' || ((byte)(bVar2 + 0x9f) < 0x1e))))
          goto LAB_0011020b;
LAB_00110231:
          local_48 = (mbstate_t)0x0;
          do {
            lVar5 = FUN_00115310(&local_4c,param_1,pbVar1 + -(long)param_1,&local_48);
            if (lVar5 == -1) {
              if ((param_3 & 1) != 0) goto LAB_001102d8;
              goto LAB_0011020b;
            }
            if (lVar5 == -2) {
              if ((param_3 & 1) != 0) goto LAB_001102d8;
              uVar8 = uVar8 + 1;
              param_1 = pbVar1;
              break;
            }
            if (lVar5 == 0) {
              lVar5 = 1;
            }
            iVar3 = wcwidth(local_4c);
            if (iVar3 < 0) {
              if ((param_3 & 2) != 0) goto LAB_001102d8;
              iVar3 = iswcntrl(local_4c);
              if (iVar3 == 0) {
                if (uVar8 == 0x7fffffff) goto LAB_00110360;
                uVar8 = uVar8 + 1;
              }
            }
            else {
              if ((int)(0x7fffffff - uVar8) < iVar3) {
LAB_00110360:
                uVar8 = 0x7fffffff;
                goto LAB_001102dd;
              }
              uVar8 = uVar8 + iVar3;
            }
            param_1 = param_1 + lVar5;
            iVar3 = mbsinit(&local_48);
          } while (iVar3 == 0);
        }
      } while (param_1 < pbVar1);
    }
  }
LAB_001102dd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (ulong)uVar8;
LAB_001102d8:
  uVar8 = 0xffffffff;
  goto LAB_001102dd;
}



void FUN_00110370(char *param_1,uint param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_001101b0(param_1,sVar1,(ulong)param_2);
  return;
}



void FUN_001103a0(undefined8 *param_1,ulong param_2,undefined8 *param_3,code *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *__dest;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong local_60;
  ulong local_48;
  
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar9 = param_1[1];
      uVar4 = *param_1;
      iVar2 = (*param_4)(uVar4,uVar9);
      if (0 < iVar2) {
        *param_1 = uVar9;
        param_1[1] = uVar4;
      }
    }
  }
  else {
    uVar3 = param_2 >> 1;
    FUN_001103a0(param_1 + uVar3,param_2 - uVar3,param_3,param_4);
    if (uVar3 == 1) {
      uVar9 = *param_1;
      *param_3 = uVar9;
    }
    else {
      uVar8 = param_2 >> 2;
      FUN_001103a0(param_1 + uVar8,uVar3 - uVar8,param_3,param_4);
      FUN_001103a0(param_1,uVar8,param_3,param_4);
      uVar9 = *param_1;
      uVar4 = param_1[uVar8];
      local_60 = 0;
      uVar10 = uVar8;
      __dest = param_3;
      while( true ) {
        iVar2 = (*param_4)(uVar9,uVar4);
        puVar7 = __dest;
        while (__dest = puVar7 + 1, 0 < iVar2) {
          uVar10 = uVar10 + 1;
          *puVar7 = uVar4;
          local_48 = uVar8;
          if (uVar3 == uVar10) goto LAB_001105af;
          uVar4 = param_1[uVar10];
          iVar2 = (*param_4)(uVar9,uVar4);
          puVar7 = __dest;
        }
        uVar1 = local_60 + 1;
        *puVar7 = uVar9;
        local_60 = uVar10;
        local_48 = uVar3;
        if (uVar8 == uVar1) break;
        uVar9 = param_1[uVar1];
        local_60 = uVar1;
      }
LAB_001105af:
      memcpy(__dest,param_1 + local_60,(local_48 - local_60) * 8);
      uVar9 = *param_3;
    }
    lVar5 = 0;
    local_60 = 0;
    uVar4 = param_1[uVar3];
    uVar10 = uVar3;
    while( true ) {
      iVar2 = (*param_4)(uVar9,uVar4);
      lVar6 = lVar5;
      while (lVar5 = lVar6 + 1, 0 < iVar2) {
        uVar10 = uVar10 + 1;
        param_1[lVar6] = uVar4;
        if (param_2 == uVar10) {
          memcpy(param_1 + lVar5,param_3 + local_60,(uVar3 - local_60) * 8);
          return;
        }
        uVar4 = param_1[uVar10];
        iVar2 = (*param_4)(uVar9,uVar4);
        lVar6 = lVar5;
      }
      local_60 = local_60 + 1;
      param_1[lVar6] = uVar9;
      if (uVar3 == local_60) break;
      uVar9 = param_3[local_60];
    }
  }
  return;
}



void FUN_001105e0(long param_1,long param_2,undefined8 param_3)

{
  FUN_001103a0(param_1,param_2,param_1 + param_2 * 8,param_3);
  return;
}



long FUN_001105f0(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_tolower_loc();
    do {
      *(undefined *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}



long FUN_00110640(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_toupper_loc();
    do {
      *(undefined *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}



// WARNING: Could not reconcile some variable overlaps

char * FUN_00110690(char *param_1,long param_2,char *param_3,tm *param_4,undefined param_5,
                   undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined auVar1 [16];
  bool bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *__s;
  char *__n;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char cVar11;
  int __c;
  int iVar12;
  size_t __n_00;
  size_t __n_01;
  char *__dest;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  char *__dest_00;
  char *__n_02;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  char *pcVar23;
  uint uVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool bVar26;
  char *local_4f0;
  char *local_4e8;
  char *local_4b8;
  uint local_4b0;
  uint local_4a8;
  undefined4 local_488;
  undefined4 uStack1156;
  undefined4 uStack1152;
  undefined4 uStack1148;
  undefined4 local_478;
  undefined4 uStack1140;
  undefined4 uStack1136;
  undefined4 uStack1132;
  undefined4 local_468;
  undefined4 uStack1124;
  undefined4 uStack1120;
  undefined4 uStack1116;
  char *local_458;
  undefined2 local_44d;
  char local_44b;
  char acStack1098 [2];
  char local_448;
  undefined auStack1095 [21];
  char local_432 [1010];
  long local_40;
  
  uVar24 = param_4->tm_hour;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = "";
  if (param_4->tm_zone != (char *)0x0) {
    __s = param_4->tm_zone;
  }
  if ((int)uVar24 < 0xd) {
    if (uVar24 == 0) {
      uVar24 = 0xc;
    }
  }
  else {
    uVar24 = uVar24 - 0xc;
  }
  cVar3 = *param_3;
  pcVar23 = (char *)0x0;
  if (cVar3 != '\0') {
    do {
      if (cVar3 != '%') {
        if ((ulong)(param_2 - (long)pcVar23) < 2) goto LAB_00110778;
        if (param_1 != (char *)0x0) {
          *param_1 = cVar3;
          param_1 = param_1 + 1;
        }
        pcVar23 = pcVar23 + 1;
        goto LAB_00110752;
      }
      bVar19 = 0;
      bVar18 = param_5;
      uVar15 = 0;
      do {
        while( true ) {
          while( true ) {
            do {
              local_4e8._0_4_ = uVar15;
              param_3 = param_3 + 1;
              cVar3 = *param_3;
              uVar15 = SEXT14(cVar3);
              uVar16 = (ulong)uVar15;
            } while (cVar3 == '0');
            if (cVar3 < '1') break;
            if (cVar3 == '^') {
              bVar18 = 1;
              uVar15 = (uint)local_4e8;
            }
            else {
              if (cVar3 != '_') goto LAB_0011082e;
            }
          }
          if (cVar3 != '#') break;
          bVar19 = 1;
          uVar15 = (uint)local_4e8;
        }
      } while (cVar3 == '-');
LAB_0011082e:
      uVar14 = 0xffffffff;
      if (uVar15 - 0x30 < 10) {
        uVar14 = 0;
        __dest_00 = param_3;
        do {
          cVar3 = __dest_00[1];
          uVar15 = SEXT14(cVar3);
          uVar16 = (ulong)uVar15;
          param_3 = __dest_00 + 1;
          uVar5 = uVar15 - 0x30;
          if ((int)uVar14 < 0xccccccd) {
            if ((uVar14 == 0xccccccc) && ('7' < *__dest_00)) goto LAB_00110975;
            uVar14 = (int)*__dest_00 + -0x30 + uVar14 * 10;
          }
          else {
LAB_00110975:
            if (9 < uVar5) {
              uVar14 = 0x7fffffff;
              break;
            }
            uVar15 = SEXT14(__dest_00[2]);
            uVar16 = (ulong)uVar15;
            uVar14 = 0x7fffffff;
            param_3 = __dest_00 + 2;
            uVar5 = uVar15 - 0x30;
          }
          cVar3 = (char)uVar15;
          __dest_00 = param_3;
        } while (uVar5 < 10);
      }
      if (((char)uVar16 == 'E') || ((char)uVar16 == 'O')) {
        cVar3 = param_3[1];
        param_3 = param_3 + 1;
        uVar16 = (ulong)(uint)(int)cVar3;
      }
      else {
        uVar15 = 0;
      }
      cVar11 = (char)uVar16;
      __dest = param_3;
      __dest_00 = &local_44b;
      uVar5 = uVar24;
      local_4b0 = uVar14;
      switch(uVar16 & 0xff) {
      case 0:
        cVar3 = param_3[-1];
        param_3 = param_3 + -1;
LAB_00111579:
        __dest_00 = (char *)(param_2 - (long)pcVar23);
        uVar15 = 0;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
        }
        __n = (char *)(long)(int)uVar15;
        __dest = param_3;
        if (cVar3 != '%') break;
        local_4e8 = (char *)0x1;
        if (__n != (char *)0x0) {
          local_4e8 = __n;
        }
        __n_02 = (char *)0x1;
        goto LAB_001108bb;
      case 0x25:
        __dest_00 = (char *)(param_2 - (long)pcVar23);
        uVar5 = 0;
        if (-1 < (int)uVar14) {
          uVar5 = uVar14;
        }
        __n = (char *)(long)(int)uVar5;
        local_4e8 = (char *)0x1;
        if (__n != (char *)0x0) {
          local_4e8 = __n;
        }
        if (uVar15 != 0) {
          __n_02 = (char *)0x1;
          goto LAB_001108bb;
        }
        if (local_4e8 < __dest_00) {
          if (param_1 != (char *)0x0) {
            __dest_00 = param_1;
            if (1 < (int)uVar14) {
              __c = 0x30;
              __dest_00 = param_1 + ((long)(int)uVar14 - 1U);
              if ((uint)local_4e8 != 0x30) {
                __c = 0x20;
              }
              memset(param_1,__c,(long)(int)uVar14 - 1U);
              cVar11 = *param_3;
            }
            *__dest_00 = cVar11;
            param_1 = __dest_00 + 1;
          }
          pcVar23 = local_4e8 + (long)pcVar23;
          goto LAB_00110752;
        }
        goto LAB_00110778;
      case 0x3a:
        cVar11 = param_3[1];
        __dest_00 = param_3 + 1;
        if (cVar11 == ':') {
          lVar22 = 1;
          __n = param_3 + 2;
          do {
            __dest_00 = __n;
            cVar11 = *__dest_00;
            lVar22 = lVar22 + 1;
            __n = __dest_00 + 1;
          } while (cVar11 == ':');
        }
        else {
          lVar22 = 1;
        }
        if (cVar11 == 'z') goto LAB_00110e91;
        break;
      case 0x41:
      case 0x42:
      case 0x61:
        if (uVar15 != 0) break;
        if (bVar19 != 0) {
          bVar18 = bVar19;
        }
LAB_001109c8:
        bVar19 = 0;
        uVar15 = 0;
        goto LAB_001109e8;
      case 0x43:
        if (uVar15 != 0x45) {
          local_4b0 = 2;
          iVar12 = param_4->tm_year;
          __c = iVar12 / 100 + 0x13;
          bVar26 = iVar12 < -0x76c;
          uVar5 = __c - ((uint)(0 < __c) & (uint)(iVar12 % 100) >> 0x1f);
          uVar17 = 0;
          bVar2 = false;
          goto LAB_00110b78;
        }
LAB_00111a6e:
        local_4b0 = 0;
        goto LAB_00110b8c;
      case 0x44:
        if (uVar15 == 0) {
          local_4b8 = "%m/%d/%y";
          goto LAB_00110bd0;
        }
        break;
      case 0x46:
        if (uVar15 == 0) {
          local_4b8 = "%Y-%m-%d";
          goto LAB_00110bd0;
        }
        break;
      case 0x47:
      case 0x56:
      case 0x67:
        if (uVar15 != 0x45) {
          iVar12 = param_4->tm_year;
          iVar21 = param_4->tm_yday;
          iVar20 = param_4->tm_wday;
          __c = (iVar21 - iVar20) + 0x17e;
          uVar5 = iVar12 + -100 + (iVar12 >> 0x1f & 400U);
          __c = (iVar21 - __c) + 3 + (__c / 7) * 7;
          if (__c < 0) {
            uVar5 = uVar5 - 1;
            __c = 0x16d;
            if (((uVar5 & 3) == 0) && (__c = 0x16e, uVar5 == ((int)uVar5 / 100) * 100)) {
              __c = ~-(uint)((int)uVar5 % 400 == 0) + 0x16e;
            }
            iVar25 = -1;
            iVar20 = ((iVar21 + __c) - iVar20) + 0x17e;
            iVar21 = ((iVar21 + __c) - iVar20) + 3 + (iVar20 / 7) * 7;
          }
          else {
            iVar6 = 0x16d;
            if (((uVar5 & 3) == 0) && (iVar6 = 0x16e, uVar5 == ((int)uVar5 / 100) * 100)) {
              iVar6 = (uint)(uVar5 == ((int)uVar5 / 400) * 400) + 0x16d;
            }
            iVar25 = 1;
            iVar20 = ((iVar21 - iVar6) - iVar20) + 0x17e;
            iVar21 = ((iVar21 - iVar6) - iVar20) + 3 + (iVar20 / 7) * 7;
            if (iVar21 < 0) {
              iVar25 = 0;
              iVar21 = __c;
            }
          }
          if (cVar11 == 'G') {
            uVar5 = iVar12 + 0x76c + iVar25;
            local_4b0 = 4;
            bVar26 = iVar12 < -0x76c - iVar25;
            uVar17 = 0;
            bVar2 = false;
            goto LAB_00110b78;
          }
          if (cVar11 == 'g') {
            local_4b0 = 2;
            uVar17 = (iVar12 % 100 + iVar25) % 100;
            uVar5 = uVar17;
            if ((int)uVar17 < 0) {
              uVar5 = uVar17 + 100;
              if (iVar12 < -0x76c - iVar25) {
                uVar5 = -uVar17;
              }
            }
          }
          else {
            uVar5 = iVar21 / 7 + 1;
            local_4b0 = 2;
          }
          goto LAB_00110dd0;
        }
        break;
      case 0x48:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_hour;
          local_4b0 = 2;
          goto LAB_00110dd0;
        }
        break;
      case 0x49:
        if (uVar15 != 0x45) {
          local_4b0 = 2;
          goto LAB_00110dd0;
        }
        break;
      case 0x4d:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_min;
          local_4b0 = 2;
          goto LAB_00110dd0;
        }
        break;
      case 0x4e:
        if (uVar15 != 0x45) {
          uVar5 = param_8;
          if (uVar14 == 0xffffffff) {
            uVar14 = 9;
            local_4b0 = 9;
          }
          else {
            uVar17 = param_8;
            uVar7 = uVar14;
            if ((int)uVar14 < 9) {
              do {
                uVar7 = uVar7 + 1;
                uVar5 = (int)uVar17 / 10;
                uVar17 = (int)uVar17 / 10;
              } while (uVar7 != 9);
            }
          }
          goto LAB_00110dd0;
        }
        break;
      case 0x50:
        bVar4 = 1;
        goto LAB_001114c1;
      case 0x52:
        local_4b8 = "%H:%M";
        goto LAB_00110bd0;
      case 0x53:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_sec;
          local_4b0 = 2;
          goto LAB_00110dd0;
        }
        break;
      case 0x54:
        local_4b8 = "%H:%M:%S";
LAB_00110bd0:
        uVar10 = FUN_00110690(0,0xffffffffffffffff,local_4b8,param_4,(ulong)(uint)bVar18,param_6,
                              param_7,(ulong)param_8);
        uVar15 = 0;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
        }
        uVar8 = SEXT48((int)uVar15);
        uVar16 = uVar8;
        if (uVar8 <= uVar10) {
          uVar16 = uVar10;
        }
        if ((ulong)(param_2 - (long)pcVar23) <= uVar16) goto LAB_00110778;
        if (param_1 != (char *)0x0) {
          __dest_00 = param_1;
          if (uVar10 < uVar8) {
            __n_00 = (long)(int)uVar14 - uVar10;
            __dest_00 = param_1 + __n_00;
            if ((uint)local_4e8 == 0x30) {
              memset(param_1,0x30,__n_00);
            }
            else {
              memset(param_1,0x20,__n_00);
            }
          }
          param_1 = __dest_00 + uVar10;
          FUN_00110690(__dest_00,param_2 - (long)pcVar23,local_4b8,param_4,(ulong)(uint)bVar18,
                       param_6,param_7,(ulong)param_8);
        }
LAB_00110c44:
        pcVar23 = pcVar23 + uVar16;
        goto LAB_00110752;
      case 0x55:
        if (uVar15 != 0x45) {
          __c = (param_4->tm_yday - param_4->tm_wday) + 7;
          iVar12 = (int)((ulong)((long)__c * -0x6db6db6d) >> 0x20);
LAB_00110f88:
          uVar5 = (iVar12 + __c >> 2) - (__c >> 0x1f);
          local_4b0 = 2;
          goto LAB_00110dd0;
        }
        break;
      case 0x57:
        if (uVar15 != 0x45) {
          __c = param_4->tm_wday + 6;
          __c = ((__c / 7) * 7 - __c) + 7 + param_4->tm_yday;
          iVar12 = (int)((ulong)((long)__c * -0x6db6db6d) >> 0x20);
          goto LAB_00110f88;
        }
        break;
      case 0x58:
      case 99:
      case 0x78:
        if (uVar15 != 0x4f) goto switchD_00110861_caseD_72;
        break;
      case 0x59:
        if (uVar15 == 0x45) goto LAB_00111a6e;
        if (uVar15 == 0x4f) break;
        local_4b0 = 4;
        bVar26 = param_4->tm_year < -0x76c;
        uVar5 = param_4->tm_year + 0x76c;
        uVar17 = 0;
        bVar2 = false;
        goto LAB_00111830;
      case 0x5a:
        if (bVar19 != 0) {
          bVar18 = 0;
        }
        __n_00 = strlen(__s);
        uVar15 = 0;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
        }
        uVar10 = SEXT48((int)uVar15);
        uVar16 = uVar10;
        if (uVar10 <= __n_00) {
          uVar16 = __n_00;
        }
        if ((ulong)(param_2 - (long)pcVar23) <= uVar16) goto LAB_00110778;
        if (param_1 != (char *)0x0) {
          __dest_00 = param_1;
          if (__n_00 < uVar10) {
            __n_01 = (long)(int)uVar14 - __n_00;
            __dest_00 = param_1 + __n_01;
            if ((uint)local_4e8 == 0x30) {
              memset(param_1,0x30,__n_01);
            }
            else {
              memset(param_1,0x20,__n_01);
            }
          }
          if (bVar19 == 0) {
            if (bVar18 == 0) {
              memcpy(__dest_00,__s,__n_00);
            }
            else {
              FUN_00110640();
            }
          }
          else {
            FUN_001105f0(__dest_00,__s,__n_00);
          }
          param_1 = __dest_00 + __n_00;
        }
        goto LAB_00110c44;
      case 0x62:
      case 0x68:
        if (bVar19 != 0) {
          bVar18 = bVar19;
        }
        cVar11 = cVar3;
        if (uVar15 == 0) goto LAB_001109c8;
        break;
      case 100:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_mday;
          local_4b0 = 2;
          goto LAB_00110dd0;
        }
        break;
      case 0x65:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_mday;
LAB_001113f8:
          local_4b0 = 2;
          if (((uint)local_4e8 != 0x30) && ((uint)local_4e8 != 0x2d)) {
            local_4e8._0_4_ = 0x5f;
          }
          goto LAB_00110dd0;
        }
        break;
      case 0x6a:
        if (uVar15 != 0x45) {
          local_4b0 = 3;
          bVar26 = param_4->tm_yday < -1;
          uVar5 = param_4->tm_yday + 1;
          uVar17 = 0;
          bVar2 = false;
          goto LAB_00110b78;
        }
        break;
      case 0x6b:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_hour;
          goto LAB_001113f8;
        }
        break;
      case 0x6c:
        if (uVar15 != 0x45) goto LAB_001113f8;
        break;
      case 0x6d:
        if (uVar15 != 0x45) {
          local_4b0 = 2;
          bVar26 = param_4->tm_mon < -1;
          uVar5 = param_4->tm_mon + 1;
          uVar17 = 0;
          bVar2 = false;
          goto LAB_00110b78;
        }
        break;
      case 0x6e:
        uVar15 = 0;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
        }
        uVar16 = SEXT48((int)uVar15);
        if (uVar16 == 0) {
          uVar16 = 1;
        }
        if (uVar16 < (ulong)(param_2 - (long)pcVar23)) {
          if (param_1 != (char *)0x0) {
            __dest_00 = param_1;
            if (1 < (int)uVar14) {
              __n_00 = (long)(int)uVar14 - 1;
              __dest_00 = param_1 + __n_00;
              if ((uint)local_4e8 == 0x30) {
                memset(param_1,0x30,__n_00);
              }
              else {
                memset(param_1,0x20,__n_00);
              }
            }
            *__dest_00 = '\n';
            param_1 = __dest_00 + 1;
          }
LAB_00111052:
          pcVar23 = pcVar23 + uVar16;
          goto LAB_00110752;
        }
        goto LAB_00110778;
      case 0x70:
        bVar4 = 0;
LAB_001114c1:
        if (bVar19 == 0) {
          cVar11 = 'p';
          bVar19 = bVar4;
        }
        else {
          cVar11 = 'p';
          bVar18 = 0;
        }
LAB_00110afc:
        if (uVar15 != 0) {
          local_4b0 = 0;
          goto LAB_00110b9c;
        }
        goto LAB_001109e8;
      case 0x71:
        local_4b0 = 1;
        if (uVar15 == 0x4f) goto LAB_00110b8c;
        bVar2 = false;
        bVar26 = false;
        uVar17 = 0;
        uVar5 = (param_4->tm_mon * 0xb >> 5) + 1;
        goto LAB_00111090;
      case 0x72:
switchD_00110861_caseD_72:
        bVar19 = 0;
        goto LAB_00110afc;
      case 0x73:
        __dest_00 = local_432 + 1;
                    // WARNING: Load size is inaccurate
        auVar1 = *(undefined *)param_4;
        local_488 = SUB164(auVar1,0);
        uStack1156 = SUB164(auVar1 >> 0x20,0);
        uStack1152 = SUB164(auVar1 >> 0x40,0);
        uStack1148 = SUB164(auVar1 >> 0x60,0);
                    // WARNING: Load size is inaccurate
        auVar1 = *(undefined *)&param_4->tm_mon;
        local_478 = SUB164(auVar1,0);
        uStack1140 = SUB164(auVar1 >> 0x20,0);
        uStack1136 = SUB164(auVar1 >> 0x40,0);
        uStack1132 = SUB164(auVar1 >> 0x60,0);
                    // WARNING: Load size is inaccurate
        auVar1 = *(undefined *)&param_4->tm_isdst;
        local_458 = param_4->tm_zone;
        local_468 = SUB164(auVar1,0);
        uStack1124 = SUB164(auVar1 >> 0x20,0);
        uStack1120 = SUB164(auVar1 >> 0x40,0);
        uStack1116 = SUB164(auVar1 >> 0x60,0);
        lVar9 = FUN_00115af0(SUB168(auVar1,0),param_7,&local_488);
        lVar22 = lVar9;
        do {
          lVar13 = SUB168(SEXT816(0x6666666666666667) * SEXT816(lVar22) >> 0x42,0) -
                   (lVar22 >> 0x3f);
          cVar3 = (char)lVar22 + (char)lVar13 * -10;
          if (lVar9 < 0) {
            cVar3 = -cVar3;
          }
          __dest_00 = __dest_00 + -1;
          *__dest_00 = cVar3 + '0';
          lVar22 = lVar13;
        } while (lVar13 != 0);
        local_4b0 = 1;
        if (0 < (int)uVar14) {
          local_4b0 = uVar14;
        }
        if (lVar9 < 0) goto LAB_00111870;
        goto LAB_001113ac;
      case 0x74:
        uVar15 = 0;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
        }
        uVar16 = SEXT48((int)uVar15);
        if (uVar16 == 0) {
          uVar16 = 1;
        }
        if (uVar16 < (ulong)(param_2 - (long)pcVar23)) {
          if (param_1 != (char *)0x0) {
            __dest_00 = param_1;
            if (1 < (int)uVar14) {
              __n_00 = (long)(int)uVar14 - 1;
              __dest_00 = param_1 + __n_00;
              if ((uint)local_4e8 == 0x30) {
                memset(param_1,0x30,__n_00);
              }
              else {
                memset(param_1,0x20,__n_00);
              }
            }
            *__dest_00 = '\t';
            param_1 = __dest_00 + 1;
          }
          goto LAB_00111052;
        }
        goto LAB_00110778;
      case 0x75:
        uVar5 = (param_4->tm_wday + 6) % 7 + 1;
        local_4b0 = 1;
        goto LAB_00110dd0;
      case 0x77:
        if (uVar15 != 0x45) {
          uVar5 = param_4->tm_wday;
          local_4b0 = 1;
          goto LAB_00110dd0;
        }
        break;
      case 0x79:
        if (uVar15 == 0x45) goto LAB_00111a6e;
        local_4b0 = 2;
        uVar17 = param_4->tm_year % 100;
        uVar5 = uVar17;
        if ((int)uVar17 < 0) {
          uVar5 = uVar17 + 100;
          if (param_4->tm_year < -0x76c) {
            uVar5 = -uVar17;
          }
        }
LAB_00110dd0:
        uVar17 = 0;
        bVar2 = false;
        bVar26 = SUB41(uVar5 >> 0x1f,0);
LAB_00110b78:
        if (uVar15 == 0x4f) {
          cVar11 = cVar3;
          if (bVar26 != false) goto LAB_00111839;
LAB_00110b8c:
          bVar19 = 0;
LAB_00110b9c:
          local_44b = (char)uVar15;
          __dest_00 = acStack1098;
          uVar15 = local_4b0;
LAB_001109e8:
          local_44d = 0x2520;
          *__dest_00 = cVar11;
          __dest_00[1] = '\0';
          __n_00 = strftime(&local_448,0x400,(char *)&local_44d,param_4);
          if (__n_00 == 0) goto LAB_00110752;
          local_4f0 = (char *)(__n_00 - 1);
          uVar5 = 0;
          if (-1 < (int)uVar14) {
            uVar5 = uVar14;
          }
          __dest_00 = (char *)(long)(int)uVar5;
          local_4e8 = __dest_00;
          if (__dest_00 <= local_4f0) {
            local_4e8 = local_4f0;
          }
          if ((char *)(param_2 - (long)pcVar23) <= local_4e8) goto LAB_00110778;
          __dest = param_3;
          if (param_1 != (char *)0x0) {
            __dest = param_1;
            if ((uVar15 == 0) && (local_4f0 < __dest_00)) {
              __n_00 = (long)(int)uVar14 - (long)local_4f0;
              __dest = param_1 + __n_00;
              if ((uint)local_4e8 == 0x30) {
                memset(param_1,0x30,__n_00);
              }
              else {
                memset(param_1,0x20,__n_00);
              }
            }
            if (bVar19 == 0) {
              if (bVar18 == 0) {
                memcpy(__dest,auStack1095,(size_t)local_4f0);
              }
              else {
                FUN_00110640(__dest,auStack1095,local_4f0);
              }
            }
            else {
              FUN_001105f0(__dest,auStack1095,local_4f0);
            }
            goto LAB_00110ae1;
          }
          goto LAB_0011092d;
        }
LAB_00111830:
        if (bVar26 != false) {
LAB_00111839:
          uVar5 = -uVar5;
        }
LAB_00111090:
        __dest = local_432 + 1;
        do {
          __dest_00 = __dest + -1;
          if ((uVar17 & 1) != 0) {
            __dest_00 = __dest + -2;
            __dest[-1] = ':';
            __dest = __dest + -1;
          }
          uVar17 = (int)uVar17 >> 1;
          uVar15 = uVar5 / 10;
          __dest[-1] = (char)uVar5 + (char)uVar15 * -10 + '0';
          __dest = __dest_00;
          uVar5 = uVar15;
        } while ((uVar17 | uVar15) != 0);
        if ((int)local_4b0 < (int)uVar14) {
          local_4b0 = uVar14;
        }
        if (bVar26 != false) {
LAB_00111870:
          cVar11 = '-';
          cVar3 = '-';
          if ((uint)local_4e8 == 0x2d) {
LAB_00111886:
            uVar15 = 0;
            if (-1 < (int)uVar14) {
              uVar15 = uVar14;
            }
            __n = (char *)(long)(int)uVar15;
            __dest = (char *)0x1;
            if (__n != (char *)0x0) {
              __dest = __n;
            }
            if (__dest < (char *)(param_2 - (long)pcVar23)) {
              if (param_1 != (char *)0x0) {
                if ((local_4b0 == 0) && ((char *)0x1 < __n)) {
                  memset(param_1,0x20,(long)(int)uVar14 - 1U);
                  local_4b0 = 0;
                  param_1 = param_1 + ((long)(int)uVar14 - 1U);
                }
                *param_1 = cVar3;
                param_1 = param_1 + 1;
              }
              pcVar23 = __dest + (long)pcVar23;
              __dest = (char *)(param_2 - (long)pcVar23);
              local_4e8._0_4_ = 0x2d;
              local_4f0 = local_432 + (1 - (long)__dest_00);
              goto LAB_00111232;
            }
            goto LAB_00110778;
          }
LAB_00111114:
          __dest = (char *)(param_2 - (long)pcVar23);
          local_4f0 = local_432 + (1 - (long)__dest_00);
          __c = (local_4b0 - 1) - (int)local_4f0;
          if (__c < 1) {
            uVar15 = 0;
            if (-1 < (int)uVar14) {
              uVar15 = uVar14;
            }
            __n = (char *)(long)(int)uVar15;
            __n_02 = (char *)0x1;
            if (__n != (char *)0x0) {
              __n_02 = __n;
            }
            if (__n_02 < __dest) {
              if (param_1 != (char *)0x0) {
                __dest = param_1;
                if ((local_4b0 == 0) && ((char *)0x1 < __n)) {
                  __n_00 = (long)(int)uVar14 - 1;
                  __dest = param_1 + __n_00;
                  local_4b0 = 0;
                  if ((uint)local_4e8 == 0x30) {
                    memset(param_1,0x30,__n_00);
                  }
                  else {
                    memset(param_1,0x20,__n_00);
                  }
                }
                *__dest = cVar11;
                param_1 = __dest + 1;
              }
              pcVar23 = __n_02 + (long)pcVar23;
              __dest = (char *)(param_2 - (long)pcVar23);
              goto LAB_00111232;
            }
          }
          else {
            if ((uint)local_4e8 == 0x5f) {
LAB_00111a88:
              __n = (char *)(long)__c;
              if (__n < __dest) {
                if (param_1 != (char *)0x0) {
                  memset(param_1,0x20,(size_t)__n);
                  param_1 = param_1 + (long)__n;
                }
                pcVar23 = __n + (long)pcVar23;
                uVar15 = uVar14 - __c;
                bVar26 = __c < (int)uVar14;
                uVar14 = 0;
                if (bVar26) {
                  uVar14 = uVar15;
                }
                __dest = (char *)(param_2 - (long)pcVar23);
                if (cVar11 == '\0') {
                  __n = (char *)(long)(int)uVar14;
                  local_4e8._0_4_ = 0x5f;
                  local_4f0 = local_432 + (1 - (long)__dest_00);
                }
                else {
                  __n = (char *)(long)(int)uVar14;
                  __n_02 = (char *)0x1;
                  if (__n != (char *)0x0) {
                    __n_02 = __n;
                  }
                  if (__dest <= __n_02) goto LAB_00110778;
                  if (param_1 != (char *)0x0) {
                    if ((local_4b0 == 0) && ((char *)0x1 < __n)) {
                      memset(param_1,0x20,(size_t)(__n + -1));
                      local_4a8 = 0;
                      param_1 = param_1 + (long)(__n + -1);
                      local_4b0 = local_4a8;
                    }
                    *param_1 = cVar11;
                    param_1 = param_1 + 1;
                  }
                  pcVar23 = __n_02 + (long)pcVar23;
                  __dest = (char *)(param_2 - (long)pcVar23);
                  local_4e8._0_4_ = 0x5f;
                  local_4f0 = local_432 + (1 - (long)__dest_00);
                }
                goto LAB_00111232;
              }
            }
            else {
              if ((char *)(long)(int)local_4b0 < __dest) {
                uVar15 = 0;
                if (-1 < (int)uVar14) {
                  uVar15 = uVar14;
                }
                __n_02 = (char *)(long)(int)uVar15;
                __n = (char *)0x1;
                if (__n_02 != (char *)0x0) {
                  __n = __n_02;
                }
                if (__n < __dest) {
                  pcVar23 = __n + (long)pcVar23;
                  __n_00 = SEXT48(__c);
                  if (param_1 != (char *)0x0) {
                    __dest = param_1;
                    if ((local_4b0 == 0) && ((char *)0x1 < __n_02)) {
                      __n_01 = (long)(int)uVar14 - 1;
                      __dest = param_1 + __n_01;
                      local_4b8._0_4_ = 0;
                      local_4b0 = (uint)local_4b8;
                      if ((uint)local_4e8 == 0x30) {
                        memset(param_1,0x30,__n_01);
                      }
                      else {
                        memset(param_1,0x20,__n_01);
                      }
                    }
                    *__dest = cVar11;
                    param_1 = __dest + 1;
                    goto LAB_001111ee;
                  }
                  goto LAB_00111224;
                }
              }
            }
          }
          goto LAB_00110778;
        }
        if (bVar2) {
          cVar11 = '+';
          if ((uint)local_4e8 == 0x2d) {
            cVar3 = '+';
            goto LAB_00111886;
          }
          goto LAB_00111114;
        }
LAB_001113ac:
        __dest = (char *)(param_2 - (long)pcVar23);
        local_4f0 = local_432 + (1 - (long)__dest_00);
        if (((uint)local_4e8 == 0x2d) || (__c = local_4b0 - (int)local_4f0, __c < 1)) {
          uVar15 = 0;
          if (-1 < (int)uVar14) {
            uVar15 = uVar14;
          }
          __n = (char *)(long)(int)uVar15;
        }
        else {
          if ((uint)local_4e8 == 0x5f) {
            cVar11 = '\0';
            goto LAB_00111a88;
          }
          if (__dest <= (char *)(long)(int)local_4b0) goto LAB_00110778;
          __n_00 = SEXT48(__c);
LAB_001111ee:
          if (param_1 != (char *)0x0) {
            memset(param_1,0x30,__n_00);
            param_1 = param_1 + __n_00;
          }
LAB_00111224:
          pcVar23 = pcVar23 + __n_00;
          __n = (char *)0x0;
          __dest = (char *)(param_2 - (long)pcVar23);
          uVar14 = 0;
        }
LAB_00111232:
        local_4e8 = __n;
        if (__n <= local_4f0) {
          local_4e8 = local_4f0;
        }
        if (__dest <= local_4e8) goto LAB_00110778;
        __dest = param_3;
        if (param_1 == (char *)0x0) goto LAB_0011092d;
        __dest = param_1;
        if ((local_4b0 == 0) && (local_4f0 < __n)) {
          __n_00 = (long)(int)uVar14 - (long)local_4f0;
          __dest = param_1 + __n_00;
          if ((uint)local_4e8 == 0x30) {
            memset(param_1,0x30,__n_00);
          }
          else {
            memset(param_1,0x20,__n_00);
          }
        }
        if (bVar18 == 0) {
          memcpy(__dest,__dest_00,(size_t)local_4f0);
        }
        else {
          FUN_00110640();
        }
LAB_00110ae1:
        param_1 = __dest + (long)local_4f0;
        pcVar23 = local_4e8 + (long)pcVar23;
        goto LAB_00110752;
      case 0x7a:
        lVar22 = 0;
        __dest_00 = param_3;
LAB_00110e91:
        param_3 = __dest_00;
        if (param_4->tm_isdst < 0) goto LAB_00110752;
        bVar26 = true;
        __c = (int)param_4->tm_gmtoff;
        if ((-1 < __c) && (bVar26 = false, __c == 0)) {
          bVar26 = *__s == '-';
        }
        uVar5 = __c / 0xe10;
        uVar7 = (__c / 0x3c) % 0x3c;
        if (lVar22 == 1) {
LAB_00111def:
          local_4b0 = 6;
          bVar2 = true;
          uVar5 = uVar5 * 100 + uVar7;
          uVar17 = 4;
        }
        else {
          if (lVar22 == 0) {
            uVar17 = 0;
            bVar2 = true;
            local_4b0 = 5;
            uVar5 = uVar5 * 100 + uVar7;
          }
          else {
            if (lVar22 != 2) {
              if (lVar22 != 3) {
                cVar3 = *param_3;
                goto LAB_00111579;
              }
              if (__c % 0x3c == 0) {
                if (uVar7 != 0) goto LAB_00111def;
                local_4b0 = 3;
                bVar2 = true;
                uVar17 = uVar7;
                goto LAB_00110b78;
              }
            }
            local_4b0 = 9;
            bVar2 = true;
            uVar17 = 0x14;
            uVar5 = __c % 0x3c + uVar5 * 10000 + uVar7 * 100;
          }
        }
        goto LAB_00110b78;
      }
      __c = 1;
      param_3 = __dest;
      do {
        param_3 = param_3 + -1;
        __c = __c + 1;
      } while (*param_3 != '%');
      __n_02 = (char *)(long)__c;
      __dest_00 = (char *)(param_2 - (long)pcVar23);
      uVar15 = 0;
      if (-1 < (int)uVar14) {
        uVar15 = uVar14;
      }
      __n = (char *)(long)(int)uVar15;
      local_4e8 = __n;
      if (__n <= __n_02) {
        local_4e8 = __n_02;
      }
LAB_001108bb:
      if (__dest_00 <= local_4e8) {
LAB_00110778:
        pcVar23 = (char *)0x0;
        goto LAB_0011077b;
      }
      if (param_1 != (char *)0x0) {
        __dest_00 = param_1;
        if (__n_02 < __n) {
          __n_00 = (long)(int)uVar14 - (long)__n_02;
          __dest_00 = param_1 + __n_00;
          if ((uint)local_4e8 == 0x30) {
            memset(param_1,0x30,__n_00);
          }
          else {
            memset(param_1,0x20,__n_00);
          }
        }
        if (bVar18 == 0) {
          memcpy(__dest_00,param_3,(size_t)__n_02);
        }
        else {
          FUN_00110640();
        }
        param_1 = __dest_00 + (long)__n_02;
      }
LAB_0011092d:
      param_3 = __dest;
      pcVar23 = local_4e8 + (long)pcVar23;
LAB_00110752:
      cVar3 = param_3[1];
      param_3 = param_3 + 1;
    } while (cVar3 != '\0');
  }
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
  }
LAB_0011077b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar23;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00111f80(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00110690();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00111fd0(byte *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (param_1 == (byte *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
                    // WARNING: Subroutine does not return
    abort();
  }
  pcVar2 = strrchr((char *)param_1,0x2f);
  if (pcVar2 != (char *)0x0) {
    pbVar1 = (byte *)(pcVar2 + 1);
    pbVar3 = pbVar1 + -(long)param_1;
    bVar6 = pbVar3 < (byte *)0x6;
    bVar7 = pbVar3 == (byte *)0x6;
    if (6 < (long)pbVar3) {
      lVar4 = 7;
      pbVar3 = (byte *)(pcVar2 + -6);
      pbVar5 = (byte *)"/.libs/";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar6 = *pbVar3 < *pbVar5;
        bVar7 = *pbVar3 == *pbVar5;
        pbVar3 = pbVar3 + (ulong)bVar8 * -2 + 1;
        pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
      } while (bVar7);
      if (bVar7) {
        lVar4 = 3;
        pbVar3 = pbVar1;
        pbVar5 = &DAT_0011a6a8;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar6 = *pbVar3 < *pbVar5;
          bVar7 = *pbVar3 == *pbVar5;
          pbVar3 = pbVar3 + (ulong)bVar8 * -2 + 1;
          pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
        } while (bVar7);
        param_1 = pbVar1;
        if ((!bVar6 && !bVar7) == bVar6) {
          param_1 = (byte *)(pcVar2 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  program_invocation_name = param_1;
  program_name = param_1;
  return;
}



undefined * FUN_00112070(char *param_1,int param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  
  pbVar1 = (byte *)FUN_00115d50();
  if ((*pbVar1 & 0xdf) == 0x55) {
    if (((((pbVar1[1] & 0xdf) == 0x54) && ((pbVar1[2] & 0xdf) == 0x46)) && (pbVar1[3] == 0x2d)) &&
       ((pbVar1[4] == 0x38 && (pbVar1[5] == 0)))) {
      puVar2 = &DAT_0011a6ac;
      if (*param_1 != '`') {
        puVar2 = &DAT_0011a6b0;
      }
      return puVar2;
    }
  }
  else {
    if ((((*pbVar1 & 0xdf) == 0x47) && ((pbVar1[1] & 0xdf) == 0x42)) &&
       ((pbVar1[2] == 0x31 &&
        ((((pbVar1[3] == 0x38 && (pbVar1[4] == 0x30)) && (pbVar1[5] == 0x33)) &&
         ((pbVar1[6] == 0x30 && (pbVar1[7] == 0)))))))) {
      puVar2 = &DAT_0011a6b4;
      if (*param_1 != '`') {
        puVar2 = &DAT_0011a6b8;
      }
      return puVar2;
    }
  }
  puVar2 = &DAT_0011a6bb;
  if (param_2 != 9) {
    puVar2 = (undefined *)0x11b032;
  }
  return puVar2;
}



ulong FUN_00112160(undefined *param_1,ulong param_2,char *param_3,ulong param_4,uint param_5,
                  uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  ushort **ppuVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  char *pcVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  uint local_e0;
  size_t local_d0;
  char *local_a0;
  ulong local_98;
  char *local_88;
  char *local_80;
  bool local_6c;
  wint_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  uVar16 = param_6 & 2;
  local_80 = param_8;
  local_88 = param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = 0x1121d1;
  sVar9 = __ctype_get_mb_cur_max();
  uVar20 = param_2;
  local_e0 = param_5;
  switch(param_5) {
  case 0:
    bVar7 = true;
    local_6c = false;
    bVar3 = false;
    local_98 = 0;
    bVar25 = false;
    uVar21 = 0;
    bVar5 = false;
    local_d0 = 0;
    local_a0 = (char *)0x0;
    break;
  case 2:
    if (uVar16 != 0) {
      bVar7 = true;
      local_6c = false;
      bVar3 = false;
      local_98 = 0;
      bVar25 = true;
      bVar5 = false;
      local_d0 = 1;
      uVar21 = 0;
      local_a0 = "\'";
      break;
    }
    bVar5 = false;
LAB_00112dd1:
    if (param_2 != 0) {
      bVar7 = true;
      local_6c = false;
      bVar3 = false;
      local_98 = 0;
      goto LAB_00112924;
    }
    local_98 = 0;
    bVar7 = true;
    local_6c = false;
    bVar3 = false;
    bVar25 = false;
    local_d0 = 1;
    local_a0 = "\'";
    uVar21 = 1;
    local_e0 = 2;
    break;
  case 3:
    bVar5 = true;
    goto LAB_00112213;
  case 4:
    if (uVar16 == 0) {
      bVar5 = true;
      goto LAB_00112dd1;
    }
  case 1:
    bVar5 = false;
LAB_00112213:
    local_6c = false;
    local_98 = 0;
    bVar25 = true;
    bVar7 = true;
    bVar3 = false;
    local_d0 = 1;
    uVar21 = 0;
    local_e0 = 2;
    local_a0 = "\'";
    break;
  case 5:
    if (uVar16 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_6c = false;
      local_98 = 0;
      bVar7 = true;
      bVar3 = false;
      bVar25 = false;
      bVar5 = true;
      local_d0 = 1;
      uVar21 = 1;
      local_a0 = "\"";
    }
    else {
      bVar7 = true;
      local_6c = false;
      bVar3 = false;
      local_98 = 0;
      bVar25 = true;
      bVar5 = true;
      local_d0 = 1;
      uVar21 = 0;
      local_a0 = "\"";
    }
    break;
  case 6:
    bVar7 = true;
    local_6c = false;
    bVar3 = false;
    local_98 = 0;
    bVar25 = true;
    bVar5 = true;
    local_d0 = 1;
    uVar21 = 0;
    local_a0 = "\"";
    local_e0 = 5;
    break;
  case 7:
    bVar7 = true;
    local_6c = false;
    bVar3 = false;
    local_98 = 0;
    bVar25 = false;
    uVar21 = 0;
    bVar5 = true;
    local_d0 = 0;
    local_a0 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      local_80 = (char *)dcgettext(0,&DAT_0011a6bd,5);
      if (local_80 == "`") {
        local_80 = (char *)FUN_00112070(&DAT_0011a6bd,(ulong)param_5);
      }
      local_88 = (char *)dcgettext(0,0x11b032,5);
      if (local_88 == "\'") {
        local_88 = (char *)FUN_00112070(0x11b032);
      }
    }
    uVar21 = 0;
    if (uVar16 == 0) {
      cVar12 = *local_80;
      while (cVar12 != '\0') {
        if (uVar21 < param_2) {
          param_1[uVar21] = cVar12;
        }
        uVar21 = uVar21 + 1;
        cVar12 = local_80[uVar21];
      }
    }
    bVar25 = uVar16 != 0;
    local_a0 = local_88;
    bVar3 = false;
    uVar26 = 0x112f73;
    local_d0 = strlen(local_88);
    bVar7 = true;
    local_6c = false;
    local_98 = 0;
    bVar5 = true;
    break;
  default:
                    // WARNING: Subroutine does not return
    abort();
  }
LAB_00112233:
  uVar17 = 0;
  bVar1 = local_6c;
LAB_00112248:
  bVar22 = param_4 != uVar17;
  if (param_4 == 0xffffffffffffffff) {
    bVar22 = param_3[uVar17] != '\0';
  }
  bVar2 = bVar5;
  if (!bVar22) goto LAB_001128c0;
  __s1 = (byte *)(param_3 + uVar17);
  bVar6 = (bool)(local_e0 != 2 & bVar5);
  bVar4 = bVar3;
  bVar24 = bVar25;
  if (bVar6) {
    if (local_d0 == 0) {
      uVar13 = (ulong)*__s1;
      switch(*__s1) {
      case 0:
        bVar6 = false;
        goto LAB_00112743;
      default:
        bVar6 = false;
        goto switchD_0011234e_caseD_1;
      case 7:
        bVar15 = 0x61;
        break;
      case 8:
        bVar15 = 0x62;
        break;
      case 9:
        uVar13 = 9;
        bVar6 = false;
        bVar15 = 0x74;
        goto LAB_00112482;
      case 10:
        uVar13 = 10;
        bVar6 = false;
        bVar15 = 0x6e;
        goto LAB_00112482;
      case 0xb:
        bVar15 = 0x76;
        break;
      case 0xc:
        uVar13 = 0xc;
        bVar6 = false;
        bVar15 = 0x66;
        goto LAB_00112494;
      case 0xd:
        uVar13 = 0xd;
        bVar6 = false;
        bVar15 = 0x72;
        goto LAB_00112482;
      case 0x20:
        uVar13 = 0x20;
        bVar22 = bVar6;
        bVar6 = false;
        goto LAB_001125d1;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        bVar22 = false;
        bVar6 = false;
        goto LAB_001125d1;
      case 0x23:
      case 0x7e:
        bVar6 = false;
        goto LAB_001125c8;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        bVar24 = local_e0 == 2;
        bVar23 = false;
        bVar22 = bVar6;
        bVar6 = false;
        goto LAB_00112388;
      case 0x27:
        bVar6 = false;
        goto switchD_0011234e_caseD_27;
      case 0x3f:
        bVar6 = false;
        goto switchD_0011234e_caseD_3f;
      case 0x5c:
        bVar6 = false;
        goto joined_r0x001126e8;
      case 0x7b:
      case 0x7d:
        bVar6 = false;
        goto switchD_0011234e_caseD_7b;
      }
      goto LAB_00112500;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_d0)) {
      uVar26 = 0x1122bc;
      param_4 = strlen(param_3);
    }
    if (uVar17 + local_d0 <= param_4) {
      uVar26 = 0x1122ff;
      iVar8 = memcmp(__s1,local_a0,local_d0);
      if (iVar8 == 0) {
        if (!bVar25) goto LAB_00112330;
        bVar2 = bVar25;
        bVar24 = local_e0 == 2;
        goto LAB_00112ce9;
      }
    }
    bVar6 = false;
  }
LAB_00112330:
  uVar13 = (ulong)*__s1;
  switch(*__s1) {
  case 0:
    if (bVar5) {
LAB_00112743:
      bVar24 = local_e0 == 2;
      bVar2 = bVar25;
      if (!bVar25) {
        bVar2 = (bool)((bVar3 ^ 1U) & bVar24);
        if (bVar2) {
          if (uVar21 < uVar20) {
            param_1[uVar21] = 0x27;
          }
          if (uVar21 + 1 < uVar20) {
            param_1[uVar21 + 1] = 0x24;
          }
          if (uVar21 + 2 < uVar20) {
            param_1[uVar21 + 2] = 0x27;
          }
          uVar21 = uVar21 + 3;
          bVar3 = bVar2;
        }
        if (uVar21 < uVar20) {
          param_1[uVar21] = 0x5c;
        }
        uVar19 = uVar21 + 1;
        bVar23 = bVar22;
        if (local_e0 == 2) {
          bVar15 = 0x30;
          bVar22 = false;
          uVar21 = uVar19;
          bVar4 = bVar3;
          goto LAB_001123b9;
        }
        if ((uVar17 + 1 < param_4) && ((byte)(param_3[uVar17 + 1] - 0x30U) < 10)) {
          if (uVar19 < uVar20) {
            param_1[uVar19] = 0x30;
          }
          if (uVar21 + 2 < uVar20) {
            param_1[uVar21 + 2] = 0x30;
          }
          uVar21 = uVar21 + 3;
          uVar13 = 0x30;
          bVar22 = false;
        }
        else {
          uVar13 = 0x30;
          uVar21 = uVar19;
          bVar22 = false;
        }
        goto LAB_00112388;
      }
      goto LAB_00112ce9;
    }
    uVar13 = 0;
    if ((param_6 & 1) == 0) goto LAB_0011249b;
    uVar17 = uVar17 + 1;
    goto LAB_00112248;
  default:
switchD_0011234e_caseD_1:
    bVar23 = bVar5;
    if (sVar9 != 1) {
      local_48 = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar19 = 0;
      do {
        uVar18 = uVar17 + uVar19;
        uVar26 = 0x112abb;
        lVar11 = FUN_00115310(&local_4c,param_3 + uVar18,param_4 - uVar18);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar22 = false;
          goto LAB_00112b46;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar18) || (param_3[uVar18] == '\0')) goto LAB_001130d8;
          goto LAB_001130c7;
        }
        bVar24 = (bool)(local_e0 == 2 & bVar25);
        if ((bVar24) && (lVar11 != 1)) {
          pcVar14 = param_3 + uVar18 + 1;
          do {
            if (((byte)(*pcVar14 + 0xa5U) < 0x22) &&
               ((1 << (*pcVar14 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              local_e0 = 2;
              goto LAB_00112ce9;
            }
            pcVar14 = pcVar14 + 1;
          } while (param_3 + uVar18 + lVar11 != pcVar14);
        }
        iVar8 = iswprint(local_4c);
        if (iVar8 == 0) {
          bVar22 = false;
        }
        uVar19 = uVar19 + lVar11;
        uVar26 = 0x112b0d;
        iVar8 = mbsinit(&local_48);
      } while (iVar8 == 0);
      bVar23 = (bool)((bVar22 ^ 1U) & bVar5);
      goto LAB_00112b46;
    }
    uVar26 = 0x112678;
    ppuVar10 = __ctype_b_loc();
    uVar19 = 1;
    bVar23 = ((*ppuVar10)[uVar13] & 0x4000) == 0;
    bVar22 = !bVar23;
    bVar23 = (bool)(bVar23 & bVar5);
    goto LAB_001126a7;
  case 7:
    uVar13 = 7;
    bVar15 = 0x61;
    break;
  case 8:
    uVar13 = 8;
    bVar15 = 0x62;
    break;
  case 9:
    uVar13 = 9;
    bVar15 = 0x74;
    goto LAB_00112482;
  case 10:
    uVar13 = 10;
    bVar15 = 0x6e;
    goto LAB_00112482;
  case 0xb:
    uVar13 = 0xb;
    bVar15 = 0x76;
    break;
  case 0xc:
    uVar13 = 0xc;
    bVar15 = 0x66;
    break;
  case 0xd:
    uVar13 = 0xd;
    bVar15 = 0x72;
LAB_00112482:
    bVar23 = (bool)(local_e0 == 2 & bVar25);
    if (bVar23) {
LAB_001125de:
      local_e0 = 2;
      bVar24 = bVar23;
      goto LAB_00112ce9;
    }
    break;
  case 0x20:
    uVar13 = 0x20;
    goto LAB_001125d1;
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x5b:
  case 0x5e:
  case 0x60:
  case 0x7c:
    bVar22 = false;
    goto LAB_001125d1;
  case 0x23:
  case 0x7e:
LAB_001125c8:
    if (uVar17 != 0) goto LAB_0011237c;
LAB_001125d1:
    bVar24 = local_e0 == 2;
    bVar23 = (bool)(bVar25 & bVar24);
    if (!bVar23) goto LAB_00112388;
    goto LAB_001125de;
  case 0x25:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    bVar24 = local_e0 == 2;
    bVar23 = false;
    goto LAB_00112388;
  case 0x27:
switchD_0011234e_caseD_27:
    bVar1 = bVar22;
    if (local_e0 != 2) {
      bVar24 = false;
      uVar13 = 0x27;
      bVar23 = false;
      goto LAB_00112388;
    }
    if (!bVar25) {
      if ((uVar20 == 0) || (uVar13 = 0, uVar19 = uVar20, local_98 != 0)) {
        if (uVar21 < uVar20) {
          param_1[uVar21] = 0x27;
        }
        if (uVar21 + 1 < uVar20) {
          param_1[uVar21 + 1] = 0x5c;
        }
        uVar13 = uVar20;
        uVar19 = local_98;
        if (uVar21 + 2 < uVar20) {
          param_1[uVar21 + 2] = 0x27;
        }
      }
      bVar15 = 0x27;
      uVar20 = uVar13;
      uVar21 = uVar21 + 3;
      local_98 = uVar19;
      bVar23 = false;
      bVar4 = false;
      goto LAB_001123b9;
    }
    goto LAB_00112ce9;
  case 0x3f:
switchD_0011234e_caseD_3f:
    if (local_e0 == 2) {
      if (!bVar25) {
        bVar15 = 0x3f;
        bVar23 = false;
        bVar22 = false;
        goto LAB_001123b9;
      }
      goto LAB_00112ce9;
    }
    if (local_e0 == 5) {
      if (((((param_6 & 4) != 0) && (uVar19 = uVar17 + 2, uVar19 < param_4)) &&
          (param_3[uVar17 + 1] == '?')) &&
         ((uVar13 = (ulong)(byte)param_3[uVar19], (byte)param_3[uVar19] < 0x3f &&
          ((0x7000a38200000000U >> (uVar13 & 0x1f) & 1) != 0)))) {
        uVar16 = local_e0;
        if (!bVar25) {
          if (uVar21 < uVar20) {
            param_1[uVar21] = 0x3f;
          }
          if (uVar21 + 1 < uVar20) {
            param_1[uVar21 + 1] = 0x22;
          }
          if (uVar21 + 2 < uVar20) {
            param_1[uVar21 + 2] = 0x22;
          }
          if (uVar21 + 3 < uVar20) {
            param_1[uVar21 + 3] = 0x3f;
          }
          bVar24 = false;
          uVar17 = uVar19;
          uVar21 = uVar21 + 4;
          bVar23 = false;
          bVar22 = false;
          goto LAB_00112388;
        }
        goto LAB_00112d00;
      }
      bVar24 = false;
      uVar13 = 0x3f;
      bVar23 = false;
      bVar22 = false;
    }
    else {
      bVar24 = local_e0 == 2;
      uVar13 = 0x3f;
      bVar23 = false;
      bVar22 = false;
    }
    goto LAB_00112388;
  case 0x5c:
    if (local_e0 == 2) {
      if (bVar25) goto LAB_00112ce9;
    }
    else {
joined_r0x001126e8:
      if ((!bVar5) || (!bVar25)) {
        uVar13 = 0x5c;
        bVar15 = 0x5c;
        break;
      }
      if (local_d0 == 0) {
        bVar15 = 0x5c;
        goto LAB_00112500;
      }
    }
    uVar17 = uVar17 + 1;
    bVar22 = false;
    bVar15 = 0x5c;
    goto LAB_001123cc;
  case 0x7b:
  case 0x7d:
switchD_0011234e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    if (!bVar24) goto LAB_001125c8;
LAB_0011237c:
    bVar24 = local_e0 == 2;
    bVar23 = false;
    bVar22 = false;
    goto LAB_00112388;
  }
LAB_00112494:
  if (!bVar5) {
LAB_0011249b:
    bVar22 = false;
    bVar23 = false;
    goto LAB_001124a2;
  }
LAB_00112500:
  bVar22 = false;
  goto LAB_00112503;
LAB_001128c0:
  bVar24 = (bool)(bVar25 & local_e0 == 2 & uVar21 == 0);
  if (bVar24) {
    local_e0 = 2;
LAB_00112ce9:
    uVar16 = local_e0;
    if ((bVar2) && (uVar16 = 4, !bVar24)) {
      uVar16 = local_e0;
    }
LAB_00112d00:
    local_e0 = uVar16;
    uVar17 = FUN_00112160(param_1,uVar20,param_3,param_4,(ulong)local_e0,
                          (ulong)(param_6 & 0xfffffffd),0,local_80,local_88,uVar26);
    goto LAB_00112d39;
  }
  bVar22 = (bool)(local_e0 == 2 & (bVar25 ^ 1U));
  bVar25 = (bool)(bVar25 ^ 1U);
  if ((!bVar22) || (bVar25 = bVar22, !bVar1)) {
LAB_0011325c:
    uVar17 = uVar21;
    if (((local_a0 != (char *)0x0) && (bVar25)) && (cVar12 = *local_a0, cVar12 != '\0')) {
      do {
        if (uVar17 < uVar20) {
          param_1[uVar17] = cVar12;
        }
        uVar17 = uVar17 + 1;
        cVar12 = local_a0[uVar17 - uVar21];
      } while (cVar12 != '\0');
    }
    if (uVar17 < uVar20) {
      param_1[uVar17] = 0;
    }
LAB_00112d39:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar17;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  if (bVar7) {
    uVar17 = FUN_00112160(param_1,local_98,param_3,param_4,5,(ulong)param_6,param_7,local_80,
                          local_88,uVar26);
    goto LAB_00112d39;
  }
  local_6c = uVar20 == 0 && local_98 != 0;
  param_2 = local_98;
  bVar25 = bVar1;
  if (uVar20 != 0 || local_98 == 0) goto LAB_0011325c;
LAB_00112924:
  *param_1 = 0x27;
  local_e0 = 2;
  uVar21 = 1;
  local_d0 = 1;
  bVar25 = false;
  local_a0 = "\'";
  uVar20 = param_2;
  goto LAB_00112233;
  while (__s1[uVar19] != 0) {
LAB_001130c7:
    uVar19 = uVar19 + 1;
    if (param_4 <= uVar17 + uVar19) break;
  }
LAB_001130d8:
  bVar22 = false;
LAB_00112b46:
  if (1 < uVar19) {
LAB_00112b50:
    bVar2 = false;
    uVar19 = uVar19 + uVar17;
    uVar18 = uVar17;
    do {
      bVar15 = (byte)uVar13;
      if (bVar23) {
        bVar24 = local_e0 == 2;
        bVar2 = bVar25;
        if (bVar25) goto LAB_00112ce9;
        bVar24 = (bool)(bVar24 & (bVar4 ^ 1U));
        if (bVar24) {
          if (uVar21 < uVar20) {
            param_1[uVar21] = 0x27;
          }
          if (uVar21 + 1 < uVar20) {
            param_1[uVar21 + 1] = 0x24;
          }
          if (uVar21 + 2 < uVar20) {
            param_1[uVar21 + 2] = 0x27;
          }
          uVar21 = uVar21 + 3;
          bVar4 = bVar24;
        }
        if (uVar21 < uVar20) {
          param_1[uVar21] = 0x5c;
        }
        if (uVar21 + 1 < uVar20) {
          param_1[uVar21 + 1] = (char)(uVar13 >> 6) + '0';
        }
        if (uVar21 + 2 < uVar20) {
          param_1[uVar21 + 2] = ((byte)(uVar13 >> 3) & 7) + 0x30;
        }
        uVar17 = uVar18 + 1;
        uVar21 = uVar21 + 3;
        bVar15 = (bVar15 & 7) + 0x30;
        bVar2 = bVar23;
        if (uVar19 <= uVar17) goto LAB_001123f0;
      }
      else {
        bVar3 = (bool)((bVar2 ^ 1U) & bVar4);
        if (bVar6) {
          if (uVar21 < uVar20) {
            param_1[uVar21] = 0x5c;
          }
          uVar21 = uVar21 + 1;
        }
        uVar17 = uVar18 + 1;
        if (uVar19 <= uVar17) goto LAB_001123cc;
        if (bVar3) {
          if (uVar21 < uVar20) {
            param_1[uVar21] = 0x27;
          }
          if (uVar21 + 1 < uVar20) {
            param_1[uVar21 + 1] = 0x27;
          }
          uVar21 = uVar21 + 2;
          bVar6 = false;
          bVar4 = false;
        }
        else {
          bVar6 = false;
        }
      }
      uVar18 = uVar18 + 1;
      if (uVar21 < uVar20) {
        param_1[uVar21] = bVar15;
      }
      uVar13 = (ulong)(byte)param_3[uVar18];
      uVar21 = uVar21 + 1;
    } while( true );
  }
LAB_001126a7:
  if (bVar23) {
    bVar22 = false;
    bVar23 = bVar5;
    goto LAB_00112b50;
  }
  bVar24 = local_e0 == 2;
LAB_00112388:
  bVar4 = bVar3;
  if ((!bVar5) || (bVar24)) {
LAB_001124a2:
    bVar15 = (byte)uVar13;
    if (bVar25) goto LAB_0011239b;
LAB_001123b9:
    bVar3 = bVar4;
    if (!bVar6) {
      uVar17 = uVar17 + 1;
      bVar3 = (bool)((bVar23 ^ 1U) & bVar4);
LAB_001123cc:
      if (bVar3) {
        if (uVar21 < uVar20) {
          param_1[uVar21] = 0x27;
        }
        if (uVar21 + 1 < uVar20) {
          param_1[uVar21 + 1] = 0x27;
        }
        uVar21 = uVar21 + 2;
        bVar4 = false;
      }
      goto LAB_001123f0;
    }
  }
  else {
LAB_0011239b:
    bVar15 = (byte)uVar13;
    if ((param_7 == 0) ||
       (bVar3 = bVar4, (*(uint *)(param_7 + (uVar13 >> 5) * 4) >> ((uint)uVar13 & 0x1f) & 1) == 0))
    goto LAB_001123b9;
  }
LAB_00112503:
  bVar24 = local_e0 == 2;
  bVar2 = bVar5;
  if (bVar25) goto LAB_00112ce9;
  bVar24 = (bool)((bVar3 ^ 1U) & bVar24);
  bVar4 = bVar3;
  if (bVar24) {
    if (uVar21 < uVar20) {
      param_1[uVar21] = 0x27;
    }
    if (uVar21 + 1 < uVar20) {
      param_1[uVar21 + 1] = 0x24;
    }
    if (uVar21 + 2 < uVar20) {
      param_1[uVar21 + 2] = 0x27;
    }
    uVar21 = uVar21 + 3;
    bVar4 = bVar24;
  }
  if (uVar21 < uVar20) {
    param_1[uVar21] = 0x5c;
  }
  uVar21 = uVar21 + 1;
  uVar17 = uVar17 + 1;
LAB_001123f0:
  if (uVar21 < uVar20) {
    param_1[uVar21] = bVar15;
  }
  uVar21 = uVar21 + 1;
  bVar3 = bVar4;
  if (!bVar22) {
    bVar7 = false;
  }
  goto LAB_00112248;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_001133a0(uint param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  int *piVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  undefined *__ptr;
  undefined8 uVar9;
  
  uVar9 = 0x1133c1;
  piVar5 = __errno_location();
  iVar1 = *piVar5;
  if ((int)param_1 < 0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  puVar7 = (undefined4 *)PTR_DAT_00320240;
  if (DAT_00320238 <= (int)param_1) {
    if (0x7ffffffe < param_1) {
                    // WARNING: Subroutine does not return
      FUN_001146d0();
    }
    if (PTR_DAT_00320240 == &DAT_00320250) {
      puVar7 = (undefined4 *)FUN_001144e0(0);
      auVar4 = _DAT_00320250;
      PTR_DAT_00320240 = (undefined *)puVar7;
      *puVar7 = SUB164(_DAT_00320250,0);
      puVar7[1] = SUB164(auVar4 >> 0x20,0);
      puVar7[2] = SUB164(auVar4 >> 0x40,0);
      puVar7[3] = SUB164(auVar4 >> 0x60,0);
    }
    else {
      puVar7 = (undefined4 *)FUN_001144e0(PTR_DAT_00320240);
      PTR_DAT_00320240 = (undefined *)puVar7;
    }
    uVar9 = 0x11343e;
    memset(puVar7 + (long)DAT_00320238 * 4,0,(long)(int)((param_1 + 1) - DAT_00320238) << 4);
    DAT_00320238 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar8 = (ulong *)(puVar7 + (long)(int)param_1 * 4);
  uVar3 = *puVar8;
  __ptr = (undefined *)puVar8[1];
  uVar6 = FUN_00112160(__ptr,uVar3,param_2,param_3,(ulong)*param_4,(ulong)(uVar2 | 1),param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc),uVar9);
  if (uVar3 <= uVar6) {
    uVar6 = uVar6 + 1;
    *puVar8 = uVar6;
    if (__ptr != &DAT_00321420) {
      free(__ptr);
    }
    uVar9 = 0x1134cc;
    __ptr = (undefined *)FUN_00114480(uVar6);
    *(undefined **)(puVar8 + 1) = __ptr;
    FUN_00112160(__ptr,uVar6,param_2,param_3,(ulong)*param_4,(ulong)(uVar2 | 1),param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc),uVar9);
  }
  *piVar5 = iVar1;
  return __ptr;
}



void FUN_00113550(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00321520;
  }
  FUN_00114680(param_1,0x38);
  *piVar2 = iVar1;
  return;
}



ulong FUN_00113590(uint *param_1)

{
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_00321520;
  }
  return (ulong)*param_1;
}



void FUN_001135b0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00321520;
  }
  *param_1 = param_2;
  return;
}



ulong FUN_001135d0(undefined *param_1,byte param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00321520;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       (((uint)param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return (ulong)(uVar2 & 1);
}



ulong FUN_00113610(undefined *param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00321520;
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return (ulong)uVar1;
}



void FUN_00113630(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00321520;
  }
  *param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 10) = param_2;
    *(long *)(param_1 + 0xc) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_00113660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_5 == (uint *)0x0) {
    param_5 = (uint *)&DAT_00321520;
  }
  uVar3 = 0x113692;
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00112160(param_1,param_2,param_3,param_4,(ulong)*param_5,(ulong)param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc),uVar3);
  *piVar2 = iVar1;
  return;
}



undefined8 FUN_001136e0(undefined8 param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_4 == (uint *)0x0) {
    param_4 = (uint *)&DAT_00321520;
  }
  uVar5 = 0x11370f;
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar4 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00112160(0,0,param_1,param_2,(ulong)*param_4,(ulong)uVar4,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc),uVar5);
  uVar6 = 0x113766;
  uVar5 = FUN_00114480(lVar3 + 1);
  FUN_00112160(uVar5,lVar3 + 1,param_1,param_2,(ulong)*param_4,(ulong)uVar4,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc),uVar6);
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar5;
}



void FUN_001137d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001136e0(param_1,param_2,0,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_001137e0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00320240;
  if (1 < DAT_00320238) {
    ppvVar2 = (void **)(PTR_DAT_00320240 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00320240 + (ulong)(DAT_00320238 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00321420) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00320250 = 0x100;
    PTR_DAT_00320258 = &DAT_00321420;
  }
  if (__ptr_00 != &DAT_00320250) {
    free(__ptr_00);
    PTR_DAT_00320240 = &DAT_00320250;
  }
  DAT_00320238 = 1;
  return;
}



void FUN_00113880(undefined8 param_1,undefined8 param_2)

{
  FUN_001133a0(param_1,param_2,0xffffffffffffffff,&DAT_00321520);
  return;
}



void FUN_001138a0(void)

{
  FUN_001133a0();
  return;
}



void FUN_001138b0(undefined8 param_1)

{
  FUN_001133a0(0,param_1,0xffffffffffffffff,&DAT_00321520);
  return;
}



void FUN_001138d0(undefined8 param_1,undefined8 param_2)

{
  FUN_001133a0(0,param_1,param_2,&DAT_00321520);
  return;
}



void FUN_001138f0(undefined8 param_1,int param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 10) {
                    // WARNING: Subroutine does not return
    abort();
  }
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_48 = param_2;
  FUN_001133a0(param_1,param_3,0xffffffffffffffff,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00113980(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 10) {
                    // WARNING: Subroutine does not return
    abort();
  }
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_48 = param_2;
  FUN_001133a0(param_1,param_3,param_4,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00113a10(ulong param_1,undefined8 param_2)

{
  FUN_001138f0(0,param_1 & 0xffffffff,param_2);
  return;
}



void FUN_00113a20(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00113980(0,param_1 & 0xffffffff,param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00113a30(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack68;
  uint auStack64 [7];
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = DAT_00321550;
  local_48 = SUB164(_DAT_00321520,0);
  uStack68 = SUB164(_DAT_00321520 >> 0x20,0);
  auStack64[0] = SUB164(_DAT_00321520 >> 0x40,0);
  auStack64[1] = SUB164(_DAT_00321520 >> 0x60,0);
  auStack64[2] = SUB164(_DAT_00321530,0);
  auStack64[3] = SUB164(_DAT_00321530 >> 0x20,0);
  auStack64[4] = SUB164(_DAT_00321530 >> 0x40,0);
  auStack64[5] = SUB164(_DAT_00321530 >> 0x60,0);
  auStack64[6] = SUB164(_DAT_00321540,0);
  uStack36 = SUB164(_DAT_00321540 >> 0x20,0);
  uStack32 = SUB164(_DAT_00321540 >> 0x40,0);
  uStack28 = SUB164(_DAT_00321540 >> 0x60,0);
  uVar1 = auStack64[param_3 >> 5];
  auStack64[param_3 >> 5] = (~(uVar1 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar1;
  FUN_001133a0(SUB168(_DAT_00321540,0),0,param_1,param_2,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00113ad0(undefined8 param_1,char param_2)

{
  FUN_00113a30(param_1,0xffffffffffffffff,(ulong)(uint)(int)param_2);
  return;
}



void FUN_00113ae0(undefined8 param_1)

{
  FUN_00113a30(param_1,0xffffffffffffffff,0x3a);
  return;
}



void FUN_00113b00(undefined8 param_1,undefined8 param_2)

{
  FUN_00113a30(param_1,param_2,0x3a);
  return;
}



void FUN_00113b10(undefined8 param_1,int param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 10) {
                    // WARNING: Subroutine does not return
    abort();
  }
  local_44 = 0;
  local_3c = 0x4000000;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_48 = param_2;
  FUN_001133a0(param_1,param_3,0xffffffffffffffff,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00113ba0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined4 uStack60;
  undefined4 local_38;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 local_28;
  undefined4 uStack36;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack68 = SUB164(_DAT_00321520 >> 0x20,0);
  uStack64 = SUB164(_DAT_00321520 >> 0x40,0);
  uStack60 = SUB164(_DAT_00321520 >> 0x60,0);
  local_18 = DAT_00321550;
  local_48 = 10;
  local_38 = SUB164(_DAT_00321530,0);
  uStack52 = SUB164(_DAT_00321530 >> 0x20,0);
  uStack48 = SUB164(_DAT_00321530 >> 0x40,0);
  uStack44 = SUB164(_DAT_00321530 >> 0x60,0);
  local_28 = SUB164(_DAT_00321540,0);
  uStack36 = SUB164(_DAT_00321540 >> 0x20,0);
  local_20 = SUB168(_DAT_00321540 >> 0x40,0);
  if ((param_2 != 0) && (param_3 != 0)) {
    local_20 = param_2;
    local_18 = param_3;
    FUN_001133a0(SUB168(_DAT_00321540,0),param_1,param_4,param_5,&local_48);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_00113c40(void)

{
  FUN_00113ba0();
  return;
}



void FUN_00113c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00113ba0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}



void FUN_00113c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00113ba0(0,param_1,param_2,param_3,param_4);
  return;
}



void FUN_00113c90(void)

{
  FUN_001133a0();
  return;
}



void FUN_00113ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_001133a0(0,param_1,param_2,quote_quoting_options);
  return;
}



void FUN_00113cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_001133a0(param_1,param_2,0xffffffffffffffff,quote_quoting_options);
  return;
}



void FUN_00113ce0(undefined8 param_1)

{
  FUN_001133a0(0,param_1,0xffffffffffffffff,quote_quoting_options);
  return;
}



ulong FUN_00113d00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar2;
  char *__filename;
  char *__filename_00;
  uint *puVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  stat local_168;
  stat local_d8;
  long local_40;
  
  uVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s1 = (void *)FUN_0010ce10();
  __s2 = (void *)FUN_0010ce10(param_2);
  __n = FUN_0010ce70(__s1);
  sVar2 = FUN_0010ce70(__s2);
  if (__n == sVar2) {
    iVar1 = memcmp(__s1,__s2,__n);
    if (iVar1 == 0) {
      __filename = (char *)FUN_00115cf0(param_1);
      __filename_00 = (char *)FUN_00115cf0(param_2);
      iVar1 = __xstat(1,__filename,&local_168);
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        error(1,(ulong)*puVar3,&DAT_0011a2fc,__filename);
      }
      iVar1 = __xstat(1,__filename_00,&local_d8);
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        error(1,(ulong)*puVar3,&DAT_0011a2fc,__filename_00);
      }
      uVar4 = 0;
      if (local_168.st_ino == local_d8.st_ino) {
        uVar4 = (ulong)(local_168.st_dev == local_d8.st_dev);
      }
      free(__filename);
      free(__filename_00);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8
FUN_00113e70(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *__s;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_0011ab9b,5);
  __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e1);
  __s = (char *)dcgettext(0,
                          "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                          ,5);
  fputs_unlocked(__s,param_1);
  switch(param_6) {
  case 0:
                    // WARNING: Subroutine does not return
    abort();
  case 1:
    uVar1 = *param_5;
    uVar7 = dcgettext(0,"Written by %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar7,uVar1);
    return uVar1;
  case 2:
    uVar1 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,uVar1);
    return uVar1;
  case 3:
    uVar1 = param_5[2];
    uVar7 = param_5[1];
    uVar3 = *param_5;
    uVar4 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar4,uVar3,uVar7,uVar1);
    return uVar1;
  case 4:
    uVar7 = param_5[3];
    uVar3 = param_5[2];
    uVar4 = param_5[1];
    uVar6 = *param_5;
    uVar1 = 0x114112;
    uVar2 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_00114116;
  case 5:
    uVar1 = param_5[4];
    uVar7 = param_5[3];
    uVar3 = param_5[2];
    uVar4 = param_5[1];
    uVar6 = *param_5;
    uVar2 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00114116:
    __fprintf_chk(param_1,1,uVar2,uVar6,uVar4,uVar3,uVar7,uVar1);
    return uVar7;
  case 6:
    local_58 = param_5[1];
    uVar3 = param_5[5];
    uVar4 = param_5[4];
    uVar6 = param_5[3];
    uVar1 = param_5[2];
    uVar2 = *param_5;
    uVar7 = 0x1141a6;
    uVar5 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_001141b3;
  case 7:
    uVar1 = param_5[2];
    uVar7 = param_5[6];
    uVar3 = param_5[5];
    uVar4 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar2 = *param_5;
    uVar5 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_001141b3:
    uVar1 = __fprintf_chk(param_1,1,uVar5,uVar2,local_58,uVar1,uVar6,uVar4,uVar3,uVar7);
    return uVar1;
  case 8:
    local_48 = param_5[7];
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar7 = param_5[5];
    uVar3 = param_5[4];
    uVar4 = param_5[3];
    uVar6 = *param_5;
    local_40 = 0x113f80;
    uVar2 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_00113f84;
  case 9:
    local_40 = param_5[8];
    local_48 = param_5[7];
    __s = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar7 = param_5[5];
    uVar3 = param_5[4];
    uVar4 = param_5[3];
    uVar6 = *param_5;
    break;
  default:
    local_40 = param_5[8];
    local_48 = param_5[7];
    local_58 = param_5[2];
    local_50 = param_5[1];
    __s = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    uVar1 = param_5[6];
    uVar7 = param_5[5];
    uVar3 = param_5[4];
    uVar4 = param_5[3];
    uVar6 = *param_5;
  }
  uVar2 = dcgettext(0,__s,5);
LAB_00113f84:
  uVar1 = __fprintf_chk(param_1,1,uVar2,uVar6,local_50,local_58,uVar4,uVar3,uVar7,uVar1,local_48,
                        local_40);
  return uVar1;
}



void FUN_00114280(void)

{
  long lVar1;
  long *in_R8;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = *in_R8;
  while (lVar1 != 0) {
    lVar2 = lVar2 + 1;
    lVar1 = in_R8[lVar2];
  }
  FUN_00113e70();
  return;
}



void FUN_001142a0(void)

{
  uint uVar1;
  long lVar2;
  uint *in_R8;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_68 [11];
  long local_10;
  
  lVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar1 = *in_R8;
    if (uVar1 < 0x30) {
      plVar4 = (long *)((ulong)uVar1 + *(long *)(in_R8 + 4));
      *in_R8 = uVar1 + 8;
    }
    else {
      plVar4 = *(long **)(in_R8 + 2);
      *(long **)(in_R8 + 2) = plVar4 + 1;
    }
    lVar2 = *plVar4;
    local_68[lVar3] = lVar2;
  } while ((lVar2 != 0) && (lVar3 = lVar3 + 1, lVar3 != 10));
  FUN_00113e70();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00114320(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 param_5;
  undefined8 param_6;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  long local_a8 [11];
  long local_50;
  long local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  
  uVar7 = 0x20;
  local_50 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_5;
  local_20 = param_6;
  lVar6 = 0;
  plVar4 = (long *)&stack0x00000008;
  do {
    if (uVar7 < 0x30) {
      uVar2 = (ulong)uVar7;
      uVar7 = uVar7 + 8;
      plVar3 = (long *)((long)local_48 + uVar2);
      plVar5 = plVar4;
    }
    else {
      plVar5 = plVar4 + 1;
      plVar3 = plVar4;
    }
    lVar1 = *plVar3;
    local_a8[lVar6] = lVar1;
  } while ((lVar1 != 0) && (lVar6 = lVar6 + 1, plVar4 = plVar5, lVar6 != 10));
  FUN_00113e70();
  if (local_50 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00114400(void)

{
  FILE *__stream;
  undefined8 uVar1;
  char *__s;
  
  uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
  __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
  __printf_chk(1,uVar1,"GNU coreutils","http://www.gnu.org/software/coreutils/");
  __stream = stdout;
  __s = (char *)dcgettext(0,"General help using GNU software: <http://www.gnu.org/gethelp/>\n",5);
  fputs_unlocked(__s,__stream);
  return;
}



void FUN_00114480(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_001146d0();
  }
  return;
}



void FUN_001144a0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00114480();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_001146d0();
}



void thunk_FUN_00114480(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_001146d0();
  }
  return;
}



void * FUN_001144e0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_001146d0();
  }
  return pvVar1;
}



void FUN_00114520(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_001144e0();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_001146d0();
}



void FUN_00114550(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar3 = *param_2;
  if (param_1 == 0) {
    if (uVar3 == 0) {
      lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(param_3),0);
      uVar3 = (ulong)(lVar2 == 0) + lVar2;
    }
    bVar5 = SUB168(ZEXT816(uVar3) * ZEXT816(param_3) >> 0x40,0) != 0;
    uVar4 = (ulong)bVar5;
    if ((SUB168(ZEXT816(uVar3) * ZEXT816(param_3),0) < 0) || (bVar5)) goto LAB_001145ab;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar4 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar3) {
LAB_001145ab:
                    // WARNING: Subroutine does not return
      FUN_001146d0(param_1,param_2,uVar4);
    }
    uVar3 = (uVar3 >> 1) + 1 + uVar3;
  }
  *param_2 = uVar3;
  FUN_001144e0(param_1,uVar3 * param_3,uVar4,uVar3 * param_3);
  return;
}



void FUN_001145e0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      uVar1 = 0x80;
    }
    if ((long)uVar1 < 0) goto LAB_00114621;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00114621:
                    // WARNING: Subroutine does not return
      FUN_001146d0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_001144e0(param_1,uVar1);
  return;
}



void FUN_00114630(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00114480();
  memset(__s,0,param_1);
  return;
}



void FUN_00114650(size_t param_1,ulong param_2)

{
  void *pvVar1;
  
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_001146d0();
}



void FUN_00114680(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00114480(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}



void FUN_001146b0(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_00114680(param_1,sVar1 + 1);
  return;
}



void FUN_001146d0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error((ulong)exit_failure,0,&DAT_0011a2fc,uVar1);
                    // WARNING: Subroutine does not return
  abort();
}



ulong FUN_00114710(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00114e20(param_1,0,param_2 & 0xffffffff,&local_48);
  uVar3 = local_48;
  if (iVar1 == 0) {
    if ((param_3 <= local_48) && (local_48 <= param_4)) goto LAB_001147b4;
    puVar4 = (uint *)__errno_location();
    *puVar4 = (-(uint)(uVar3 < 0x40000000) & 0xffffffd7) + 0x4b;
  }
  else {
    puVar4 = (uint *)__errno_location();
    if (iVar1 == 1) {
      *puVar4 = 0x4b;
    }
    else {
      if (iVar1 == 3) {
        *puVar4 = 0;
      }
    }
  }
  uVar2 = FUN_00113ce0(param_1);
  uVar3 = (ulong)*puVar4;
  if (*puVar4 == 0x16) {
    uVar3 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  error((ulong)param_7,uVar3,"%s: %s",param_6,uVar2);
LAB_001147b4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00114810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00114710(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}



char * FUN_00114840(void)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = getcwd((char *)0x0,0);
  if (pcVar1 == (char *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    // WARNING: Subroutine does not return
      FUN_001146d0();
    }
  }
  return pcVar1;
}



char * FUN_00114870(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  char *__name;
  char *pcVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  __name = (char *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x22;
  puVar4 = (uint *)__errno_location();
  do {
    while( true ) {
      __name = (char *)FUN_001145e0(__name,&local_38);
      lVar2 = local_38 + -2;
      __name[lVar2] = '\0';
      *puVar4 = 0;
      iVar3 = gethostname(__name,local_38 - 1);
      if (iVar3 != 0) break;
      pcVar5 = __name;
      if (__name[lVar2] == '\0') goto LAB_001148e8;
    }
    uVar1 = *puVar4;
  } while ((uVar1 < 0x25) && (((ulong)puVar4 >> ((ulong)uVar1 & 0x1f) & 1) != 0));
  pcVar5 = (char *)0x0;
  free(__name);
  *puVar4 = uVar1;
LAB_001148e8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pcVar5;
}



ulong FUN_00114950(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x24 < param_3) {
                    // WARNING: Subroutine does not return
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoul");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = &local_48;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar9 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar9 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar9 = *pbVar5;
  }
  if (bVar9 == 0x2d) {
LAB_00114a28:
    uVar11 = 4;
    goto LAB_00114a2d;
  }
  uVar6 = strtoul((char *)param_1,(char **)param_2,param_3);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 != (char *)0x0) && (bVar9 = *param_1, bVar9 != 0)) {
      uVar11 = 0;
      pcVar7 = strchr(param_5,(int)(char)bVar9);
      uVar6 = 1;
      if (pcVar7 != (char *)0x0) goto LAB_00114a87;
    }
    goto LAB_00114a28;
  }
  if (*piVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    if (*piVar3 != 0x22) goto LAB_00114a28;
  }
  if ((param_5 == (char *)0x0) || (bVar9 = *pbVar5, bVar9 == 0)) {
    *param_4 = uVar6;
    goto LAB_00114a2d;
  }
LAB_00114a87:
  pcVar7 = strchr(param_5,(int)(char)bVar9);
  uVar10 = (uint)uVar11;
  if (pcVar7 == (char *)0x0) {
switchD_00114b26_caseD_43:
    *param_4 = uVar6;
    uVar11 = (ulong)(uVar10 | 2);
    goto LAB_00114a2d;
  }
  if ((((byte)((uint)bVar9 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar9 - 0x45) & 0x1f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar1 = pbVar5[1];
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        uVar12 = 0x400;
        iVar13 = (uint)(pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
        goto LAB_00114b0a;
      }
      if (bVar1 != 0x42) goto LAB_00114b00;
    }
    iVar13 = 2;
    uVar12 = 1000;
  }
  else {
LAB_00114b00:
    iVar13 = 1;
    uVar12 = 0x400;
  }
LAB_00114b0a:
  switch(bVar9) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar6) >> 0x40,0) == 0) {
      uVar6 = uVar6 << 10;
    }
    else {
LAB_00114c1e:
      uVar11 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  default:
    goto switchD_00114b26_caseD_43;
  case 0x45:
    iVar14 = 6;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00114bc5;
  case 0x47:
  case 0x67:
    uVar8 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar12),0);
    bVar16 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar12) >> 0x40,0) != 0;
    if (bVar16) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar15 = (uint)bVar16;
    uVar11 = SUB168(ZEXT816(uVar8) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(uVar8) * ZEXT816(uVar12) >> 0x40,0) != 0) {
      uVar15 = 1;
      uVar11 = 0xffffffffffffffff;
    }
    goto LAB_00114b37;
  case 0x4b:
  case 0x6b:
    auVar2 = ZEXT816(uVar6);
    uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
    if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) goto LAB_00114c1e;
    break;
  case 0x4d:
  case 0x6d:
    uVar11 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(uVar6) * ZEXT816(uVar12) >> 0x40,0) == 0) {
      uVar15 = 0;
    }
    else {
      uVar11 = 0xffffffffffffffff;
      uVar15 = 1;
    }
LAB_00114b37:
    uVar6 = SUB168(ZEXT816(uVar11) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(uVar11) * ZEXT816(uVar12) >> 0x40,0) != 0) {
      uVar15 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    uVar11 = (ulong)(uVar10 | uVar15);
    break;
  case 0x50:
    iVar14 = 5;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00114bc5;
  case 0x54:
  case 0x74:
    iVar14 = 4;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00114bc5;
  case 0x59:
    iVar14 = 8;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00114bc5;
  case 0x5a:
    iVar14 = 7;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_00114bc5:
    uVar11 = (ulong)(uVar10 | uVar15);
    break;
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar6) >> 0x40,0) != 0) goto LAB_00114c1e;
    uVar6 = uVar6 << 9;
    break;
  case 99:
    break;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar6) >> 0x40,0) != 0) goto LAB_00114c1e;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar13;
  bVar9 = pbVar5[iVar13];
  *param_4 = uVar6;
  if (bVar9 != 0) {
    uVar11 = (ulong)((uint)uVar11 | 2);
  }
LAB_00114a2d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00114d70(uint param_1,int param_2,undefined param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  undefined local_32;
  undefined local_31;
  undefined8 local_30;
  
  uVar1 = exit_failure;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    if (param_1 < 2) {
      pcVar4 = "%s%s argument \'%s\' too large";
      if (param_1 != 1) goto LAB_00114de6;
    }
    else {
      pcVar4 = "invalid suffix in %s%s argument \'%s\'";
    }
  }
  else {
    pcVar4 = "invalid %s%s argument \'%s\'";
    if (param_1 != 4) goto LAB_00114de6;
  }
  if (param_2 < 0) {
    local_31 = 0;
    puVar5 = &local_32;
    puVar3 = &DAT_0011b051 + -(long)param_2;
    local_32 = param_3;
  }
  else {
    puVar3 = &DAT_0011b051;
    puVar5 = *(undefined **)(param_4 + (long)param_2 * 0x20);
  }
  uVar2 = dcgettext(0,pcVar4,5);
  error((ulong)uVar1,0,uVar2,puVar3,puVar5,param_5);
LAB_00114de6:
                    // WARNING: Subroutine does not return
  abort();
}



ulong FUN_00114e20(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x24 < param_3) {
                    // WARNING: Subroutine does not return
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoumax");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = &local_48;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar9 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar9 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar9 = *pbVar5;
  }
  if (bVar9 == 0x2d) {
LAB_00114ef8:
    uVar11 = 4;
    goto LAB_00114efd;
  }
  uVar6 = __strtoul_internal(param_1,param_2,(ulong)param_3,0);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 != (char *)0x0) && (bVar9 = *param_1, bVar9 != 0)) {
      uVar11 = 0;
      pcVar7 = strchr(param_5,(int)(char)bVar9);
      uVar6 = 1;
      if (pcVar7 != (char *)0x0) goto LAB_00114f57;
    }
    goto LAB_00114ef8;
  }
  if (*piVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    if (*piVar3 != 0x22) goto LAB_00114ef8;
  }
  if ((param_5 == (char *)0x0) || (bVar9 = *pbVar5, bVar9 == 0)) {
    *param_4 = uVar6;
    goto LAB_00114efd;
  }
LAB_00114f57:
  pcVar7 = strchr(param_5,(int)(char)bVar9);
  uVar10 = (uint)uVar11;
  if (pcVar7 == (char *)0x0) {
switchD_00114ff6_caseD_43:
    *param_4 = uVar6;
    uVar11 = (ulong)(uVar10 | 2);
    goto LAB_00114efd;
  }
  if ((((byte)((uint)bVar9 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar9 - 0x45) & 0x1f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar1 = pbVar5[1];
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        uVar12 = 0x400;
        iVar13 = (uint)(pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
        goto LAB_00114fda;
      }
      if (bVar1 != 0x42) goto LAB_00114fd0;
    }
    iVar13 = 2;
    uVar12 = 1000;
  }
  else {
LAB_00114fd0:
    iVar13 = 1;
    uVar12 = 0x400;
  }
LAB_00114fda:
  switch(bVar9) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar6) >> 0x40,0) == 0) {
      uVar6 = uVar6 << 10;
    }
    else {
LAB_001150ee:
      uVar11 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  default:
    goto switchD_00114ff6_caseD_43;
  case 0x45:
    iVar14 = 6;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00115095;
  case 0x47:
  case 0x67:
    uVar8 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar12),0);
    bVar16 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar12) >> 0x40,0) != 0;
    if (bVar16) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar15 = (uint)bVar16;
    uVar11 = SUB168(ZEXT816(uVar8) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(uVar8) * ZEXT816(uVar12) >> 0x40,0) != 0) {
      uVar15 = 1;
      uVar11 = 0xffffffffffffffff;
    }
    goto LAB_00115007;
  case 0x4b:
  case 0x6b:
    auVar2 = ZEXT816(uVar6);
    uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
    if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) goto LAB_001150ee;
    break;
  case 0x4d:
  case 0x6d:
    uVar11 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(uVar6) * ZEXT816(uVar12) >> 0x40,0) == 0) {
      uVar15 = 0;
    }
    else {
      uVar11 = 0xffffffffffffffff;
      uVar15 = 1;
    }
LAB_00115007:
    uVar6 = SUB168(ZEXT816(uVar11) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(uVar11) * ZEXT816(uVar12) >> 0x40,0) != 0) {
      uVar15 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    uVar11 = (ulong)(uVar10 | uVar15);
    break;
  case 0x50:
    iVar14 = 5;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00115095;
  case 0x54:
  case 0x74:
    iVar14 = 4;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00115095;
  case 0x59:
    iVar14 = 8;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00115095;
  case 0x5a:
    iVar14 = 7;
    uVar15 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar12),0);
      if (SUB168(auVar2 * ZEXT816(uVar12) >> 0x40,0) != 0) {
        uVar15 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_00115095:
    uVar11 = (ulong)(uVar10 | uVar15);
    break;
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar6) >> 0x40,0) != 0) goto LAB_001150ee;
    uVar6 = uVar6 << 9;
    break;
  case 99:
    break;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar6) >> 0x40,0) != 0) goto LAB_001150ee;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar13;
  bVar9 = pbVar5[iVar13];
  *param_4 = uVar6;
  if (bVar9 != 0) {
    uVar11 = (ulong)((uint)uVar11 | 2);
  }
LAB_00114efd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulong FUN_00115240(uint param_1,char **param_2)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x5f;
    return 0xffffffff;
  }
  bVar5 = param_1 == 10;
  if (bVar5) {
    lVar2 = 10;
    pcVar3 = *param_2;
    pcVar4 = "unlabeled";
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      freecon(*param_2);
      *param_2 = (char *)0x0;
      piVar1 = __errno_location();
      *piVar1 = 0x3d;
      return 0xffffffff;
    }
  }
  return (ulong)param_1;
}



void FUN_001152b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = getfilecon();
  FUN_00115240((ulong)uVar1,param_2);
  return;
}



void FUN_001152d0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = lgetfilecon();
  FUN_00115240((ulong)uVar1,param_2);
  return;
}



void FUN_001152f0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = fgetfilecon();
  FUN_00115240((ulong)uVar1,param_2);
  return;
}



size_t FUN_00115310(uint *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (uint *)0x0) {
    param_1 = &local_34;
  }
  sVar2 = mbrtowc((wchar_t *)param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (param_3 != 0)) {
    cVar1 = FUN_0010d830(0);
    if (cVar1 == '\0') {
      sVar2 = 1;
      *param_1 = (uint)*param_2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_001153a0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  __fprintf_chk(stderr,1,0x11ab90,uVar1);
                    // WARNING: Subroutine does not return
  exit(exit_failure);
}



void FUN_001153e0(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
                    // WARNING: Could not recover jumptable at 0x001153ed. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x38))(param_2);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x001153f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x48));
  return;
}



void FUN_00115400(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
                    // WARNING: Could not recover jumptable at 0x0011540d. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x40))(param_2);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00115414. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
  return;
}



undefined8 FUN_00115420(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = 0xf;
    param_3 = 0x10;
  }
  else {
    lVar5 = param_3 + -1;
  }
  param_1[6] = lVar5;
  if (param_2 == 0) {
    param_2 = 0xfe0;
  }
  *param_1 = param_2;
  plVar4 = param_1;
  plVar1 = (long *)FUN_001153e0();
  *(long **)(param_1 + 1) = plVar1;
  if (plVar1 != (long *)0x0) {
    uVar3 = -param_3 & (long)plVar1 + lVar5 + 0x10;
    lVar5 = *param_1;
    param_1[2] = uVar3;
    param_1[3] = uVar3;
    *plVar1 = lVar5 + (long)plVar1;
    param_1[4] = lVar5 + (long)plVar1;
    plVar1[1] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
    return 1;
  }
  (*(code *)obstack_alloc_failed_handler)();
  *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) & 0xfe;
  plVar4[7] = param_4;
  plVar4[8] = param_5;
  uVar2 = FUN_00115420();
  return uVar2;
}



void _obstack_begin(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  FUN_00115420();
  return;
}



void _obstack_begin_1(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_6;
  FUN_00115420();
  return;
}



ulong * _obstack_newchunk(ulong **param_1,ulong param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong *__n;
  ulong *__dest;
  ulong **ppuVar4;
  
  __n = (ulong *)((long)param_1[3] - (long)param_1[2]);
  puVar1 = param_1[1];
  __dest = (ulong *)(param_2 + (long)__n + (long)param_1[6]);
  puVar3 = (ulong *)((long)__dest + ((ulong)__n >> 3) + 100);
  if (__dest <= *param_1) {
    __dest = *param_1;
  }
  if (puVar3 <= __dest) {
    puVar3 = __dest;
  }
  ppuVar4 = param_1;
  if ((CARRY8(param_2,(ulong)__n) == false) &&
     (CARRY8(param_2 + (long)__n,(ulong)param_1[6]) == false)) {
    __dest = puVar3;
    ppuVar2 = (ulong **)FUN_001153e0();
    if (ppuVar2 != (ulong **)0x0) {
      *(ulong ***)(param_1 + 1) = ppuVar2;
      ppuVar2[1] = puVar1;
      param_1[4] = (ulong *)((long)ppuVar2 + (long)puVar3);
      *ppuVar2 = (ulong *)((long)ppuVar2 + (long)puVar3);
      __dest = (ulong *)((long)((long)ppuVar2 + 0x10) + (long)param_1[6] & ~(ulong)param_1[6]);
      puVar3 = (ulong *)memcpy(__dest,param_1[2],(size_t)__n);
      if ((*(byte *)(param_1 + 10) & 2) == 0) {
        puVar3 = (ulong *)(~(ulong)param_1[6] & (long)((long)puVar1 + 0x10U) + (long)param_1[6]);
        if (param_1[2] == puVar3) {
          ppuVar2[1] = (ulong *)puVar1[1];
          puVar3 = (ulong *)FUN_00115400(param_1,puVar1);
        }
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd;
      param_1[2] = __dest;
      param_1[3] = (ulong *)((long)__n + (long)__dest);
      return puVar3;
    }
  }
  (*(code *)obstack_alloc_failed_handler)();
  puVar3 = ppuVar4[1];
  if (puVar3 != (ulong *)0x0) {
    while ((__dest <= puVar3 || ((ulong *)*puVar3 < __dest))) {
      puVar3 = (ulong *)puVar3[1];
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0;
      }
    }
    return (ulong *)1;
  }
  return puVar3;
}



ulong * _obstack_allocated_p(long param_1,ulong *param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 == (ulong *)0x0) {
    return puVar1;
  }
  while ((param_2 <= puVar1 || ((ulong *)*puVar1 < param_2))) {
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0;
    }
  }
  return (ulong *)1;
}



void _obstack_free(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = *(ulong **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (ulong *)0x0) {
      if (param_2 == (ulong *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      abort();
    }
    if ((puVar1 < param_2) && (puVar2 = (ulong *)*puVar1, param_2 <= puVar2)) break;
    puVar1 = (ulong *)puVar1[1];
    FUN_00115400(param_1);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  *(ulong **)(param_1 + 0x18) = param_2;
  *(ulong **)(param_1 + 0x10) = param_2;
  *(ulong **)(param_1 + 0x20) = puVar2;
  *(ulong **)(param_1 + 8) = puVar1;
  return;
}



long _obstack_memory_used(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = 0;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  do {
    lVar2 = *plVar3 - (long)plVar3;
    plVar3 = (long *)plVar3[1];
    lVar1 = lVar1 + lVar2;
  } while (plVar3 != (long *)0x0);
  return lVar1;
}



void FUN_001156c0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    setenv("TZ",param_1,1);
    return;
  }
  unsetenv("TZ");
  return;
}



void FUN_001156f0(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*param_1;
    free(param_1);
    param_1 = plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}



ulong FUN_00115720(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  
  piVar2 = __errno_location();
  iVar4 = *piVar2;
  lVar3 = param_1 + 9;
  if (*(char *)(param_1 + 8) == '\0') {
    lVar3 = 0;
  }
  iVar1 = FUN_001156c0(lVar3);
  if (iVar1 == 0) {
    tzset();
  }
  else {
    iVar4 = *piVar2;
  }
  FUN_001156f0(param_1);
  *piVar2 = iVar4;
  return (ulong)(iVar1 == 0);
}



undefined8 * FUN_00115780(char *param_1)

{
  ulong __n;
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined8 *)malloc(0x80);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 0;
      return puVar2;
    }
  }
  else {
    sVar1 = strlen(param_1);
    __n = sVar1 + 1;
    uVar3 = 0x76;
    if (0x75 < __n) {
      uVar3 = __n;
    }
    puVar2 = (undefined8 *)malloc(uVar3 + 0x11 & 0xfffffffffffffff8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 1;
      memcpy((void *)((long)puVar2 + 9),param_1,__n);
      *(undefined *)((long)puVar2 + sVar1 + 10) = 0;
    }
  }
  return puVar2;
}



undefined8 FUN_00115810(long *param_1,char *param_2)

{
  ulong __n;
  char *__s2;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  int *piVar5;
  char *__s1;
  
  __s2 = *(char **)(param_2 + 0x30);
  if ((__s2 != (char *)0x0) && ((__s2 < param_2 || (param_2 + 0x38 <= __s2)))) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 == '\0') {
      __s1 = "";
    }
    else {
      while (iVar2 = strcmp(__s1,__s2), iVar2 != 0) {
        while( true ) {
          if ((*__s1 == '\0') &&
             (((char *)((long)param_1 + 9) != __s1 || (*(char *)(param_1 + 1) == '\0')))) {
            sVar3 = strlen(__s2);
            __n = sVar3 + 1;
            if (~(ulong)(__s1 + -(long)(char *)((long)param_1 + 9)) < __n) {
              piVar5 = __errno_location();
              *piVar5 = 0xc;
              return 0;
            }
            if (__s1 + -(long)(char *)((long)param_1 + 9) + __n < (char *)0x77) {
              memcpy(__s1,__s2,__n);
              __s1[sVar3 + 1] = '\0';
            }
            else {
              lVar4 = FUN_00115780(__s2);
              *param_1 = lVar4;
              if (lVar4 == 0) {
                return 0;
              }
              *(undefined *)(lVar4 + 8) = 0;
              __s1 = (char *)(lVar4 + 9);
            }
            goto LAB_001158b7;
          }
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0)) break;
          __s1 = (char *)((long)plVar1 + 9);
          iVar2 = strcmp(__s1,__s2);
          param_1 = plVar1;
          if (iVar2 == 0) goto LAB_001158b7;
        }
      }
    }
LAB_001158b7:
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
}



long FUN_00115950(long param_1)

{
  int iVar1;
  char *__s2;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      iVar1 = strcmp((char *)(param_1 + 9),__s2);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  lVar2 = FUN_00115780(__s2);
  if (lVar2 != 0) {
    lVar4 = 0;
    if (*(char *)(param_1 + 8) != '\0') {
      lVar4 = param_1 + 9;
    }
    iVar1 = FUN_001156c0(lVar4);
    if (iVar1 == 0) {
      tzset();
    }
    else {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      if (lVar2 != 1) {
        FUN_001156f0(lVar2);
      }
      *piVar3 = iVar1;
      lVar2 = 0;
    }
  }
  return lVar2;
}



void FUN_00115a30(long param_1)

{
  if (param_1 != 1) {
    FUN_001156f0();
    return;
  }
  return;
}



tm * FUN_00115a40(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = FUN_00115950();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 == (tm *)0x0) || (cVar1 = FUN_00115810(param_1,param_3), cVar1 == '\0')) {
      if (lVar2 != 1) {
        FUN_00115720(lVar2);
      }
    }
    else {
      if ((lVar2 == 1) || (cVar1 = FUN_00115720(lVar2), cVar1 != '\0')) {
        return param_3;
      }
    }
  }
  return (tm *)0;
}



time_t FUN_00115af0(long param_1,tm *param_2)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  time_t tVar4;
  long in_FS_OFFSET;
  time_t local_60;
  tm local_58;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    tVar4 = timegm(param_2);
    goto LAB_00115b6e;
  }
  lVar2 = FUN_00115950();
  if (lVar2 != 0) {
    local_60 = mktime(param_2);
    if (local_60 == -1) {
      ptVar3 = localtime_r(&local_60,&local_58);
      if (ptVar3 != (tm *)0x0) {
        if (((((param_2->tm_isdst == 0) == (local_58.tm_isdst == 0)) || (param_2->tm_isdst < 0)) ||
            (local_58.tm_isdst < 0)) &&
           ((param_2->tm_sec ^ local_58.tm_sec | param_2->tm_min ^ local_58.tm_min |
             param_2->tm_hour ^ local_58.tm_hour | param_2->tm_mday ^ local_58.tm_mday |
             param_2->tm_mon ^ local_58.tm_mon | param_2->tm_year ^ local_58.tm_year) == 0))
        goto LAB_00115b3b;
      }
    }
    else {
LAB_00115b3b:
      cVar1 = FUN_00115810(param_1,param_2);
      if (cVar1 == '\0') {
        local_60 = -1;
      }
    }
    tVar4 = local_60;
    if ((lVar2 == 1) || (cVar1 = FUN_00115720(lVar2), tVar4 = local_60, cVar1 != '\0'))
    goto LAB_00115b6e;
  }
  tVar4 = -1;
LAB_00115b6e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return tVar4;
}



undefined8 FUN_00115c40(int param_1)

{
  if (param_1 == 0x16) {
    return 0;
  }
  if (param_1 < 0x17) {
    if (param_1 == 0x10) {
      return 0;
    }
  }
  else {
    if (param_1 == 0x26) {
      return 0;
    }
    if (param_1 == 0x5f) {
      return 0;
    }
  }
  return 1;
}



ulong FUN_00115c70(uint *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_001161a0(param_1);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar3 == 0) {
      piVar4 = __errno_location();
      *piVar4 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar3 != 0) && (uVar3 = 0xffffffff, lVar2 == 0)) {
    piVar4 = __errno_location();
    return (ulong)-(uint)(*piVar4 != 9);
  }
  return uVar3;
}



void FUN_00115cf0(void)

{
  long lVar1;
  
  lVar1 = FUN_0010cdb0();
  if (lVar1 != 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_001146d0();
}



ulong FUN_00115d10(char *param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar2 = (uVar2 << 9 | uVar2 >> 0x37) + (long)cVar1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    return uVar2 % param_2;
  }
  return 0;
}



char * FUN_00115d50(void)

{
  char cVar1;
  byte bVar2;
  int __fd;
  uint uVar3;
  char *__s1;
  size_t sVar4;
  char *__s;
  size_t __n;
  FILE *__stream;
  byte *pbVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  char *__file;
  size_t __size;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  char *__ptr;
  long in_FS_OFFSET;
  bool bVar13;
  long local_d8;
  uint local_b8 [16];
  uint local_78 [14];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s1 = nl_langinfo(0xe);
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  __s = DAT_00321558;
  if (DAT_00321558 != (char *)0x0) goto LAB_00115dba;
  __s = getenv("CHARSETALIASDIR");
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    __s = "/usr/lib/x86_64-linux-gnu";
    __size = 0x28;
    sVar4 = 0x1a;
    __n = 0x19;
LAB_00115ea8:
    __file = (char *)malloc(__size);
    if (__file != (char *)0x0) {
      memcpy(__file,__s,__n);
      __file[__n] = '/';
      goto LAB_00115ec9;
    }
  }
  else {
    __n = strlen(__s);
    if (__n == 0) {
      __size = 0xe;
    }
    else {
      if (__s[__n - 1] != '/') {
        __size = __n + 0xf;
        sVar4 = __n + 1;
        goto LAB_00115ea8;
      }
      __size = __n + 0xe;
    }
    __file = (char *)malloc(__size);
    if (__file != (char *)0x0) {
      memcpy(__file,__s,__n);
      sVar4 = __n;
LAB_00115ec9:
      puVar11 = (undefined8 *)(__file + sVar4);
      *puVar11 = 0x2e74657372616863;
      *(undefined4 *)(puVar11 + 1) = 0x61696c61;
      *(undefined2 *)((long)puVar11 + 0xc) = 0x73;
      __fd = open(__file,0x20000);
      if (-1 < __fd) {
        __stream = fdopen(__fd,"r");
        local_d8 = 0;
        if (__stream != (FILE *)0x0) {
          __s = (char *)0x0;
LAB_00115f61:
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar5) goto LAB_001160ba;
          do {
            *(byte **)&__stream->_IO_read_ptr = pbVar5 + 1;
            uVar10 = (ulong)*pbVar5;
            __ptr = __s;
            while( true ) {
              __fd = (int)uVar10;
              __s = __ptr;
              if ((__fd - 9U < 2) || (__fd == 0x20)) goto LAB_00115f61;
              if (__fd == 0x23) goto LAB_00116109;
              ungetc(__fd,__stream);
              __fd = fscanf(__stream,"%50s %50s",local_b8);
              puVar8 = local_b8;
              if (__fd < 2) goto LAB_001160cd;
              do {
                puVar7 = puVar8;
                uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
                _bVar2 = uVar3 & 0x80808080;
                bVar2 = (byte)_bVar2;
                puVar8 = puVar7 + 1;
              } while (_bVar2 == 0);
              bVar13 = (uVar3 & 0x8080) == 0;
              if (bVar13) {
                bVar2 = (byte)(_bVar2 >> 0x10);
              }
              if (bVar13) {
                puVar8 = (uint *)((long)puVar7 + 6);
              }
              lVar9 = (long)puVar8 + ((-3 - (ulong)CARRY1(bVar2,bVar2)) - (long)local_b8);
              puVar8 = local_78;
              do {
                puVar7 = puVar8;
                uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
                _bVar2 = uVar3 & 0x80808080;
                bVar2 = (byte)_bVar2;
                puVar8 = puVar7 + 1;
              } while (_bVar2 == 0);
              bVar13 = (uVar3 & 0x8080) == 0;
              if (bVar13) {
                bVar2 = (byte)(_bVar2 >> 0x10);
              }
              if (bVar13) {
                puVar8 = (uint *)((long)puVar7 + 6);
              }
              lVar12 = (long)puVar8 + ((-3 - (ulong)CARRY1(bVar2,bVar2)) - (long)local_78);
              lVar6 = lVar9 + lVar12;
              if (local_d8 == 0) {
                __s = (char *)malloc(lVar6 + 3);
              }
              else {
                lVar6 = lVar6 + local_d8;
                __s = (char *)realloc(__ptr,lVar6 + 3);
              }
              local_d8 = lVar6 + 2;
              if (__s == (char *)0x0) {
                __s = "";
                free(__ptr);
                FUN_001161a0(__stream);
                goto LAB_00115f0b;
              }
              memcpy(__s + (-2 - lVar9) + (local_d8 - lVar12),local_b8,lVar9 + 1);
              memcpy(__s + (local_d8 - lVar12) + -1,local_78,lVar12 + 1);
              pbVar5 = (byte *)__stream->_IO_read_ptr;
              if (pbVar5 < __stream->_IO_read_end) break;
LAB_001160ba:
              uVar3 = __uflow((_IO_FILE *)__stream);
              uVar10 = (ulong)uVar3;
              __ptr = __s;
              if (uVar3 == 0xffffffff) goto LAB_001160cd;
            }
          } while( true );
        }
        close(__fd);
      }
      goto LAB_00115f04;
    }
  }
  __s = "";
  DAT_00321558 = __s;
LAB_00115dba:
  do {
    cVar1 = *__s;
    if (cVar1 == '\0') {
LAB_00115dec:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return __s1;
    }
    __fd = strcmp(__s1,__s);
    if ((__fd == 0) || ((cVar1 == '*' && (__s[1] == '\0')))) {
      __size = strlen(__s);
      __s1 = __s + __size + 1;
      goto LAB_00115dec;
    }
    __size = strlen(__s);
    sVar4 = strlen(__s + __size + 1);
    __s = __s + __size + 1 + sVar4 + 1;
  } while( true );
LAB_00116109:
  do {
    pbVar5 = (byte *)__stream->_IO_read_ptr;
    if (pbVar5 < __stream->_IO_read_end) {
      *(byte **)&__stream->_IO_read_ptr = pbVar5 + 1;
      uVar3 = (uint)*pbVar5;
      bVar13 = true;
    }
    else {
      uVar3 = __uflow((_IO_FILE *)__stream);
      bVar13 = uVar3 != 0xffffffff;
    }
  } while ((uVar3 != 10) && (bVar13));
  if (uVar3 == 0xffffffff) goto LAB_001160cd;
  goto LAB_00115f61;
LAB_001160cd:
  FUN_001161a0(__stream);
  if (local_d8 == 0) {
LAB_00115f04:
    __s = "";
  }
  else {
    __s[local_d8] = '\0';
  }
LAB_00115f0b:
  free(__file);
  DAT_00321558 = __s;
  goto LAB_00115dba;
}



undefined8 FUN_001161a0(FILE *param_1)

{
  int __fd;
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  __off_t _Var3;
  undefined4 extraout_var_00;
  undefined8 uVar4;
  
  __fd = fileno(param_1);
  if (-1 < __fd) {
    __fd = __freading();
    if (__fd != 0) {
      __fd = fileno(param_1);
      _Var3 = lseek(__fd,0,1);
      if (_Var3 == -1) goto LAB_00116207;
    }
    __fd = FUN_00116220(param_1);
    if (__fd != 0) {
      piVar2 = __errno_location();
      __fd = *piVar2;
      iVar1 = fclose(param_1);
      uVar4 = CONCAT44(extraout_var,iVar1);
      if (__fd != 0) {
        *piVar2 = __fd;
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
LAB_00116207:
  __fd = fclose(param_1);
  return CONCAT44(extraout_var_00,__fd);
}



void FUN_00116220(FILE *param_1)

{
  int iVar1;
  
  if (((param_1 != (FILE *)0x0) && (iVar1 = __freading(), iVar1 != 0)) &&
     ((param_1->_flags & 0x100U) != 0)) {
    FUN_00116260(param_1,0,1);
  }
  fflush(param_1);
  return;
}



__off_t FUN_00116260(FILE *param_1,__off_t param_2,int param_3)

{
  int __fd;
  undefined4 extraout_var;
  __off_t _Var1;
  
  if (((param_1->_IO_read_end == param_1->_IO_read_ptr) &&
      (param_1->_IO_write_ptr == param_1->_IO_write_base)) &&
     (param_1->_IO_save_base == (char *)0x0)) {
    __fd = fileno(param_1);
    _Var1 = lseek(__fd,param_2,param_3);
    if (_Var1 != -1) {
      param_1->_flags = param_1->_flags & 0xffffffef;
      param_1->_offset = _Var1;
      _Var1 = 0;
    }
    return _Var1;
  }
  __fd = fseeko(param_1,param_2,param_3);
  return CONCAT44(extraout_var,__fd);
}



void FUN_001162c0(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void FUN_00116330(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00116360)

void FUN_00116340(undefined8 param_1)

{
  __cxa_atexit(param_1,0,PTR_LOOP_00320008);
  return;
}



void _fini(void)

{
  return;
}



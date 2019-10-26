typedef unsigned long  size_t;
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

unsigned long  fib(void)
{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;

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
    printf("%d\n",(unsigned long )local_14);
    local_10 = local_10 + 1;
  }
  return 0;
}

void arith(void)
{
  printf("Sum = %d\n",10);
  printf("Difference = %d\n",0);
  printf("Multiplication = %d\n",0x19);
  //printf((char *)0x3ff0000000000000,"Division = %.2f\n");
  return;
}

unsigned long  conv(void)
{
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;

  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts("Enter an integer in decimal number system");
scanf(&local_1c);
  printf("%d in binary number system is:\n",(unsigned long )local_1c);
  local_18 = 0x1f;
  while (-1 < local_18) {
    local_14 = (int)local_1c >> ((unsigned char )local_18 & 0x1f);
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
    __stack_chk_fail();
  }
  return 0;
}

unsigned long  binarySearch(void)
{
  long in_FS_OFFSET;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8 [102];
  long local_10;

  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts("Enter number of elements");
scanf(&local_1c0);
  printf("Enter %d integers\n",(unsigned long )local_1c0);
  local_1b8 = 0;
  while (local_1b8 < (int)local_1c0) {
scanf(local_1a8 + (long)local_1b8,(long)local_1b8 * 4);
    local_1b8 = local_1b8 + 1;
  }
  puts("Enter value to find");
scanf(&local_1bc);
  local_1b4 = 0;
  local_1b0 = local_1c0 - 1;
  local_1ac = local_1b0;
  do {
    local_1ac = local_1ac / 2;
    if (local_1b0 < local_1b4) {
LAB_00100c5b:
      if (local_1b0 < local_1b4) {
        printf("Not found! %d isn\'t present in the list.\n",(unsigned long )local_1bc);
      }
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
        __stack_chk_fail();
      }
      return 0;
    }
    if ((int)local_1a8[local_1ac] < (int)local_1bc) {
      local_1b4 = local_1ac + 1;
    }
    else {
      if (local_1a8[local_1ac] == local_1bc) {
        printf("%d found at location %d.\n",(unsigned long )local_1bc,(unsigned long )(local_1ac + 1));
        goto LAB_00100c5b;
      }
      local_1b0 = local_1ac + -1;
    }
    local_1ac = local_1b0 + local_1b4;
  } while( 1 );
}

unsigned long  stringSort(void)
{
  size_t sVar1;
  long lVar2;
  unsigned long  *puVar3;
  long in_FS_OFFSET;
  char local_169;
  int local_168;
  int local_164;
  unsigned long  local_158 [14];
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
scanf(local_e8);
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
    __stack_chk_fail();
  }
  return 0;
}

unsigned long  heapTest(void)
{
  char cVar1;
  unsigned long  *__ptr;
  char *__ptr_00;
  unsigned long  uVar2;
  char *pcVar3;
  unsigned char  bVar4;

  bVar4 = 0;
  __ptr = (unsigned long  *)malloc(0xf);
  *__ptr = 0x6c6169726f747574;
  *(unsigned int  *)(__ptr + 1) = 0x696f7073;
  *(unsigned short  *)((long)__ptr + 0xc) = 0x746e;
  *(unsigned char *)((long)__ptr + 0xe) = 0;
  printf("String = %s,  Address = %u\n",__ptr,__ptr);
  __ptr_00 = (char *)realloc(__ptr,0x19);
  uVar2 = 0xffffffffffffffff;
  pcVar3 = __ptr_00;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (unsigned long )bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  *(unsigned int  *)(__ptr_00 + (~uVar2 - 1)) = 0x6d6f632e;
  (__ptr_00 + (~uVar2 - 1))[1] = 0;
  printf("String = %s,  Address = %u\n",__ptr_00,__ptr_00);
  free(__ptr_00);
  return 0;
}

void structTest(void)
{
  long in_FS_OFFSET;
  unsigned long  local_e8;
  unsigned int  local_e0;
  unsigned short  local_dc;
  unsigned long  local_b6;
  unsigned char local_ae;
  unsigned long  local_84;
  unsigned long  local_7c;
  unsigned int  local_74;
  unsigned short  local_70;
  unsigned char local_6e;
  int local_20;
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
  printf("Book 1 book_id : %d\n",(unsigned long )local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

unsigned long  main(void)
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


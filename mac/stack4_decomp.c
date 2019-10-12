#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

// WARNING: Removing unreachable block (ram,0x000100000e91)

int main(int param_1,char** param_2)

{
  int local_74;
  int local_70;
  char local_58 [72];
  long local_10;
  
  //local_10 = *(long *)___stack_chk_guard;
  if (param_1 == 1) {
                    // WARNING: Subroutine does not return
    errx(1,"please specify an argument\n");
  }
  local_70 = 0;
  local_74 = 0;
  while (local_74 < 0x80) {
    local_70 = local_70 + 1;
    local_74 = local_74 + 1;
  }
  //___strncpy_chk(local_58,*(undefined8 *)(param_2 + 8),(long)local_70,0x40);
  printf("Try again, you got 0x%08x\n",0);
  //if (*(long *)___stack_chk_guard != local_10) {
  //                  // WARNING: Subroutine does not return
  //  ___stack_chk_fail();
  //}
  return 0;
}


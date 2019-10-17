#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char** param_1, int param_2)
{
  long in_FS_OFFSET;
  char** local_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1 == 1) {
    errx(param_1,"please specify an argument\n");
  }
  __strncpy_chk(local_58,*(char *)(param_2 + 8),0x80,0x40);
  __printf_chk(1,"Try again, you got 0x%08x\n",0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}


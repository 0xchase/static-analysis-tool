#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int param_1, char** param_2)
{
  long in_FS_OFFSET;
  char** local_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1 == 1) {
    errx(param_1,"please specify an argument\n");
  }
  strncpy(local_58,*(char *)(param_2 + 8),0x80);
  return 0;
}


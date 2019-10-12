#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int param_1,char** param_2)

{
  char local_58 [76];
  int local_c;
  
  if (param_1 == 1) {
    errx(1,"please specify an argument\n");
  }
  local_c = 0;
  strcpy(local_58,*(char **)(param_2 + 8));
  if (local_c == 0x61626364) {
    puts("you have correctly got the variable to the right value");
  }
  else {
    printf("Try again, you got 0x%08x\n",(long)local_c);
  }
  return 0;
}

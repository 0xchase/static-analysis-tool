
int fib(void)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 1;
  printf("First %d terms of Fibonacci series are:\n",0x1e);
  local_18 = 0;
  while ((int)local_18 < 0x1e) {
    if ((int)local_18 < 2) {
      local_14 = local_18;
    }
    else {
      local_14 = local_10 + local_c;
      local_c = local_10;
      local_10 = local_14;
    }
    printf("%d\n",(long)local_14);
    local_18 = local_18 + 1;
  }
  return 0;
}



int main(void)

{
  fib();
  return 0;
}

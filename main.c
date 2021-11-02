#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc <= 3)
  {
    printf("arg must >= 2\n");
    return 1;
  }

  printf("%s, %s", argv[1], argv[2]);

  return 0;
}

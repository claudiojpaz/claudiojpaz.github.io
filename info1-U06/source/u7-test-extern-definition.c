#include <stdio.h>

extern int a;

void imp_x (void)
{
  printf("%d\n", a++);
}

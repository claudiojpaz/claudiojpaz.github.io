#include <stdio.h>

void cuadrado (int *p)
{
  *p *= *p;
}

int main (void)
{
  int n = 4;

  cuadrado(&n);

  printf("%d\n", n);

  return 0;
}

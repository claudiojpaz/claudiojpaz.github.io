#include <stdio.h>

void addone (int *p)
{
  *p += 1;
}

int main (void)
{
  int n = 3;

  addone(&n);


  printf("%d\n", n);

  return 0;
}

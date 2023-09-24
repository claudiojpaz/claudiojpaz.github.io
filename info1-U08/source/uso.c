#include <stdio.h>

int main (void)
{
  int vec[16];
  int *p = &vec[0];

  p = &vec[0];
  printf("%p\n", p);
  p = vec;
  printf("%p\n", p);

  return 0;
}

#include <stdio.h>

int main (void)
{
  int var;
  const int *p = &var;

  var = 42;
  printf("%d\n", *p);

  return 0;
}
#include <stdio.h>

int main (void)
{
  int var;
  const int *p = &var;

  var = 42;
  printf("%d\n", *p);

  return 0;
}

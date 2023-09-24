#include <stdio.h>

int main (void)
{
  int i;
  const char *p[3] = {"manzana", "banana", "naranja"};
  char *otra = "Esto no es fruta, papi";

  *(p+1) = otra;

  for ( i=0; i < 3; i++)
    printf("%s\n", p[i]);


  return 0;
}


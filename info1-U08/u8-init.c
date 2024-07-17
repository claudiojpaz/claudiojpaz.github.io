#include <stdio.h>

int main (void)
{
  int a[5] = {0,1,2,3,4};
  int *pa = NULL;
  int i;

  pa = a;

  printf("%d\n", NULL);

  for (i=0; i<5; i++) {
    printf("%d\n", *(pa+i) );
  }

  return 0;
}


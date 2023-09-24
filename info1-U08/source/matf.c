#include <stdio.h>

void f (int vec[10])
{
  for (int i = 0; i < 10; i++)
    printf("%d ", vec[i]);

  printf("\n");
}

int main (void)
{
  int vec[10] = {0,1,2,3,4,5,6,7,8,9};

  f(vec);

  for (int i = 0; i < 10; i++)
    printf("%d ", vec[i]);

  return 0;
}


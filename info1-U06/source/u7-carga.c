#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

void carga (int x[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    x[i] = 1+rand()%10;

}

int main (void) {
  int a[N] = {0};
  int i, n = 10;

  srand(time(0));

  carga(a, n);

  for (i = 0; i < n; i++)
    printf("%d\n",a[i]);

  return 0;
}

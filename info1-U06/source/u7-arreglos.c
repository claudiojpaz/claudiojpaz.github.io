#include <stdio.h>

#define N 1000

void inc (int x[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    x[i] = i;

}

int main (void) {
  int a[N] = {0};
  int i, n;

  inc(a, n);

  for (i = 0; i < n; i++)
    printf("%d\n",a[i]);

  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

void carga (int x[][N], int n)
{
  int i,j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      x[i][j] = 1+rand()%10;

}

int main (void) {
  int a[N][N] = {{0}};
  int i,j, n = 3;

  srand(time(0));

  carga(a, n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      printf("%5d",a[i][j]);
    printf("\n");
  }


  return 0;
}


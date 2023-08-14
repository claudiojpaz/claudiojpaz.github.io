#include <stdio.h>

#define N 3

int main (void) {
  int i,j;
  int mat[3][3] = {0};

  for (int i = 0; i < N; i++ )
    for (int j = 0; j < N; j++ ) {
      printf("Ingrese el elemento (%d,%d): ", i, j);
      scanf("%d", &mat[i][j]);
    }

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}

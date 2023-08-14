#include <stdio.h>

#define N 3

int main (void) {
  int i,j;
  int mat[3][3] = {0};

  for (int i = 0; i < N; i++ )
    mat[i][i] = 1;

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}

#include <stdio.h>
#define N 4
#define M 3

int main (void) {
  int i,j,c=0;
  int mat[N][M];

  for ( i = 0; i < N; i++ )
    for ( j = 0; j < M; j++ )
      mat[i][j] = c++;


  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < M; j++ )
      printf("%5d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}

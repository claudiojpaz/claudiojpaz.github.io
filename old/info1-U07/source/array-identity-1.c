#include <stdio.h>

int main (void) {
  int i,j;
  int mat[3][3] = {0};

  /* for ( i = 0; i < 3; i++ ) */
    /* for ( j = 0; j < 3; j++ ) */
      /* mat[i][j] = 3; */

  mat[1][1] = 1;

  for ( i = 0; i < 3; i++ ) {
    for ( j = 0; j < 3; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}

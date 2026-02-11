#include <stdio.h>

int main (void)
{
  int mat[3][2] = {{1,2},
                   {10,20},
                   {100,200}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++)
      printf("%6d", mat[i][j]);
    printf("\n");
  }
  printf("\n");

  printf("%p %p\n", &mat[0][0], &mat[0][0] + 1);
  printf("%p %p\n", &mat[0], &mat[0] + 1);
  printf("%p %p\n", mat,  mat + 1);
  printf("%p %p\n", &mat, &mat + 1);

  printf("\n");

  int *p = mat[0];
  for (int i = 0; i < 3*2; i++)
    printf("%6d   %p\n", *(p+i), p+i);

  return 0;
}


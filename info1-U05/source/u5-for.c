#include <stdio.h>
// u5-for.c

int main (void) {
  int i, j;

  for ( i = 0 , j = 10; i < j ; i++, j-- ) {
    printf("%d %d\n", i, j);
  }

  return 0;
}


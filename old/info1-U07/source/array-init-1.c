#include <stdio.h>

int main (void) {
  int i;
  int n = 1<<21;
  int vec[n];

  for ( i = 0; i < 10; i++ )
    printf("%d\n", vec[i]);


  return 0;
}

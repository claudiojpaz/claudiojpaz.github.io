#include <stdio.h>
// u5-for-init-1.c

int main (void) {
  int i = 0;
  int a[5] = {0};

  for (i = 0; i < 5 ; i++ )
    printf("%d\n", a[i]);

  return 0;
}

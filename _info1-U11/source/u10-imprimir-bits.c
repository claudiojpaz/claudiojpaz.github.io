#include <stdio.h>

int main (void)
{
  char a = 10;
  unsigned char check = 1<<7;

  for (int i = 0; i < 8; i++ ) {
    printf("%d ", a&check?1:0);
    check >>= 1;
  }



  return 0;
}


#include <stdio.h>

void dec(int n)
{
  printf("%d\n", n);

  if (n > 1)
    dec(n-1);

}

int main (void) {

  dec(10);

  return 0;
}

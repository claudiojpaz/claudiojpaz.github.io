#include <stdio.h>

int fibo(int n)
{
  if (n == 1 || n == 0)
    return n;
  else
    return fibo(n-1) + fibo(n-2);

}

int main (void) {
  int i;

  for ( i = 0; i < 10; i++)
    printf("%d\n", fibo(i));

  return 0;
}


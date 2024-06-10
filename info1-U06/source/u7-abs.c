#include <stdio.h>
#include <math.h>

#include "u7-abs-definiciones.h"

int main (void)
{
  int n;
  float raiz;

  printf("Ingrese un número: ");
  scanf("%d", &n);

  raiz = sqrt(valor_absoluto(n));

  printf("%.5f\n", raiz);
  return 0;
}


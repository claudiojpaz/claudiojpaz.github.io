#include <stdio.h>

float media (int n1, int n2)
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}

int main (void) {
  int a,b;

  printf("Ingrese dos numeros: ");
  scanf("%d %d", &a, &b);

  printf("La media entre %d y %d es %.1f\n", a, b, media(a,b));

  return 0;
}


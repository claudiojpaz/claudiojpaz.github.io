#include <stdio.h>
// u3-clase-float.c

int main (void)
{
  float base, altura;
  float area;

  // printf("Ingrese la base y la altura: ");
  // scanf("%f %f", &base, &altura);

  printf("Ingrese la base: ");
  scanf("%f", &base);
  printf("Ingrese la altura: ");
  scanf("%f", &altura);

  area = base * altura / 2;

  printf("El area del triangulo es: %.2f cm2\n", area);

  return 0;
}


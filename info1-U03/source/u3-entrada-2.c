#include <stdio.h>
// u3-entrada-2.c

int main (void)
{
  char caracter1;
  char caracter2;

  printf("Ingrese un caracter: ");
  scanf(" %c", &caracter1);

  printf("Ingrese otro caracter: ");
  scanf(" %c", &caracter2);

  printf("ingresó %c y %c\n", caracter1, caracter2);

  return 0;
}


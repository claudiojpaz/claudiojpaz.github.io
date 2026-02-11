#include <stdio.h>

int main (void)
{
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("saludo.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  fgets(cadena, 80, fp);
  printf("%s\n", cadena);

  return 0;
}

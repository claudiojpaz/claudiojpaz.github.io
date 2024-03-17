#include <stdio.h>

int main (void)
{
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("u10-read-from-file-2.c", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  fgets(cadena, 80, fp);
  while (!feof(fp)) {
    printf("%s", cadena);
    fgets(cadena, 80, fp);
  }

  return 0;
}

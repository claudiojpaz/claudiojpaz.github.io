#include <stdio.h>

int main (void)
{
  FILE * fp;
  char cadena[80];

  fp = fopen("saludo.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }


  return 0;
}

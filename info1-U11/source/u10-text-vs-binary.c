#include <stdio.h>

int main (void)
{
  FILE * fpt, *fpb;
  char cadena[80] = "Texto Vs Binario";
  int numero = 1000000;

  fpt = fopen("archivo.txt", "w");
  fpb = fopen("archivo.bin", "wb");

  fprintf(fpt, "%s", cadena);
  fwrite(cadena, sizeof(cadena), 1, fpb);
  /*fprintf(fpt, "%d", numero);*/
  /*fwrite(&numero, sizeof(numero), 1, fpb);*/

  fclose(fpb);
  fclose(fpt);

  return 0;
}


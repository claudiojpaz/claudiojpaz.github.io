#include <stdio.h>

struct cuenta {
  int numero;
  char nombre[80];
  float saldo;
};

int main (void)
{
  FILE * fp;
  struct cuenta rec = {1, "Claudio Paz", 3.14};

  fp = fopen("archivo-struct.bin", "wb");

  fwrite(&rec, sizeof(rec), 1, fp);

  fclose(fp);

  return 0;
}


#include <stdio.h>

struct cuenta {
  int numero;
  char nombre[80];
  float saldo;
};

int main (void)
{
  FILE * fp;
  struct cuenta rec;

  fp = fopen("archivo.bin", "rb");

  fread(&rec, sizeof(rec), 1, fp);

  printf("Cuenta: %d\n", rec.numero);
  printf("Nombre: %s\n", rec.nombre);
  printf("Saldo %.2f\n", rec.saldo);

  fclose(fp);

  return 0;
}



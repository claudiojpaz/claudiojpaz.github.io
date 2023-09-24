#include <stdio.h>

void copiar (const char *p, char *q)
{
  for (int i = 0; *(p+i) != 0; i++)
    *(q+i) = *(p+i);
}

int main (void)
{
  char origen[] = "Hola, mundo!";
  char destino[80] = {0};

  copiar(origen, destino);

  printf("%s\n", destino);

  return 0;
}


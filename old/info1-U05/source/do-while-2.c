#include <stdio.h>

int main (void)
{
  int n;
  int nota;
  int notas;

  n = 0;
  do {
    do {
      printf("Ingrese la nota %d: " , n+1);
      scanf("%d", &nota);
    } while (nota < 0 || nota > 10);
    notas += nota;
    if ( nota != 0)
      n++;
  } while ( nota != 0);

  printf("promedio: %f\n", (float) notas/n);

  return 0;
}


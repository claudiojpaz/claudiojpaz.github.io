#include <stdio.h>

#define N 5

void carga (int * const, int);
void imprimir (const int *, int);

int main (void)
{
  int notas[N];

  carga(notas, N);
  imprimir(notas, N);

  return 0;
}

void imprimir (const int * const pnotas, int n)
{
  for (int i=0; i < N; i++)
    printf("%d\n", *(pnotas+i));
}

void carga (int * const pnotas, int n)
{
  int nota;
  for (int i=0; i < n; i++) {
    do {
      printf("Ingrese una calificación: ");
      scanf("%d", &nota);
    } while (nota<1||nota>10);
    *(pnotas+i) = nota;
  }
}


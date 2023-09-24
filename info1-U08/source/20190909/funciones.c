#include <stdio.h>

int suma(int a, int b)
{
  return a+b;
}

int resta(int a, int b)
{
  return a-b;
}

int producto(int a, int b)
{
  return a*b;
}

int division(int a, int b)
{
  if (b != 0)
    return a/b;

  return 0;
}


int main (void)
{
  int op;
  int n, m;

  int (*p[])(int, int) = {suma, resta, producto, division};

  do {
    printf("Ingrese 2 números: ");
    scanf("%d %d", &n, &m);

    printf("1-Suma\n");
    printf("2-Resta\n");
    printf("3-Producto\n");
    printf("4-División\n");
    printf("5-Salir\n");
    scanf("%d", &op);

    if (op > 0 && op < 5)
      printf("%d\n", (*p[op-1])(n,m));

  } while (op != 5);


  return 0;
}


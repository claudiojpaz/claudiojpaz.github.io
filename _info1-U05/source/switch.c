#include <stdio.h>

int main (void) {
  char op;
  int a=3, b=2;

  printf("Ingrese la operación (+,-,*,/): ");
  scanf(" %c", &op);

  switch (op) {
    case '+':
      printf("%d+%d=%d\n", a, b, a+b);
      break;
    case '-':
      printf("%d-%d=%d\n", a, b, a-b);
      break;
    case '/':
      printf("%d/%d=%d\n", a, b, a/b);
      break;
    default:
      printf("No hay Opción\n");
  }


  return 0;
}

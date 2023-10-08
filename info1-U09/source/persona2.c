#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
  float altura;
  float peso;
};

int main (void)
{
  struct persona empleados[5] = {{0, "claudio"}};

  empleados[0].nombre[0] = 'C';
  printf("Nombre: %s\n", empleados[1].nombre);

  return 0;
}


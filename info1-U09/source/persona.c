#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
  float altura;
  float peso;
};

int main (void)
{
  struct persona emp = {27377780, "claudio J. Paz"};


  emp.nombre[0] = 'C';
  printf("Nombre: %s\n", emp.nombre);

  return 0;
}


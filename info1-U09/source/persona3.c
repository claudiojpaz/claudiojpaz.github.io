#include <stdio.h>
#include <stdlib.h>

struct persona {
  int dni;
  char nombre[80];
  float altura;
  float peso;
};

int main (void)
{
  struct persona *p;
  int i;

  p = malloc (5*sizeof (struct persona));


  for(i=0; i<5; i++)
    scanf("%s", (p+i)->nombre);

  for(i=0; i<5; i++)
    printf("Nombre: %s\n", (*(p+i)).nombre);

  free(p);
  return 0;
}



#include <stdio.h>

int main (void)
{
  int nota;

  printf("Ingrese una nota: ");
  scanf("%d", &nota);

  if ( nota >= 6 )
    if ( nota >= 9 )
      printf("Aprobado\nExcelente\n");
  else
      printf("Aprobado\n");


  return 0;
}




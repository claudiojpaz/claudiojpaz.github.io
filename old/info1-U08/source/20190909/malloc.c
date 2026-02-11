#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int n;
  int i;
  int *p = NULL;

  printf("Cuantos elementos quiere: ");
  scanf("%d", &n);

  p = malloc (sizeof (*p) * n);

  for ( i=0; i<n; i++)
    *(p+i) = i*i;

  for ( i=0; i<n; i++)
    printf("%d\n", *(p+i));

  free(p);


  return 0;
}

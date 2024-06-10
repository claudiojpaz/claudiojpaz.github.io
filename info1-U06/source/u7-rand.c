#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
  long int i;
  int r;
  int dados[7] = {0};

  srand(time(0));

  for (i = 0; i < 36000; i++) {
    r = 1 + rand() % 6;
    dados[r]++;
  }

  for (i = 1; i <= 6; i++)
    printf("cara %ld: %d\n", i, dados[i]);

  return 0;
}

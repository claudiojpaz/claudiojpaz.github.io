#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void)
{
  struct punto_2d p1, p2 = {3,2};

  p1 = p2;

  if (p1==p2)
    printf("Ok!\n");

  return 0;
}



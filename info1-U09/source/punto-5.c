#include <stdio.h>

struct punto_2d {
  float x;
  float y;
} p1 = {5, 2};


int main (void)
{

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}


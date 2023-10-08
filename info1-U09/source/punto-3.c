#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

struct punto_3d {
  float x;
  float y;
};

int main (void)
{
  struct punto_2d p1, p2 = {3,2};
  struct punto_3d p3;

  p3 = p2;

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}


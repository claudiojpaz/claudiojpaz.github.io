#include <stdio.h>

struct {
  float x;
  float y;
} p1;


int main (void)
{

  p1.x = 3;
  p1.y = 2;

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}



#include <stdio.h>
#include <math.h>

typedef struct punto2D {
  float x;
  float y;
} p2D_t;

p2D_t suma2D (p2D_t p, p2D_t q)
{
  return (p2D_t) {p.x + q.x, p.y + q.y};
}

int main (void)
{
  p2D_t p1 = {3, 2}, p2 = {4, 5};
  p2D_t r;

  r = suma2D(p1, p2);

  printf("%.2f %.2f\n", r.x, r.y);

  return 0;
}



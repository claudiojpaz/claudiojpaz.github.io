#include <stdio.h>

typedef struct punto2D {
  float x;
  float y;
} p2D;

p2D suma2D (p2D p, p2D q)
{
  return (p2D) {p.x + q.x, p.y + q.y};
}

int main (void)
{
  p2D p1 = {3, 2}, p2 = {4, 5};
  p2D r;

  r = suma2D(p1, p2);

  printf("%.2f %.2f\n", r.x, r.y);

  return 0;
}





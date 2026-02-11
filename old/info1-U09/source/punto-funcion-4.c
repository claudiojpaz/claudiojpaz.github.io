#include <stdio.h>
#include <math.h>

struct punto2D {
  float x;
  float y;
};

struct punto2D suma2D (struct punto2D p, struct punto2D q)
{
  struct punto2D suma;

  suma.x = p.x + q.x;
  suma.y = p.y + q.y;

  return suma;
}

int main (void)
{
  struct punto2D p1 = {3, 2}, p2 = {4, 5};
  struct punto2D r;

  r = suma2D(p1, p2);

  printf("%.2f %.2f\n", r.x, r.y);

  return 0;
}




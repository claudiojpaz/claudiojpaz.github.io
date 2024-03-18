#include <stdio.h>

union char2bits {
  char byte;
  struct {
    unsigned char b0:1;
    unsigned char b1:1;
    unsigned char b2:1;
    unsigned char b3:1;
    unsigned char b4:1;
    unsigned char b5:1;
    unsigned char b6:1;
    unsigned char b7:1;
  } bits;
};

void imprimir_bits (char b);

int main (void)
{

  imprimir_bits(42);

  return 0;
}

void imprimir_bits (char b)
{
  union char2bits c2b;

  c2b.byte = b;

  printf("%d %d %d %d %d %d %d %d\n", c2b.bits.b7,c2b.bits.b6,c2b.bits.b5,c2b.bits.b4,
                                      c2b.bits.b3,c2b.bits.b2,c2b.bits.b1,c2b.bits.b0);
}

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
void imprimir_raya (char size);

int main (void)
{

  char a = 77;
  char b = 42;
  char c;

  printf("ADN\n");
  c = a & b;
  imprimir_bits(a);
  imprimir_bits(b);
  imprimir_raya(15);
  imprimir_bits(c);

  printf("\nOR\n");
  c = a | b;
  imprimir_bits(a);
  imprimir_bits(b);
  imprimir_raya(15);
  imprimir_bits(c);

  printf("\nXOR\n");
  c = a ^ b;
  imprimir_bits(a);
  imprimir_bits(b);
  imprimir_raya(15);
  imprimir_bits(c);
  printf("\nCOMPLEMENTO\n");

  c = ~a;
  imprimir_bits(a);
  imprimir_raya(15);
  imprimir_bits(c);

  printf("\nCORRIMIENTO Izq\n");
  c = 5 << 1;
  imprimir_bits(5);
  imprimir_raya(15);
  imprimir_bits(c);

  printf("\nCORRIMIENTO Der\n");
  c = 10 >> 1;
  imprimir_bits(10);
  imprimir_raya(15);
  imprimir_bits(c);

  printf("\nCORRIMIENTO 9 bits\n");
  c = 5 << 9;
  imprimir_bits(5);
  imprimir_raya(15);
  imprimir_bits(c);

  printf("\nCORRIMIENTO de Negativo\n");
  c = -128 >> 4;
  imprimir_bits(-128);
  imprimir_raya(15);
  imprimir_bits(c);

  return 0;
}

void imprimir_bits (char b)
{
  union char2bits c2b;

  c2b.byte = b;

  printf("%d %d %d %d %d %d %d %d\n", c2b.bits.b7,c2b.bits.b6,c2b.bits.b5,c2b.bits.b4,
                                      c2b.bits.b3,c2b.bits.b2,c2b.bits.b1,c2b.bits.b0);
}

void imprimir_raya (char size)
{
  for (int i = 0; i < size; i++ )
    printf("-");

  printf("\n");

}

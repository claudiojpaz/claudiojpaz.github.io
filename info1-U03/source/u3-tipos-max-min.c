#include <stdio.h>
#include <limits.h>
#include <float.h>

// u3-tipos-max-min.c

int main (void)
{
  printf("char             %20d\t%20d\n", CHAR_MIN, CHAR_MAX);
  printf("unsigned char    %20u\t%20u\n", 0, UCHAR_MAX);
  printf("short            %20d\t%20d\n", SHRT_MIN, SHRT_MAX);
  printf("unsigned short   %20u\t%20u\n", 0, USHRT_MAX);
  printf("int              %20d\t%20d\n", INT_MIN, INT_MAX);
  printf("unsigned int     %20u\t%20u\n", 0, UINT_MAX);
  printf("long             %20ld\t%20ld\n", LONG_MIN, LONG_MAX);
  printf("unsigned long    %20lu\t%20lu\n", 0L, ULONG_MAX);
  printf("float            %20.2e\t%20.2e\n", FLT_MIN, FLT_MAX);
  printf("double           %20.2e\t%20.2e\n", DBL_MIN, DBL_MAX);
  printf("long double      %20.2Le\t%20.2Le\n", __LDBL_MIN__,  __LDBL_MAX__);

  return 0;
}

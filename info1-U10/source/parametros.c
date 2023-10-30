#include <stdio.h>

int main (int argc, char **argv)
{
  FILE * fp;

  for (int i = 1; i < argc; i++ )
    printf("%s\n", argv[i]);

  if (argc == 2) {
    fp = fopen(argv[1], "w");
    if (fp == NULL)
      return 1;

    fclose(fp);
  } else if (argc > 2) {
    printf("Un solo nombre, sin espacios\n");
  } else {
    printf("Falta nombre de archivo\n");
  }


  return 0;
}

#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE *fp;

  for (int i = 0; i < argc; i++ )
    printf("%s\n", argv[i]);

  if (argc == 2) {
    fp = fopen(argv[1], "w");
    fclose(fp);
  } else if (argc > 2) {
    printf("Solo un nombre\n");
    return 1;
  } else {
    printf("Falta el nombre del archivo\n");
    return 1;
  }

  return 0;
}

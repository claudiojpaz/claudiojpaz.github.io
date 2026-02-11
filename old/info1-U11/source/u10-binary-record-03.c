#include <stdio.h>

struct cuenta {
  int numero;
  char nombre[80];
  float saldo;
};

void agregar(FILE *);
void mostrar(FILE *);
void menu (FILE *);
int menu_option (void);

int main (void)
{
  FILE *fp;

  fp = fopen("db.bin","ab+");

  menu(fp);

  fclose(fp);
  return 0;
}

void menu (FILE *fp)
{
  int salir = 0;
  int op;

  do {
    op = menu_option();
    switch (op) {
      case 1:
        agregar(fp);
        break;
      case 2:
        mostrar(fp);
        break;
      case 3:
        salir = 1;
        break;
      default:
        printf("Opción no válida\n");
    }
  } while ( salir == 0 );
}

int menu_option (void)
{
  int op;

  printf("1-Agregar\n");
  printf("2-Mostrar\n");
  printf("3-Salir\n");
  printf("Que quiere? "); scanf("%d", &op);

  return op;
}

void agregar(FILE *fp)
{
  struct cuenta rec;

  printf("Ingrese el número: "); scanf("%d", &rec.numero);
  printf("Ingrese el nombre: "); scanf(" %80[^\n]s", rec.nombre);
  printf("Ingrese el saldo: "); scanf("%f", &rec.saldo);

  fwrite(&rec, sizeof(rec), 1, fp);
}

void mostrar(FILE *fp)
{
  struct cuenta rec;

  fseek(fp, 0, SEEK_SET);

  fread(&rec, sizeof(rec), 1, fp);
  while (!feof(fp)) {
    printf("Cuenta: %d\n", rec.numero);
    printf("Nombre: %s\n", rec.nombre);
    printf("Saldo: %.2f\n", rec.saldo);
    fread(&rec, sizeof(rec), 1, fp);
  }
}


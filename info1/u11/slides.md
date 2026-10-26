---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 11
titleTemplate: '%s'
info: |
    Unidad 11  
    Slides del teórico de la Materia  
    Informática 1 del Departamento de Ingeniería Electrónica  
    Facultad Regional Córdoba de la Universidad Tecnológica Nacional
# apply UnoCSS classes to the current slide
# https://sli.dev/features/drawing
drawings:
  persist: false
# slide transition: https://sli.dev/guide/animations.html#slide-transitions
transition: slide-left
# enable MDC Syntax: https://sli.dev/features/mdc
mdc: true
layout: image
image: /img/cover.png
class: text-2xl
---

<div class="absolute left-10 bottom-10">

# Unidad 11

# Manejo de archivos en C

</div>

<QrOverlay title=''>

<img src="/img/info1-u11.png" class="mx-auto w-3/4" />

</QrOverlay>

---
class: text-2xl
---

# Concepto de Flujo de datos (_streams_)

<v-clicks>

La mayoría de los programas necesitan _entradas_ (in) o _salidas_ (out), o ambas.

El lenguaje C NO dispone de sentencias de entrada/salida.

Hay que recurrir a una biblioteca que tenga funciones para manejar las entrada/salidas.

Las funciones de la biblioteca estándar están _declaradas_ en el archivo de cabecera `stdio.h`

</v-clicks>

---
class: text-2xl
---

# Concepto de Flujo de datos (_streams_)

<v-clicks>

Todas las entradas y salidas son simplemente secuencias de bytes que van de un lado a otro, llamadas _streams_

Las entradas son bytes que van desde dispositivos (teclado, disco, red) hacia la memoria

Las salidas son bytes que van desde la memoria a un dispositivo (pantalla, impresora, disco, red)

</v-clicks>

---
class: text-2xl
---

# Concepto de Flujo de datos (_streams_)

<v-clicks>

Cuando un programa comienza, ya tiene tres _streams_ estándar predefinidos, listos para su uso...

...están declarados en `stdio.h`


`stdin` es la entrada y está _conectada_ al teclado.

`stdout` es la salida y está _conectada_ a la pantalla.

`stderr` es la salida de error  y está _conectada_ a la pantalla.

</v-clicks>

---
class: text-2xl
---

# Concepto de Flujo de datos (_streams_)

<v-clicks>

El SO puede permitir redireccionarlos a otros dispositivos.

Tanto `stdin`, `stdout` y `stderr` son de tipo `FILE *`


`FILE *` es un tipo de datos usado para representar _streams_


Es una estructura con información necesaria para el manejo en bajo nivel de los archivos.

</v-clicks>

---
class: text-2xl
---


# El tipo `FILE *`

<v-clicks>

El tipo FILE es una estructura definida en `stdio.h` que contiene información para procesar el archivo


Esta estructura contiene un descriptor de archivo, que no es más que un índice, que se encuentra en una tabla del sistema operativo llamada _tabla de archivos abiertos_


Cada elemento de esa tabla contiene un FCB (_bloque de control de archivo_) que es lo que utiliza el SO para administrar el archivo

</v-clicks>

---
class: text-2xl
---


# El tipo `FILE *`

<img src="/img/fcb.svg" class="mx-auto w-3/4" />


---
class: text-2xl
transition: none
---


# Apertura y cierre de _streams_

<v-clicks>

Las funciones utilizadas para abrir y cerrar archivos son `fopen` y `fclose`

## `fopen`

```c
FILE * fopen (const char *filename, const char *opentype);
```

`fopen` recibe dos cadenas como argumentos: el nombre del archivo y el modo de apertura.


Devuelve un `FILE *` que representa al _stream_ asociado al archivo o `NULL` ante un error.

</v-clicks>

---
class: text-2xl
---


# Apertura y cierre de _streams_

Las funciones utilizadas para abrir y cerrar archivos son `fopen` y `fclose`

<v-clicks>

## `fclose`

```c
int fclose (FILE *stream);
```

`fclose` recibe el `FILE *` del _stream_ asociado al archivo que se quiere cerrar.

Devuelve un 0 (cero) si tuvo éxito, o un `EOF` si falló.

</v-clicks>

---
class: text-2xl
---

# Apertura y cierre de _streams_

<v-clicks>

Según el estándar los archivos pueden ser abiertos en modo _texto_ o en modo _binario_, para lectura, escritura o ambos.


Los modos de apertura son:

| <div style="width: 30px;"></div>| <div style="width: 300px;"></div>|
|--------------|--------------|
|`r` | para lectura en modo texto |
|`w` | para escritura en modo texto. Si no existe lo crea. Si existe lo sobrescribe. |
|`a` | para escritura en modo texto. Si no existe lo crea. Si existe escribe al final. |

</v-clicks>

---
class: text-2xl
---

# Apertura y cierre de _streams_

<v-clicks>

Otros modos de apertura son:

| <div style="width: 30px;"></div>| <div style="width: 300px;"></div>|
|--------------|--------------|
|r+ | para lectura y escritura en modo texto. El archivo debe existir. |
|w+ | para lectura y escritura en modo texto. Si no existe lo crea. Si existe lo sobrescribe. |
|a+ | para lectura y escritura en modo texto. Si no existe lo crea. Siempre escribe al final. |

</v-clicks>

---
class: text-2xl
---

# Apertura y cierre de _streams_

<v-clicks>


En modo binario existen los mismos modos, agregando después de la letra inicial una b

* rb
* wb
* ab
* rb+
* wb+
* ab+

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::


---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout); // [!code line-highlight]
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

`fclose` cierra el _stream_ estándar `stdout`

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");  // [!code range: fopen("salida.txt", "w");]

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

`fopen` abre el archivo `salida.txt` en modo escritura

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");  // [!code range: stdout]

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

el _stream_ asociado es asignado en `stdout`

Si el archivo no existe, lo crea.


---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

<v-click>

Luego de compilar, la ejecución no muestra nada por pantalla

</v-click>

::bottom::

<v-click>

```
$ gcc -Wall -std=c99 -pedantic-errors u10-redirect-stdout.c
$ ./a.out
$
```

</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Apertura y cierre de _streams_

## Ejemplo de redirección de `stdout` a un archivo

::left::

```c
#include <stdio.h>

int main (void) {
  fclose(stdout);
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
```

::right::

<v-click>

pero si se revisa el contenido del archivo `salida.txt`...

</v-click>

::bottom::

<v-click>

```
$ cat salida.txt
Hola, mundo!
$
```

</v-click>

---
class: text-2xl
transition: none
---

# Lectura de _streams_

<v-clicks>

Descontando las funciones usadas para leer desde `stdin`, las funciones usadas para leer desde un archivo en general, disponibles en `stdio.h` según el estándar son:

## fgetc

```c
int fgetc ( FILE * stream );
```

Toma un caracter desde el archivo representado por el _stream_ `stream` y lo devuelve como `int`

</v-clicks>

---
class: text-2xl
transition: none
---

# Lectura de _streams_

Descontando las funciones usadas para leer desde `stdin`, las funciones usadas para leer desde un archivo en general, disponibles en `stdio.h` según el estándar son:

<v-clicks>

## fgets

```c
char *fgets(char *str, int n, FILE *stream);
```

Toma una cantidad `n` de caracteres desde el archivo representado por el _stream_ `stream` y lo guarda en el arreglo apuntado por el puntero `str`

</v-clicks>

---
class: text-2xl
transition: none
---

# Lectura de _streams_

Descontando las funciones usadas para leer desde `stdin`, las funciones usadas para leer desde un archivo en general, disponibles en `stdio.h` según el estándar son:

<v-clicks>

## fscanf

```c
int fscanf(FILE *stream, const char *format, ...);
```

Exactamente igual al `scanf` que se usa con `stdin` (desde el teclado) pero lleva como primer argumento el _stream_ de donde se toman los valores

</v-clicks>

---
class: text-2xl
---

# Lectura de _streams_

<v-clicks>

Si se tiene un archivo de texto llamado `frutas.txt`

```
$ cat frutas.txt
manzana
banana
naranja
pera
$
```

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
transition: none
---

::left::
```c
#include <stdio.h>

int main (void) {
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("frutas.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  fgets(cadena, 80, fp);
  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}
```

::right::

<v-click>

`fopen` devuelve `NULL` si el archivo no puede abrirse por algún motivo

</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
transition: none
---

::left::
```c
#include <stdio.h>

int main (void) {
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("frutas.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  fgets(cadena, 80, fp);
  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}
```

::right::

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
transition: none
---

::left::
```c
#include <stdio.h>

int main (void) {
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("frutas.txt", "r");
  if ( fp == NULL ) { // [!code line-highlight]
    printf("No se pudo abrir...\n"); // [!code line-highlight]
    return 1; // [!code line-highlight]
  } // [!code line-highlight]

  fgets(cadena, 80, fp);
  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}
```

::right::

debe chequearse la correcta apertura para evitar errores en tiempo de ejecución

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
transition: none
---

::left::
```c
#include <stdio.h>

int main (void) {
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("frutas.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  fgets(cadena, 80, fp);
  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}
```

::right::

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
---

::left::
```c
#include <stdio.h>

int main (void) {
  FILE * fp;
  char cadena[80] = {0};

  fp = fopen("frutas.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  fgets(cadena, 80, fp); // [!code line-highlight]
  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}
```

::right::

`fgets` toma _hasta_ 79 (80-1) caracteres. Si encuentra un retorno de línea (\n) termina

---
class: text-2xl
---

# Lectura de _streams_

<v-clicks>

se puede reemplazar la línea

```c
  fgets(cadena, 80, fp);
```

...por

```c
  fscanf(fp, "%80[^\n]s", cadena);
```

La entrada `fscanf` es formateada, a diferencia de `fgets` que solo lee cadenas de texto.

Con `fscanf` se pueden leer números enteros o reales directamente desde el archivo.

</v-clicks>

---
class: text-2xl
---

# Lectura de _streams_

<v-clicks>

Para leer más líneas se pueden usar sucesivos `fscanf` o `fgets` o utilizar estructuras repetitivas

```c
  fgets(cadena, 80, fp);
  while (!feof(fp)) {
    printf("%s", cadena);
    fgets(cadena, 80, fp);
  }
```

La función `feof` devuelve 0 (cero) si no se alcanzó el final del archivo.

Devuelve 1 (uno) luego de intentar leer datos del archivo sin lograrlo por estar al final del mismo.

</v-clicks>

---
class: text-2xl
transition: none
---

# Escritura de _streams_

<v-clicks>

Las funciones usadas para escribir en un archivo de texto, disponibles en stdio.h según el estándar son:


## fputc

```c
int  fputc(int data, FILE * stream);
```

Toma el dato `data`, lo convierte a `unsigned char` y lo escribe en la salida apuntada por `stream`. En caso de éxito devuelve el caracter escrito, si no, devuelve `EOF`.

</v-clicks>

---
class: text-2xl
transition: none
---

# Escritura de _streams_


Las funciones usadas para escribir en un archivo de texto, disponibles en stdio.h según el estándar son:

<v-clicks>

## fputs

```c
int fputs(const char * ps, FILE * stream);
```

Toma la cadena apuntada por el puntero `ps`, y la escribe en la salida apuntada por `stream` hasta que encuentra un caracter nulo. En caso de éxito devuelve un entero mayor a cero, si no, devuelve `EOF`.

</v-clicks>

---
class: text-2xl
transition: none
---

# Escritura de _streams_


Las funciones usadas para escribir en un archivo de texto, disponibles en stdio.h según el estándar son:

<v-clicks>

## fprintf

```c
int fprintf(FILE * stream, const char * format, ...);
```

Exactamente igual al `printf` que se usa con `stdout` (a la pantalla) pero lleva como primer argumento el _stream_ donde se colocan los valores. Tiene la ventaja de dar formato a la salida.

</v-clicks>

---
class: text-2xl
---

# Ejemplo Lectura/Escritura de _streams_

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
transition: none
---

::left::

```c
#include <stdio.h>

void agregar(FILE *);
void mostrar(FILE *);
void menu (FILE *);
int menu_option (void);

int main (void) {
  FILE *fp;

  fp = fopen("db.txt","a+");

  menu(fp);

  fclose(fp);
  return 0;
}
```

::right::

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
---

::left::

```c
#include <stdio.h>

void agregar(FILE *);
void mostrar(FILE *);
void menu (FILE *);
int menu_option (void);

int main (void) {
  FILE *fp;

  fp = fopen("db.txt","a+"); // [!code range: "a+"]

  menu(fp);

  fclose(fp);
  return 0;
}
```

::right::

El _modo_ `"a+"` permite agregar registros al final del archivo y al mismo tiempo leer.


---
class: text-2xl -translate-y-8
---

```c
void menu (FILE *fp) {
  int op, salir = 0;

  do {
    op = menu_option();
    switch (op) {
      case 1:
        agregar(fp); break;
      case 2:
        mostrar(fp); break;
      case 3:
        salir = 1; break;
      default:
        printf("Opción no válida\n");
    }
  } while ( salir == 0 );
}

```

---
class: text-2xl
---

```c
int menu_option (void) {
  int op;

  printf("1-Agregar\n");
  printf("2-Mostrar\n");
  printf("3-Salir\n");
  printf("Que quiere? "); scanf("%d", &op);

  return op;
}
```

---
class: text-2xl
---


```c
void agregar(FILE *fp) {
  int legajo;
  char nombre[80];
  char apellido[80];

  printf("Ingrese el nombre: "); scanf(" %80[^\n]s", nombre);
  printf("Ingrese el apellido: "); scanf(" %80[^\n]s", apellido);
  printf("Ingrese el legajo: "); scanf("%d", &legajo);

  fprintf(fp, "%d %s, %s\n", legajo, apellido, nombre);
}
```

<v-click>

La función `fprintf` agrega el registro al final (debido al a+ del `fopen`)

</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

::left::

```c
void mostrar(FILE *fp) {
  char linea[160];

  rewind(fp);

  fgets(linea, 160, fp);
  while (!feof(fp)) {
    fputs(linea, stdout);
    fgets(linea, 160, fp);
  }

}
```


---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

::left::

```c
void mostrar(FILE *fp) {
  char linea[160];

  rewind(fp); // [!code line-highlight]

  fgets(linea, 160, fp);
  while (!feof(fp)) {
    fputs(linea, stdout);
    fgets(linea, 160, fp);
  }

}
```

::right::

La función `rewind` vuelve al inicio al puntero que indica cual es la posición que se lee  en el archivo.

---

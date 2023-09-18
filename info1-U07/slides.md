class: center, middle, inverse
<title>Unidad 7</title>

.title[Informática I]

Claudio Paz

<!-- .email[claudiojpaz@gmail.com] -->

Agosto 2023

![:scale 50%](assets/this.png)

<div style="position: absolute; left: 5%; top: 85%; height: 50%; width: 50%; padding: 1em; text-align: left;">
<input type="image" src="assets/fullscreen.png" onclick="openFullscreen()" style="height: 15%; width: 15%;">
<input type="image" src="assets/smallscreen.png" onclick="closeFullscreen()" style="height: 15%; width: 15%;">
</div>

---
class: middle, center, intermediate
.title-dark[Unidad 7]
# Arreglos en lenguaje C

---
# Arreglos

--
count: false

.left-column[
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]
---
count: false

# Arreglos

.left-column[
Los arreglos son un conjunto de posiciones de memoria contiguos, en donde se pueden almacenar valores del mismo tipo.
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]

---
count: false

# Arreglos

.left-column[
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]

---
count: false

# Arreglos

.left-column[
Tienen un nombre que debe respetar las características de los identificadores.
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]

---
count: false

# Arreglos

.left-column[
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]

---
count: false

# Arreglos

.left-column[
Se puede acceder a cada valor mediante el nombre y el índice entre corchetes.
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]
--
count: false

.left-column[
Ej.
.bigger25[
```C
vec[3] = 15;
```
]
]

---
count: false

# Arreglos

.left-column[
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]

---
count: false

# Arreglos

.left-column[
El índice puede ser una variable o cualquier expresión
]
.right-column[
.center[<img src="assets/arreglos-1.svg" width="220" style="position: relative; top: 0px" >]
]
--
count: false

.left-column[
Ej.
.bigger25[
```C
for (int i = 0; i < 7; i++)
  printf("%d\n", vec[i]);
```
]
]

--
count: false

El primer elemento **siempre** es el de índice 0 (cero)

---
# Arreglos
--
count: false
## Definición
--
count: false
.bigger50[
```
tipo identificador[tamaño];
```
]

--
count: false
`tipo` se refiere a cualquier tipo de dato (.inline-code[.green[int]], .inline-code[.green[char]], .inline-code[.green[float]], etc.).

--
count: false
`identificador` es el nombre que se usará para acceder a los elementos del arreglo. Debe cumplir los requisitos de cualquier identificador.

--
count: false
`tamaño` es una **constante** que indica cuantos elementos tendrá el arreglo.

---
# Arreglos
## Definición

--
count: false

Ejemplo:

.bigger50[
```C
int vec[100];
```
]

--
count: false
Esto define un arreglo llamado `vec` de 100 enteros.

--
count: false

El estándar c99 determina que el tamaño máximo debe ser al menos 65536 elementos...

--
count: false
...pero el verdadero tamaño máximo depende de diversos factores relacionados a la memoria del programa (se verán más adelante en la carrera)

---
# Arreglos

--
count: false

```C
#include <stdio.h>

int main (void) {
  int i;
  int vec[5];

  for ( i = 0; i < 5; i++ )
    vec[i] = 0;

  for ( i = 0; i < 5; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
--
count: false

Si eventualmente se necesita un arreglo más grande, hay que cambiar el tamaño del arreglo...

---
count: false
# Arreglos

```C
#include <stdio.h>

int main (void) {
  int i;
* int vec[5];

  for ( i = 0; i < 5; i++ )
    vec[i] = 0;

  for ( i = 0; i < 5; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```

Si eventualmente se necesita un arreglo más grande, hay que cambiar el tamaño del arreglo...

---
count: false
# Arreglos

```C
#include <stdio.h>

int main (void) {
  int i;
* int vec[10];

  for ( i = 0; i < 5; i++ )
    vec[i] = 0;

  for ( i = 0; i < 5; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```

Si eventualmente se necesita un arreglo más grande, hay que cambiar el tamaño del arreglo...
--
count: false

...y el control de las sentencias repetitivas

---
count: false
# Arreglos

```C
#include <stdio.h>

int main (void) {
  int i;
* int vec[10];

* for ( i = 0; i < 5; i++ )
    vec[i] = 0;

* for ( i = 0; i < 5; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```

Si eventualmente se necesita un arreglo más grande, hay que cambiar el tamaño del arreglo...

...y el control de las sentencias repetitivas

---
count: false
# Arreglos

```C
#include <stdio.h>

int main (void) {
  int i;
* int vec[10];

* for ( i = 0; i < 10; i++ )
    vec[i] = 0;

* for ( i = 0; i < 10; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```

Si eventualmente se necesita un arreglo más grande, hay que cambiar el tamaño del arreglo...

...y el control de las sentencias repetitivas


---
# Arreglos

--
count: false

Si el programa tiene gran extensión, hacer estos cambios puede llevar a cometer errores...

--
count: false

Para evitarlos se puede utilizar la directiva de preprocesador `#define`

---
# Preprocesador

--
count: false

## Directiva `#define`
--
count: false

Se utiliza para **definir** _constantes simbólicas_

--
count: false

```C
#include <stdio.h>
#define N 5

int main (void) {
  int i;
  int vec[N];

  for ( i = 0; i < N; i++ )
    vec[i] = 0;

  for ( i = 0; i < N; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```

---

# Preprocesador
## Directiva `#define`
--
count: false

**Antes** de la compilación, el preprocesador _reemplaza_ todas las constantes simbólicas por el valor que corresponde.

--
count: false

Los nombres de las constantes deben respetar las características de los identificadores, y se recomienda el uso de mayúsculas.

--
count: false

No deben usarse los punto y coma (`;`) en las directivas `#define` ya que luego, cuando se hagan los reemplazos podría haber errores de sintaxis.

---
# Arreglos
--
count: false
## Inicialización
--
count: false

Así como las variables comunes se podían inicializar en la definición

--
count: false

.bigger50[
```C
int var = 3;
```
]

--
count: false

Los arreglos se pueden inicializar en la definición elemento por elemento usando llaves

--
count: false

.bigger50[
```C
int vec[5] = {3, 5, 2, 10, 4};
```
]
---
# Arreglos
## Inicialización
--
count: false

Los elementos entre llaves se asignarán en orden desde el índice cero.

--
count: false

.left-60-column[
.bigger25[
```C
int vec[5] = {3, 5, 2, 10, 4};
```
]
]

--
count: false

.right-40-column[
.center[<img src="assets/arreglos-init-1.svg" width="180" style="position: relative; top: 0px" >]
]

---
count: false
# Arreglos
## Inicialización

Los elementos entre llaves se asignarán en orden desde el índice cero.

.left-60-column[
.bigger25[
```c
int vec[5] = {3, 5, 2, 10, 4};
```
]
]

.right-40-column[
.center[<img src="assets/arreglos-init-1-000.svg" width="180" style="position: relative; top: 0px" >]
]

---
# Arreglos
## Inicialización
--
count: false

Si los valores para inicializar son **menos** que el tamaño del arreglo, el resto de los elementos son inicializados en cero

--
count: false

.left-60-column[
.bigger25[
```c
int vec[5] = {3, 5, 2};
```
]
]
--
count: false

.right-40-column[
.center[<img src="assets/arreglos-init-1.svg" width="180" style="position: relative; top: 0px" >]
]

---
count: false
# Arreglos
## Inicialización

Si los valores para inicializar son **menos** que el tamaño del arreglo, el resto de los elementos son inicializados en cero

.left-60-column[
.bigger25[
```c
int vec[5] = {3, 5, 2};
```
]
]

.right-40-column[
.center[<img src="assets/arreglos-init-1-001.svg" width="180" style="position: relative; top: 0px" >]
]
---
# Arreglos
## Inicialización
--
count: false

Si los valores para inicializar son **más** que el tamaño del arreglo, el compilador da un `error` o `warning` dependiendo de si está la opción `--pedantic-errors`

--
count: false

.left-60-column[
.bigger25[
```c
int vec[5] = {3, 5, 2, 10, 4, 6};
```
]
]

--
count: false
.right-40-column[
.center[<img src="assets/arreglos-init-1-000.svg" width="180" style="position: relative; top: 0px" >]
]


---
# Arreglos
## Inicialización
--
count: false

Se puede inicializar **todo** el arreglo poniendo entre llaves un número cero

--
count: false

.bigger50[
```c
int vec[5] = {0};
```
]
--
count: false

Estrictamente hablando de esta forma se inicializa el primer elemento en cero, y el resto de los elementos en cero.

---
# Arreglos
## Inicialización
--
count: false

Se puede omitir el tamaño entre los corchetes, siempre y cuando se usen las llaves para inicializar.

--
count: false

.bigger50[
```c
int vec[] = {3, 5, 2, 10, 4};
```
]

--
count: false

...pero el tamaño del arreglo siempre corresponderá a la cantidad de elementos inicializados entre llaves

---
# Arreglos
## Inicialización
--
count: false

Si se omiten tanto el tamaño entre corchetes como los inicializadores el compilador da error

--
count: false

.bigger50[
```c
int vec[];
```
]
--
count: false

.bigger50[
```shell
error: array size missing in ‘vec’
   int vec[];
       ^~~
```
]

---
# Arreglos
## Arreglos de 2 Dimensiones

--
count: false

En C se pueden definir arreglos multidimensionales

--
count: false

.bigger50[
```C
int mat[3][4];
```
]

--
count: false

El número entre corchetes a la izquierda determina la cantidad de filas.

--
count: false

El número entre corchetes a la derecha determina la cantidad de columnas.

---
# Arreglos
## Arreglos de 2 Dimensiones
--
count: false

.center[<img src="assets/arreglo2d.svg" width="400" style="position: relative; top: 0px" >]

--
count: false

Para acceder a cualquier elemento hay que utilizar los índices de filas y columnas.

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

Como los arreglos de 1 dimensión, se utilizan llaves por cada fila y todas las filas también entre llaves.

--
count: false

.bigger25[
```C
int mat[2][3] = { {8,5,3}, {4,6,7} };
```
]

--
count: false

.center[<img src="assets/arreglo2d-001.svg" width="300" style="position: relative; top: 0px" >]

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

Se pueden inicializar de forma incompleta, donde los elementos faltantes se ponen en cero.

--
count: false

.bigger50[
```C
int mat[2][3] = { {8,5}, {4} };
```
]

--
count: false

.center[<img src="assets/arreglo2d-002.svg" width="300" style="position: relative; top: 0px" >]

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

...incluso pueden faltar filas.

--
count: false

.bigger50[
```C
int mat[2][3] = { {8,5} };
```
]

--
count: false

.center[<img src="assets/arreglo2d-003.svg" width="300" style="position: relative; top: 0px" >]

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

O todos los elementos, salvo el primero. Sirve para inicializar en cero todo el arreglo.

--
count: false

.bigger50[
```C
int mat[2][3] = { {0} };
```
]

--
count: false

.center[<img src="assets/arreglo2d-004.svg" width="300" style="position: relative; top: 0px" >]

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

Se pueden omitir un par de llaves en el caso de ser cero...

--
count: false

.bigger50[
```C
int mat[2][3] = {0};
```
]

--
count: false

.center[<img src="assets/arreglo2d-004.svg" width="300" style="position: relative; top: 0px" >]

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

...pero da un .orange[`warning`] si se usa otro número

--
count: false

.bigger50[
```C
int mat[2][3] = {1};
```
]
.bigger50[
```shell
warning: missing braces around initializer
    int mat[2][3] = {1};
                    ^
```
]

---
# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

--
count: false

...de todas formas la inicialización es la esperada (pero no hay que dejar pasar los `warnings`)

--
count: false

.bigger50[
```C
int mat[2][3] = {1};
```
]

--
count: false

.center[<img src="assets/arreglo2d-005.svg" width="300" style="position: relative; top: 0px" >]


---
# Arreglos
## Arreglos de 2 Dimensiones - Acceso

--
count: false

.bigger25[
```C
int mat[3][3] = {0};

mat[1][1] = 1;

for (int i = 0; i < 3; i++ ) {
  for (int j = 0; j < 3; j++ )
    printf("%d ", mat[i][j]);
  printf("\n");
}
```
]

.bigger25[
```bash
0 0 0
0 1 0
0 0 0
```
]

---
--
count: false

.bigger25[
```C
#include <stdio.h>

#define N 3

int main (void) {
  int i,j;
  int mat[3][3] = {0};

  for (int i = 0; i < N; i++ )
    for (int j = 0; j < N; j++ ) {
      printf("Ingrese el elemento (%d,%d): ", i, j);
      scanf("%d", &mat[i][j]);
    }

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}

```
]

---
--
count: false

.bigger25[
```C
#include <stdio.h>

#define N 3

int main (void) {
  int i,j;
  int mat[3][3] = {0};

  for (int i = 0; i < N; i++ )
    for (int j = 0; j < N; j++ )
      if (i == j)
        mat[i][j] = 1;

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}
```
]


---
--
count: false

.bigger25[
```C
#include <stdio.h>

#define N 3

int main (void) {
  int i,j;
  int mat[3][3] = {0};

  for (int i = 0; i < N; i++ )
    mat[i][i] = 1;

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  return 0;
}
```
]

---
# Pasaje de arreglos a funciones
--
count: false

A diferencia de las variables, al pasar los arreglos a las funciones, los cambios que se hagan sobre el arreglo, **afectan** al arreglo original

--
count: false

En el llamado **no** deben usarse los corchetes, solo el nombre del arreglo

--
count: false

En la definición el arreglo, en la lista de parámetros, debe tener corchetes


---
# Pasaje de arreglos a funciones
--
count: false


```C
#include <stdio.h>

#define N 10

void carga (int vec[N])
{
  for (int i = 0; i < N; i++)
    vec[i] = i;
}

int main (void)
{
  int vec[N] = {0};

  carga(vec);
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```
--
count: false

```sh
0 1 2 3 4 5 6 7 8 9
```

---
count: false
# Pasaje de arreglos a funciones

```C
#include <stdio.h>

#define N 10

void carga (`int vec[N]`)
{
  for (int i = 0; i < N; i++)
    vec[i] = i;
}

int main (void)
{
  int vec[N] = {0};

  carga(`vec`);
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```

```sh
0 1 2 3 4 5 6 7 8 9
```

---
# Pasaje de arreglos a funciones
--
count: false

Por motivos que se ampliarán en la unidad 8, se puede definir el arreglo en la lista de parámetros sin ningún valor entre corchetes

--
count: false

```C
void carga (int vec[])
{
  for (int i = 0; i < N; i++)
    vec[i] = i;
}
```

---
count: false
# Pasaje de arreglos a funciones

Por motivos que se ampliarán en la unidad 8, se puede definir el arreglo en la lista de parámetros sin ningún valor entre corchetes


```C
void carga (`int vec[]`)
{
  for (int i = 0; i < N; i++)
    vec[i] = i;
}
```

---
# Pasaje de arreglos a funciones
--
count: false

Una buena práctica de programación consiste en **no** incluir ningún valor "global" en la función

--
count: false


```C
void carga (int vec[], int n)
{
  for (int i = 0; i < n; i++)
    vec[i] = i;
}
```

--
count: false

Entonces, los parámetros de la función son: el arreglo, con corchetes sin valores, y la dimensión del mismo, pero como variable

---
# Pasaje de arreglos a funciones
--
count: false

```C
#include <stdio.h>

#define N 10

void carga (int vec[], int n)
{
  for (int i = 0; i < n; i++)
    vec[i] = i;
}

int main (void)
{
  int vec[N] = {0};

  carga(vec, N);
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```

---
# Pasaje de arreglos a funciones
--
count: false

En el caso de arreglos de más dimensiones, el procedimiento es el mismo, con la salvedad que solo puede omitirse el primer límite del arreglo en la definición

```C
void carga (int mat[][M], int n, int m)
{
  int c = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mat[i][j] = c++;

}
```

---
count: false
# Pasaje de arreglos a funciones

En el caso de arreglos de más dimensiones, el procedimiento es el mismo, con la salvedad que solo puede omitirse el primer límite del arreglo en la definición

```C
void carga (`int mat[][M]`, int n, int m)
{
  int c = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mat[i][j] = c++;

}
```


---

class: middle, center, intermediate
.title-dark[Algoritmos]

---
# Intercambio

--
count: false

Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

--
count: false
.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
  arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

---
count: false
# Intercambio


Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
  arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

.right-column[
primero hay que salvar uno de los valores
]

---
count: false
# Intercambio


Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

* tmp = arreglo[0];
  arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

.right-column[
primero hay que salvar uno de los valores
]

---
count: false
# Intercambio


Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
  arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

.right-column[
luego se puede **pisar** el elemento que contenía el valor salvado usando el nuevo elemento
]

---
count: false
# Intercambio


Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
* arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

.right-column[
luego se puede **pisar** el elemento que contenía el valor salvado usando el nuevo elemento
]

---
count: false
# Intercambio


Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
  arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

.right-column[
Finalmente, se recupera el valor salvado en la variable temporal colocandolo en la otra variable
]


---
count: false
# Intercambio


Para intercambiar dos elementos cualesquiera de un arreglo, hay que usar una variable temporal para no perder uno de los valores

.left-column[
```C
#include <stdio.h>
// u6-swap-1.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
  arreglo[0] = arreglo[4];
* arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
```
]

.right-column[
Finalmente, se recupera el valor salvado en la variable temporal colocandolo en la otra variable
]

---
# Búsqueda lineal o secuencial
--
count: false

Es un método para encontrar un valor en un arreglo

--
count: false

Por ejemplo, encontrar un máximo o un mínimo

--
count: false

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
Primero, se inicializa la variable `max` con el primer elemento del arreglo
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

* max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
Primero, se inicializa la variable `max` con el primer elemento del arreglo
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
Luego se recorre el arreglo buscando algún valor que supere a `max`
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
* for (int i = 1; i < 5; i++)
*   if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
Luego se recorre el arreglo buscando algún valor que supere a `max`
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
Cuando se lo encuentra se actualiza `max`
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
*     max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
Cuando se lo encuentra se actualiza `max`
]


---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
En este caso, al final del bucle, la variable `max` almacena el máximo **valor** (y puede se mostrar)
]

---
count: false
# Búsqueda lineal o secuencial

Es un método para encontrar un valor en un arreglo

Por ejemplo, encontrar un máximo o un mínimo

.left-column[
```C
#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

* printf("máximo = %d\n", max);

  return 0;
}
```
]

.right-column[
En este caso, al final del bucle, la variable `max` almacena el máximo **valor** (y puede se mostrar)
]

---
# Ordenamiento. Método de la burbuja
--
count: false

Consiste en comparar cada elemento con el siguiente e intercambiarlos si corresponde según el criterio de ordenamiento

--
count: false

Por ejemplo, si se propone ordenar **de menor a mayor** el siguiente arreglo
```C
  int vec[8] = {4,1,6,5,3,10,7,2};
```
---
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|.white[->]  | &nbsp; 4|
|   | &nbsp; 1|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se compara el elemento 0 con el 1, si el 0 es mayor que el 1, se intercambian
]
.right-30-column[
|   |   |
|--:|:--|
|.white[->]  | &nbsp; 4|
|   | &nbsp; 1|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se compara el elemento 0 con el 1, si el 0 es mayor que el 1, se intercambian
]
.right-30-column[
|   |   |
|--:|:--|
|-> | &nbsp; 4|
|-> | &nbsp; 1|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se compara el elemento 0 con el 1, si el 0 es mayor que el 1, se intercambian
```C
if (vec[0] > vec[1]) {
    int tmp = vec[0];
    vec[0] = vec[1];
    vec[1] = tmp;
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|-> | &nbsp; 4|
|-> | &nbsp; 1|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se compara el elemento 0 con el 1, si el 0 es mayor que el 1, se intercambian
```C
if (vec[0] > vec[1]) {
    int tmp = vec[0];
    vec[0] = vec[1];
    vec[1] = tmp;
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|-> | &nbsp; 1|
|-> | &nbsp; 4|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|-> | &nbsp; 1|
|-> | &nbsp; 4|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se adelantan una posición ambos índices
]
.right-30-column[
|   |   |
|--:|:--|
|-> | &nbsp; 1|
|-> | &nbsp; 4|
|   | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se adelantan una posición ambos índices
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|-> | &nbsp; 4|
|-> | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|-> | &nbsp; 4|
|-> | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se compara el elemento 1 con el 2, si el 1 es mayor que el 2, se intercambian
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|-> | &nbsp; 4|
|-> | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|-> | &nbsp; 4|
|-> | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se adelantan una posición ambos índices
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|-> | &nbsp; 4|
|-> | &nbsp; 6|
|   | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Se adelantan una posición ambos índices
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Esto se hace para todo el arreglo, así que se puede usar una variable para los índices de los elementos...
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Esto se hace para todo el arreglo, así que se puede usar una variable para los índices de los elementos...
```C

    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }

```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
&nbsp;  
&nbsp;  
&nbsp;
```C

    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }

```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...
&nbsp;  
&nbsp;
```C

    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }

```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
|   | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
|   | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...  
pero OJO!  
&nbsp;
```C
for (int i = 0; i < N; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
|   | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...  
pero OJO!  
al final del for hay un error lógico
```C
for (int i = 0; i < N; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|   | &nbsp; 2|
|   | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...  
pero OJO!  
al final del for hay un error lógico
```C
for (int i = 0; i < N; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|.red[->]   | &nbsp; 2|
|.red[->]   | &nbsp; |
]

--

&nbsp;  
Para solucionar este error el for debe hacer una repetición menos

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...  
pero OJO!  
al final del for hay un error lógico
```C
for (int i = 0; `i < N-1;` i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|   | &nbsp; 7|
|.red[->]   | &nbsp; 2|
|.red[->]   | &nbsp; |
]

&nbsp;  
Para solucionar este error el for debe hacer una repetición menos

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
y un for para controlar esa variable...  
pero OJO!  
al final del for hay un error lógico
```C
for (int i = 0; `i < N-1;` i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
|.red[->]   | &nbsp; 7|
|.red[->]   | &nbsp; 2|
|| &nbsp; |
]

&nbsp;  
Para solucionar este error el for debe hacer una repetición menos

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 6|
|-> | &nbsp; 5|
|   | &nbsp; 3|
|   | 10|
| | &nbsp; 7|
| | &nbsp; 2|
|| &nbsp; |
]


---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|-> | &nbsp; 5|
|-> | &nbsp; 6|
|   | &nbsp; 3|
|   | 10|
| | &nbsp; 7|
| | &nbsp; 2|
|| &nbsp; |
]


---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|-> | &nbsp; 6|
|-> | &nbsp; 3|
|   | 10|
| | &nbsp; 7|
| | &nbsp; 2|
|| &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|-> | &nbsp; 3|
|-> | &nbsp; 6|
|   | 10|
| | &nbsp; 7|
| | &nbsp; 2|
|| &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|-> | &nbsp; 6|
|-> | 10|
| | &nbsp; 7|
| | &nbsp; 2|
|| &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
|-> | 10|
|-> | &nbsp; 7|
| | &nbsp; 2|
|| &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
|-> | &nbsp; 7|
|-> | 10|
| | &nbsp; 2|
|| &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
|-> | 10|
|-> | &nbsp; 2|
|| &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
completando el for...  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
|-> | &nbsp; 2|
|-> | 10|
|| &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
&nbsp;  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Así siempre el mayor queda al final del arreglo  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
Pero el arreglo no está ordenado  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
&nbsp;  
&nbsp;  
&nbsp;
```C
for (int i = 0; i < N-1; i++) {
    if (vec[i] > vec[i+1]) {
        int tmp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = tmp;
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
En el peor caso, donde el elemento más pequeño está en la última posición,
se deben hacer N-1 repeticiones
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|->   | &nbsp; 1|
|->   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|->   | &nbsp; 4|
|->   | &nbsp; 5|
|| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|->   | &nbsp; 5|
|->| &nbsp; 3|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|->| &nbsp; 3|
|->   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|| &nbsp; 3|
|->   | &nbsp; 5|
|->| &nbsp; 6|
| | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|| &nbsp; 3|
|   | &nbsp; 5|
|->| &nbsp; 6|
|-> | &nbsp; 7|
| | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|| &nbsp; 3|
|   | &nbsp; 5|
|| &nbsp; 6|
|-> | &nbsp; 7|
|-> | &nbsp; 2|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|| &nbsp; 3|
|   | &nbsp; 5|
|| &nbsp; 6|
|-> | &nbsp; 2|
|-> | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|| &nbsp; 3|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 2|
|-> | &nbsp; 7|
|-> | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|   | &nbsp; 4|
|| &nbsp; 3|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|->   | &nbsp; 1|
|->   | &nbsp; 4|
|| &nbsp; 3|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|->   | &nbsp; 4|
|->| &nbsp; 3|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|->| &nbsp; 3|
|->   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|->   | &nbsp; 4|
|->   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|   | &nbsp; 4|
|->   | &nbsp; 5|
|->| &nbsp; 6|
| | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|   | &nbsp; 4|
|   | &nbsp; 5|
|->| &nbsp; 6|
|-> | &nbsp; 2|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|   | &nbsp; 4|
|   | &nbsp; 5|
|-> | &nbsp; 2|
|->| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|   | &nbsp; 4|
|   | &nbsp; 5|
| | &nbsp; 2|
|->| &nbsp; 6|
|-> | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|   | &nbsp; 4|
|   | &nbsp; 5|
| | &nbsp; 2|
|| &nbsp; 6|
|-> | &nbsp; 7|
|-> | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|| &nbsp; 3|
|   | &nbsp; 4|
|   | &nbsp; 5|
| | &nbsp; 2|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|->   | &nbsp; 1|
|->| &nbsp; 3|
|   | &nbsp; 4|
|   | &nbsp; 5|
| | &nbsp; 2|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|->| &nbsp; 3|
|->   | &nbsp; 4|
|   | &nbsp; 5|
| | &nbsp; 2|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|->   | &nbsp; 4|
|->   | &nbsp; 5|
| | &nbsp; 2|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|   | &nbsp; 4|
|->   | &nbsp; 5|
|-> | &nbsp; 2|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|   | &nbsp; 4|
|-> | &nbsp; 2|
|->   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|   | &nbsp; 4|
| | &nbsp; 2|
|->   | &nbsp; 5|
|->| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|   | &nbsp; 4|
| | &nbsp; 2|
|   | &nbsp; 5|
|->| &nbsp; 6|
|-> | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|   | &nbsp; 4|
| | &nbsp; 2|
|   | &nbsp; 5|
|| &nbsp; 6|
|-> | &nbsp; 7|
|-> | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|   | &nbsp; 4|
| | &nbsp; 2|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|->   | &nbsp; 1|
|-> | &nbsp; 3|
|   | &nbsp; 4|
| | &nbsp; 2|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
|-> | &nbsp; 3|
|->   | &nbsp; 4|
| | &nbsp; 2|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|->   | &nbsp; 4|
|-> | &nbsp; 2|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
|-> | &nbsp; 2|
|->   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
| | &nbsp; 2|
|->   | &nbsp; 4|
|->   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
| | &nbsp; 2|
|   | &nbsp; 4|
|->   | &nbsp; 5|
|->| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
| | &nbsp; 2|
|   | &nbsp; 4|
|   | &nbsp; 5|
|->| &nbsp; 6|
|-> | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
| | &nbsp; 2|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 6|
|-> | &nbsp; 7|
|-> | 10|
|.white[->]  | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|   | &nbsp; 1|
| | &nbsp; 3|
| | &nbsp; 2|
|   | &nbsp; 4|
|   | &nbsp; 5|
|| &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 3|
| | &nbsp; 2|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
|-> | &nbsp; 1|
|-> | &nbsp; 3|
| | &nbsp; 2|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
|-> | &nbsp; 3|
|-> | &nbsp; 2|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
|-> | &nbsp; 2|
|-> | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
|-> | &nbsp; 3|
|-> | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
|-> | &nbsp; 4|
|-> | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
|-> | &nbsp; 5|
|-> | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
|-> | &nbsp; 6|
|-> | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]
---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
|-> | &nbsp; 7|
|-> | 10|
|.white[->]  | &nbsp; |
]


---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

--

&nbsp;  
Se puede ver que en la primera pasada el elemento más grande del arreglo queda en su posición...

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

--

&nbsp;  
...entonces en la segunda pasada, la última pregunta no hace falta, porque la respuesta nunca será verdad...

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

--

&nbsp;  
...en la tercera pasada, las **dos** últimas preguntas no hace falta, porque las respuestas nunca serán verdad...

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

--

&nbsp;  
...entonces se puede _mejorar_ el algoritmo para que el alcance del lazo interno dependa del número de pasada...

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; `i < N-1-j`; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]

---
count:false
# Ordenamiento. Método de la burbuja
.left-70-column[
```C
for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1-j; i++) {
        if (vec[i] > vec[i+1]) {
            int tmp = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = tmp;
        }
    }
}
```
]
.right-30-column[
|   |   |
|--:|:--|
| | &nbsp; 1|
| | &nbsp; 2|
| | &nbsp; 3|
| | &nbsp; 4|
| | &nbsp; 5|
| | &nbsp; 6|
| | &nbsp; 7|
| | 10|
|.white[->]  | &nbsp; |
]


---
# Ordenamiento. Método de la burbuja
--
count:false
```C
void ordenar_menor_a_mayor (int vec[], int n) {
    for (int j = 0; j < n-1; j++) {
        for (int i = 0; i < n-1-j; i++) {
            if (vec[i] > vec[i+1]) {
                int tmp = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = tmp;
            }
        }
    }
}
```

--
count:false
```C
void imprimir_arreglo (int vec[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%5d", vec[i]);
    }
    printf("\n");
}
```
---
# Ordenamiento. Método de la burbuja
--
count:false
```C
#include <stdio.h>
#define N 8

void ordenar_menor_a_mayor (int [], int);
void imprimir_arreglo (int [], int);

int main (void) {
    int vec[8] = {4,1,6,5,3,10,7,2};

    imprimir_arreglo(vec, N);
    ordenar_menor_a_mayor(vec, N);
    imprimir_arreglo(vec, N);

    return 0;
}
```

---
# Ordenamiento. Método de inserción

--
count: false

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

--
count: false

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

--
count: false

Buscaremos la posición del elemento rojo en la lista ordenada

--
count: false

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | | | | | | | |
| 1 | 4 | 5 | 6 | .red[**3**] | 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada


|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; |  |  |  | .red[**3**] | | | |
| 1 | 4 | 5 | 6 | .white[3] | 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; |  |  |  | .red[**3**] | | | |
| 1 | 4 | 5 |.white[5] | 6| 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; |  |  |  | .red[**3**] | | | |
| 1 | 4 |.white[4]  | 5 | 6| 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; |  |  |  | .red[**3**] | | | |
| 1 | .white[3] | 4  | 5 | 6| 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | .red[**3**] |  |  |  | | | |
| 1 | .white[3] |4 | 5 | 6| 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | .white[**3**] |  |  |  | | | |
| 1 | .red[**3**] |4 | 5 | 6| 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | .white[**3**] |  |  |  | | | |
| 1 | 3 |4 | 5 | 6| 10 | 7 | 2 |

---
count: false
# Ordenamiento. Método de inserción

Consiste en ordenar cada elemento respecto de los elementos previamente ordenados

Supongamos un conjunto donde todos los elementos a la izq. del elemento en rojo están ordenados de menor a mayor

Buscaremos la posición del elemento rojo en la lista ordenada

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | .white[**3**] |  |  |  | | | |
| 1 | 3 |4 | 5 | 6| .red[**10**] | 7 | 2 |

---
# Ordenamiento. Método de inserción
--
count: false

Si se supone que el conjunto a la izq ya está ordenado, solo es necesario preguntar por elemento más a la derecha del conjunto.

--
count: false

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | .white[**3**] |  |  |  | | | |
| 1 | 3 |4 | 5 | .blue[**6**]| .red[**10**] | 7 | 2 |

--
count: false

Si no es mayor el rojo se mueve a la derecha y se vuelve a comenzar

--
count: false

|  |  |
|--|--|--|--|--|--|--|--|
| &nbsp; | .white[**3**] |  |  |  | | | |
| 1 | 3 |4 | 5 | 6| 10|  .red[**7**] | 2 |

---
# Ordenamiento. Método de inserción
--
count: false

```C
void ordenar_menor_a_mayor_insercion (int vec[], int n) {
  for(int j = 1; j < n; j++) {
    int tmp = vec[j];
    int i = j;
    while(i > 0 && vec[i-1] > tmp ) {
      vec[i] = vec[i-1];
      i--;
    }

    vec[i] = tmp;
  }
}
```
---
# Ordenamiento. Ordenamiento rápido (QuickSort)
--
count: false

La idea del QS es tomar el primer elemento del arreglo y colocarlo en su lugar final, o sea, en una posición en la que todos los elementos a su izq sean menores y todos los elementos a su derecha sean mayores.

--
count: false

Los dos grupos están desordenados, pero en cada uno se puede hacer lo mismo, tomar el primer elemento y colocarlo en su posición final.

--
count: false

Se repite esto con cada subconjunto que se va generando.

---
# Ordenamiento. Ordenamiento rápido (QuickSort)
--
count: false

¿Hasta cuándo hacemos esto?

--
count: false

Hasta que cada subconjunto tenga **un** solo elemento, entonces cada elemento estará en su lugar y el arreglo completo estará ordenado.

--
count: false

¿Cuál es la parte difícil?

--
count: false

Justamente determinar cual es la posición final de un elemento aunque el arreglo esté desordenado.

---
# Ordenamiento. Ordenamiento rápido (QuickSort)
--
count: false

.top[
Supongamos el siguiente arreglo desordenado
]

--
.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|37| 2 |6 |4 |89 |8 |10 |12 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
1) Tomamos el primer elemento de la izq
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|37| 2 |6 |4 |89 |8 |10 |12 |68 |45
]

---
count:false
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
1) Tomamos el primer elemento de la izq
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|.red[**37**]| 2 |6 |4 |89 |8 |10 |12 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|.red[**37**]| 2 |6 |4 |89 |8 |10 |12 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
2) Buscamos desde la derecha el primer elemento que sea menor que el seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|.red[**37**]| 2 |6 |4 |89 |8 |10 |12 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
2) Buscamos desde la derecha el primer elemento que sea menor que el seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|.red[**37**]| 2 |6 |4 |89 |8 |10 | .blue[**12**] |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
3) Intercambiamos estos elementos
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|.red[**37**]| 2 |6 |4 |89 |8 |10 | .blue[**12**] |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
3) Intercambiamos estos elementos
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|.blue[**12**]| 2 |6 |4 |89 |8 |10 | .red[**37**] |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |89 |8 |10 | .red[**37**] |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
4) Desde la izq, pero comenzando con el elemento siguiente al recién colocado, se busca el primer elemento mayor al seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |89 |8 |10 | .red[**37**] |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
4) Desde la izq, pero comenzando con el elemento siguiente al recién colocado, se busca el primer elemento mayor al seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.blue[**89**] |8 |10 | .red[**37**] |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.blue[**89**] |8 |10 | .red[**37**] |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)


.top[
5) Intercambiamos estos elementos
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.blue[**89**] |8 |10 | .red[**37**] |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
5) Intercambiamos estos elementos
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.red[**37**] |8 |10 | .blue[**89**] |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.red[**37**] |8 |10 | 89 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
6) Desde la derecha, pero comenzando con el siguiente elemento al recién colocado, buscamos el primer elemento menor al seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.red[**37**] |8 |10 | 89 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
6) Desde la derecha, pero comenzando con el siguiente elemento al recién colocado, buscamos el primer elemento menor al seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.red[**37**] |8 |.blue[**10**] | 89 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.red[**37**] |8 |.blue[**10**] | 89 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
7) Intercambiamos estos elementos
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.red[**37**] |8 |.blue[**10**] | 89 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
7) Intercambiamos estos elementos
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |.blue[**10**] |8 |.red[**37**] | 89 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
8) Desde la derecha, no hay elementos menores (el elemento que sigue **es** el seleccionado)

9) Desde la izquierda, no hay elementos mayores al elemento seleccionado
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
count:false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
Ahora todos los elementos a la derecha del elemento seleccionado son mayores, y todos los elemenos a la izquierda son menores, aunque estos subconjuntos no están ordenados.
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
Se puede hacer lo mismo con cada subconjunto usando una función recursiva.
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
count: false
# Ordenamiento. Ordenamiento rápido (QuickSort)

.top[
La condición de corte será cuando el elemento seleccionado es el único del subconjunto
]

.bottom[
|  |  |
|--|--|--|--|--|--|--|--|--|--|
|12| 2 |6 |4 |10 |8 |.red[**37**] | 89 |68 |45
]

---
--
```C
void quicksort (int item[], int left, int right) {
  int i, j, temp;

  i = left; j = right;

  do {
    while (item[i] < item[j] && i < j) j--;

    if (i < j) {
      temp = item[i];
      item[i] = item[j];
      item[j] = temp;
      i++;
    }

    while ( item[i] < item[j] && i < j) i++;

    if(i < j) {
      temp = item[i];
      item[i] = item[j];
      item[j] = temp;
      j--;
    }
  } while (i < j);

  if (left < j) quicksort(item, left, j-1);
  if (i < right) quicksort (item, i+1, right);
}
```

---
# Busqueda binaria
--
count: false

A partir de un conjunto ordenado, se utiliza la estrategia divide y vencerás, para tratar de encontrar un elemento dentro del conjunto

--
count: false

Se selecciona un elemento central y se evalúa si es el elemento buscado, es mayor o es menor.

--
count: false

Se puede eliminar la mitad en la que no se encuentra el valor buscado, lo que lo hace muy veloz


---
# Busqueda binaria
--
count: false
```C
int busqueda_binaria(int a[], int n) {
    int middle;
    int low = 0;
    int high = n-1;
    int result = -1; // valor no encontrado

    while (low <= high && result == -1){
        middle = (low+high) / 2;

        if (key == a[middle])
           result = middle;

        if (key < a[middle])
           high = middle - 1;
        else
           low = middle + 1;
    }

    return result;
}
```



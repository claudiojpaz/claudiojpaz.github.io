---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 7
titleTemplate: '%s'
info: |
    Unidad 7  
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

# Unidad 7

# Arreglos en lenguaje C

</div>

<QrOverlay title=''>

<img src="/img/info1-u07.png" class="mx-auto w-3/4" />

</QrOverlay>


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

Los arreglos son un conjunto de posiciones de memoria contiguos, en donde se pueden almacenar valores del mismo tipo.

::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

Tienen un nombre que debe respetar las características de los identificadores.

::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

Se puede acceder a cada valor mediante el nombre y el índice entre corchetes.

<v-click>
```c
vec[3] = 15;
```
</v-click>


::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::


::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Arreglos

::left::

El índice puede ser una variable o cualquier expresión

<v-clicks>

```c
for (int i = 0; i < 7; i++)
  printf("%d\n", vec[i]);
```

El primer elemento **siempre** es el de índice 0 (cero)

</v-clicks>

::right::

<img src="/img/arreglos-1.svg" width="220" style="position: relative; top: 0px" >

---
transition: none
class: text-2xl
---

# Definición de un arreglo


<pre><code>

tipo identificador[tamaño];

</code></pre>

<v-clicks>

`tipo` se refiere a cualquier tipo de dato <span class="text-red-500">`int`</span>, <span class="text-red-500">`char`</span>, <span class="text-red-500">`float`</span>, etc.

`identificador` es el nombre que se usará para acceder a los elementos del arreglo. Debe cumplir los requisitos de cualquier identificador.

`tamaño` es una **constante** que indica cuantos elementos tendrá el arreglo.

</v-clicks>

---
class: text-2xl
---

# Definición de un arreglo

Ejemplo:

```c
int vec[100];
```

Esto define un arreglo llamado `vec` de 100 enteros.

---
class: text-2xl
---

````md magic-move
```c
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
```c
#include <stdio.h>

int main (void) {
  int i;
  int vec[10];

  for ( i = 0; i < 5; i++ )
    vec[i] = 0;

  for ( i = 0; i < 5; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
```c
#include <stdio.h>

int main (void) {
  int i;
  int vec[10];

  for ( i = 0; i < 10; i++ )
    vec[i] = 0;

  for ( i = 0; i < 5; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
```c
#include <stdio.h>

int main (void) {
  int i;
  int vec[10];

  for ( i = 0; i < 10; i++ )
    vec[i] = 0;

  for ( i = 0; i < 10; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
```c
#include <stdio.h>

#define N 10

int main (void) {
  int i;
  int vec[10];

  for ( i = 0; i < 10; i++ )
    vec[i] = 0;

  for ( i = 0; i < 10; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
```c
#include <stdio.h>

#define N 10

int main (void) {
  int i;
  int vec[N];

  for ( i = 0; i < 10; i++ )
    vec[i] = 0;

  for ( i = 0; i < 10; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
```c
#include <stdio.h>

#define N 10

int main (void) {
  int i;
  int vec[N];

  for ( i = 0; i < N; i++ )
    vec[i] = 0;

  for ( i = 0; i < 10; i++ )
    printf("%d\n", vec[i]);

  return 0;
}
```
```c
#include <stdio.h>

#define N 10

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
````

---
class: text-2xl
---

# Preprocesador

## Directiva `#define`

<v-clicks>

Se utiliza para **definir** _constantes simbólicas_

**Antes** de la compilación, el preprocesador _reemplaza_ todas las constantes simbólicas por el valor que corresponde.

Los nombres de las constantes deben respetar las características de los identificadores, y se recomienda el uso de mayúsculas.

No deben usarse los punto y coma (`;`) en las directivas `#define` ya que luego, cuando se hagan los reemplazos podría haber errores de sintaxis.


</v-clicks>

---
class: text-2xl
---

# Arreglos
## Inicialización

<v-clicks>

Así como las variables comunes se podían inicializar en la definición


```c
int var = 3;
```

Los arreglos se pueden inicializar en la definición elemento por elemento usando llaves

```c
int vec[5] = {3, 5, 2, 10, 4};
```

</v-clicks>

---
transition: none
layout: two-cols-header
class: text-2xl
---

# Arreglos
## Inicialización


::left::

<v-clicks>

Los elementos entre llaves se asignarán en orden desde el índice cero.

```c
int vec[5] = {3, 5, 2, 10, 4};
```

</v-clicks>

::right::

---
transition: none
layout: two-cols-header
class: text-2xl
---

# Arreglos
## Inicialización


::left::


Los elementos entre llaves se asignarán en orden desde el índice cero.

```c
int vec[5] = {3, 5, 2, 10, 4};
```


::right::

<img src="/img/arreglos-init-1.svg" width="180" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
---

# Arreglos
## Inicialización


::left::

Los elementos entre llaves se asignarán en orden desde el índice cero.

```c
int vec[5] = {3, 5, 2, 10, 4};
```
::right::

<img src="/img/arreglos-init-1-000.svg" width="180" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
transition: none
layout: two-cols-header
class: text-2xl
---

# Arreglos
## Inicialización


::left::

<v-clicks>

Si los valores para inicializar son **menos** que el tamaño del arreglo, el resto de los elementos son inicializados en cero

```c
int vec[5] = {3, 5, 2};
```
</v-clicks>

::right::


---
transition: none
layout: two-cols-header
class: text-2xl
---

# Arreglos
## Inicialización


::left::

Si los valores para inicializar son **menos** que el tamaño del arreglo, el resto de los elementos son inicializados en cero

```c
int vec[5] = {3, 5, 2};
```

::right::

<img src="/img/arreglos-init-1.svg" width="180" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
---

# Arreglos
## Inicialización


::left::

Si los valores para inicializar son **menos** que el tamaño del arreglo, el resto de los elementos son inicializados en cero

```c
int vec[5] = {3, 5, 2};
```

::right::

<img src="/img/arreglos-init-1-001.svg" width="180" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
---

# Arreglos
## Inicialización

<v-clicks>

Si los valores para inicializar son **más** que el tamaño del arreglo, el compilador da un `error` o `warning` dependiendo de si está presente la opción `--pedantic-errors`

```c
int vec[5] = {3, 5, 2, 10, 4, 6};
```

```
arreglo.c: En la función ‘main’:
arreglo.c:4:33: error: exceso de elementos en el inicializador de matriz
    4 |   int vec[5] = {3, 5, 2, 10, 4, 6};
      |                                 ^
arreglo.c:4:33: note: (cerca de la inicialización de ‘vec’)
```

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Inicialización

<v-clicks>

Se puede inicializar **todo** el arreglo poniendo entre llaves un número cero

```c
int vec[5] = {0};
```

Estrictamente hablando de esta forma se inicializa el primer elemento en cero, y el resto de los elementos en cero.

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Inicialización

<v-clicks>

Se puede omitir el tamaño entre los corchetes, siempre y cuando se usen las llaves para inicializar.


```c
int vec[] = {3, 5, 2, 10, 4};
```

...pero el tamaño del arreglo siempre corresponderá a la cantidad de elementos inicializados entre llaves

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Inicialización

<v-clicks>

Si se omiten tanto el tamaño entre corchetes como los inicializadores el compilador da error

```c
int vec[];
```

```
arreglo.c: En la función ‘main’:
arreglo.c:4:7: error: falta el tamaño de la matriz en ‘vec’
    4 |   int vec[];
      |       ^~~
```

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones


<v-clicks>

En C se pueden definir arreglos multidimensionales


```c
int mat[3][4];
```


El número entre corchetes a la izquierda determina la cantidad de filas.

El número entre corchetes a la derecha determina la cantidad de columnas.

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones

<img src="/img/arreglo2d.svg" width="350" style="margin: auto; position: relative; top: 10px" >

Para acceder a cualquier elemento hay que utilizar los índices de filas y columnas.

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

Como los arreglos de 1 dimensión, se utilizan llaves por cada fila y todas las filas también entre llaves.

```c
int mat[2][3] = { {8,5,3}, {4,6,7} };
```

<img src="/img/arreglo2d-001.svg" width="300" style="margin: auto; position: relative; top: 0px" >

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

Se pueden inicializar de forma incompleta, donde los elementos faltantes se ponen en cero.

```c
int mat[2][3] = { {8,5}, {4} };
```

<img src="/img/arreglo2d-002.svg" width="300" style="margin:auto; position: relative; top: 0px" >

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

...incluso pueden faltar filas.


```c
int mat[2][3] = { {8,5} };
```

<img src="/img/arreglo2d-003.svg" width="300" style="margin: auto; position: relative; top: 0px" >

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

O todos los elementos, salvo el primero. Sirve para inicializar en cero todo el arreglo.

```c
int mat[2][3] = { {0} };
```

<img src="/img/arreglo2d-004.svg" width="300" style="margin:auto; position: relative; top: 0px" >

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

Se pueden omitir un par de llaves en el caso de ser cero...

```c
int mat[2][3] = {0};
```

<img src="/img/arreglo2d-004.svg" width="300" style="margin:auto; position: relative; top: 0px" >

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

...pero da un [`warning`]{style="color: #F1502F"} si se usa otro número

```c
int mat[2][3] = {1};
```

```
mat.c: En la función ‘main’:
mat.c:4:19: warning: faltan llaves alrededor del inicializador
    4 |   int mat[2][3] = {1};
      |                   ^
      |                    {}
```

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Inicialización

<v-clicks>

...de todas formas la inicialización es la esperada (pero no hay que dejar pasar los [`warning`]{style="color: #F1502F"})


```c
int mat[2][3] = {1};
```

<img src="/img/arreglo2d-005.svg" width="300" style="margin:auto; position: relative; top: 0px" >

</v-clicks>

---
class: text-2xl
---

# Arreglos
## Arreglos de 2 Dimensiones - Acceso

<v-clicks>

```c
int mat[3][3] = {0};

mat[1][1] = 1;

for (int i = 0; i < 3; i++ ) {
  for (int j = 0; j < 3; j++ )
    printf("%d ", mat[i][j]);
  printf("\n");
}
```

```
0 0 0
0 1 0
0 0 0
```

</v-clicks>

---

```c
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
```

---
class: text-2xl
---

```c
  for (int i = 0; i < N; i++ )
    for (int j = 0; j < N; j++ )
      if (i == j)
        mat[i][j] = 1;

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
```

---
class: text-2xl
---

```c
  for (int i = 0; i < N; i++ )
    mat[i][i] = 1;

  for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
      printf("%d ", mat[i][j]);
    printf("\n");
  }
```

---
class: text-2xl
---

# Pasaje de arreglos a funciones

<v-clicks>

A diferencia de las variables, al pasar los arreglos a las funciones, los cambios que se hagan sobre el arreglo, **afectan** al arreglo original

En el llamado **no** deben usarse los corchetes, solo el nombre del arreglo

En la definición el arreglo, en la lista de parámetros, debe tener corchetes


</v-clicks>

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>
#define N 10

void carga (int vec[N]) {
  for (int i = 0; i < N; i++)
    vec[i] = i;
}

int main (void) {
  int vec[N] = {0};

  carga(vec);
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>
#define N 10

void carga (int vec[N]) { // [!code range: int vec[N]]
  for (int i = 0; i < N; i++)
    vec[i] = i;
}

int main (void) {
  int vec[N] = {0};

  carga(vec);
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>
#define N 10

void carga (int vec[N]) { // [!code range: int vec[N]]
  for (int i = 0; i < N; i++)
    vec[i] = i;
}

int main (void) {
  int vec[N] = {0};

  carga(vec); // [!code word-once: vec]
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```

---
transition: none
class: text-2xl
---

# Pasaje de arreglos a funciones

<v-clicks>

Por motivos que se ampliarán en la unidad 8, se puede definir el arreglo en la lista de parámetros sin ningún valor entre corchetes


```c
void carga (int vec[]) {
  for (int i = 0; i < N; i++)
    vec[i] = i;
}
```

</v-clicks>

---
class: text-2xl
---

# Pasaje de arreglos a funciones

Por motivos que se ampliarán en la unidad 8, se puede definir el arreglo en la lista de parámetros sin ningún valor entre corchetes

```c
void carga (int vec[]) { // [!code range: int vec[]]
  for (int i = 0; i < N; i++)
    vec[i] = i;
}
```


---
class: text-2xl
---

# Pasaje de arreglos a funciones

<v-clicks>

Una buena práctica de programación consiste en **no** incluir ningún valor "global" en la función


```c
void carga (int vec[], int n)
{
  for (int i = 0; i < n; i++)
    vec[i] = i;
}
```

Entonces, los parámetros de la función son: el arreglo, con corchetes sin valores, y la dimensión del mismo, pero como variable


</v-clicks>

---
class: text-2xl
---

```c
#include <stdio.h>
#define N 10

void carga (int vec[], int n) {
  for (int i = 0; i < n; i++)
    vec[i] = i;
}

int main (void) {
  int vec[N] = {0};

  carga(vec, N);
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  return 0;
}
```

---
transition: none
class: text-2xl
---

# Pasaje de arreglos a funciones

<v-clicks>

En el caso de arreglos de más dimensiones, el procedimiento es el mismo, con la salvedad que solo puede omitirse el primer límite del arreglo en la definición

```c
void carga (int mat[][M], int n, int m) {
  int c = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mat[i][j] = c++;

}
```

</v-clicks>

---
layout: center
class: text-center
---

# Algoritmos

---
class: text-2xl
---

---
class: text-2xl
---

---
class: text-2xl
---

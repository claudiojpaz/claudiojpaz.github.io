---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 8
titleTemplate: '%s'
info: |
    Unidad 8  
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

# Unidad 8

# Punteros en lenguaje C

</div>

<QrOverlay title=''>

<img src="/img/info1-u08.png" class="mx-auto w-3/4" />

</QrOverlay>

---
class: text-2xl
---

# Concepto de puntero

<v-clicks>

Los punteros son variables, y como tales tienen nombre, tipo, valor y una dirección donde almacena ese valor

Lo particular que tienen los punteros es que el valor, es una dirección de memoria correspondiente a otra variable

Como todas las variables, antes de usarse deben definirse

Solo puede tener tres tipos de valores: 0, NULL o una _dirección de memoria_

</v-clicks>

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Concepto de dirección
::left::

::right::

<img src="/img/memoria-000.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Concepto de dirección

::left::

Se dice que los punteros **"apuntan"** a una variable cuando su valor es la posición de memoria de esa variable

::right::

<img src="/img/memoria-000.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Concepto de dirección

::left::

Se dice que los punteros **"apuntan"** a una variable cuando su valor es la posición de memoria de esa variable

::right::

<img src="/img/memoria-001.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Concepto de dirección

::left::

Se dice que los punteros **"apuntan"** a una variable cuando su valor es la posición de memoria de esa variable

En el ejemplo se dice que [`p`]{style="color: #FF0000"} apunta a `var`

::right::

<img src="/img/memoria-001.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
---

# Concepto de dirección

::left::

Se dice que los punteros **"apuntan"** a una variable cuando su valor es la posición de memoria de esa variable

En el ejemplo se dice que [`p`]{style="color: #FF0000"} apunta a `var`

::right::

<img src="/img/memoria-0011.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::right::
<img src="/img/memoria-002.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
int var;
```

::right::

<img src="/img/memoria-002.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
int var;
```
::right::

<img src="/img/memoria-003.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
int var;
int *p;
```

::right::

<img src="/img/memoria-003.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
int var;
int *p;
```

::right::

<img src="/img/memoria-004.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::


```c
int var;
int *p;
```

Para definir un puntero se usa un asterisco (\*) delante del nombre de la variable (o sea el puntero)

<v-clicks>

El tipo (en este caso `int`) significa que apunta a una variable que es de tipo `int`

</v-clicks>

::right::

<img src="/img/memoria-004.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
int var;
int *p;
```

::right::

<img src="/img/memoria-004.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
int var;
int *p;
```

Los punteros pueden ser de cualquier tipo

<v-clicks>

Siempre deben apuntar a variables del mismo tipo al que fueron declarados

</v-clicks>


::right::

<img src="/img/memoria-004.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::


::right::

<img src="/img/memoria-0070.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
char var;
```

::right::

<img src="/img/memoria-0071.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
char var;
char *p, *q;
```

::right::

<img src="/img/memoria-007.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
char var;
char *p, *q;
```

Cuando se declaran dos o más punteros en una misma sentencia, cada nombre debe llevar su asterisco

::right::

<img src="/img/memoria-007.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
---

# Definición de punteros

::left::

```c
char var;
char *p, *q;
```

::right::

<img src="/img/memoria-007.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Definición de punteros

::left::

```c
char var;
char *p, q;
```

::right::

<img src="/img/memoria-0073.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
---

# Definición de punteros

::left::

```c
char var;
char *p, q;
```

En este caso, `p` es un puntero a `char`, pero `q` es simplemente un `char`

::right::

<img src="/img/memoria-0073.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de dirección (`&`)

::left::

```c
char var;
char *p;
```

::right::
<img src="/img/memoria-004.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de dirección (`&`)

::left::

```c
char var;
char *p;

p = &var;
```

::right::

<img src="/img/memoria-004.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de dirección (`&`)

::left::

```c
char var;
char *p;

p = &var;
```

::right::

<img src="/img/memoria-0050.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de dirección (`&`)

::left::

```c
char var;
char *p;

p = &var;
```

El _operador de dirección_ también llamado _operador de referencia_ es un operador unario  
 (`&` ampersan), que se coloca delante de una variable y devuelve la dirección de la misma


::right::

<img src="/img/memoria-0050.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de dirección (`&`)

::left::

```c
char var;
char *p;

p = &var;
```

El _operador de dirección_ también llamado _operador de referencia_ es un operador unario  
 (`&` ampersan), que se coloca delante de una variable y devuelve la dirección de la misma


::right::

<img src="/img/memoria-0054.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
---

# Operador de dirección (`&`)

::left::

```c
char var;
char *p;

p = &var;
```

Independientemente de que `var` tenga asignado o no un valor, el puntero _apunta_ a esa posición de memoria, y se puede acceder a la misma para leer o cargar valores

::right::

<img src="/img/memoria-0050.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;
```

::right::

<img src="/img/memoria-0050.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;
```

El _operador de desreferencia_ también llamado _operador de indirección_ es un operador unario  
 (`*` asterisco), que se coloca delante de un **puntero**

::right::

<img src="/img/memoria-0050.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;
```

<v-clicks>

permite acceder indirectamente al contenido de la dirección de memoria apuntada

</v-clicks>


::right::

<img src="/img/memoria-0050.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;
```

permite acceder indirectamente al contenido de la dirección de memoria apuntada

::right::

<img src="/img/memoria-0055.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;
```

permite acceder indirectamente al contenido de la dirección de memoria apuntada

Se dice _desreferenciar el puntero_

::right::

<img src="/img/memoria-0056.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;
```

::right::

<img src="/img/memoria-0056.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
---

# Operador de desreferencia (`*`)

::left::

```c
 char var;
 char *p;

 p = &var;

 *p = 21;

 printf("%d\n", *p);
```

Puede ser tanto para cargar valor o usarlo en alguna expresión

::right::

<img src="/img/memoria-0056.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
---

```c
#include <stdio.h>

int main (void) {
  char var;
  char *p;

  p = &var;
  *p = 21;

  printf("Desde la variable: %d\n", var);
  printf("Desreferenciando el puntero: %d\n\n", *p);

  printf("La dirección de la variable: %p\n", &var);
  printf("El valor del puntero: %p\n", p);

  return 0;
}
```

---
class: text-2xl
---

```
Desde la variable: 21
Desreferenciando el puntero: 21

La dirección de la variable: 0x7ffc468430af
El valor del puntero: 0x7ffc468430af
```

---
class: text-2xl
---

# Asignaciones válidas

<v-clicks>

Como se dijo, los punteros solo pueden tener **tres** tipos de valores:  
`0`, `NULL` o una dirección de memoria


`NULL` es una constante definida en `stdio.h` (en realidad en `stddef.h` pero se incluye en la primera)


El `0` (cero) es el único entero que puede ser asignado a un puntero


Las direcciones, solo pueden ser asignadas mediante el operador de dirección (`&`) u otros punteros

</v-clicks>

---
class: text-2xl
transition: none
---

# Asignaciones válidas

<v-clicks>

**NO** se pueden hacer asignaciones de punteros de tipos incompatibles

</v-clicks>


---
class: text-2xl
transition: none
---


# Asignaciones válidas

<v-clicks>

```c
#include <stdio.h>

int main (void) {
  char var = 4;
  int *p = &var;

  printf("%d\n", *p);
  return 0;
}
```

```
$ gcc -Wall -std=c99 -pedantic-errors punteros.c
```

</v-clicks>

---
layout: two-cols-header
class: text-2xl
---

# Asignaciones válidas

```c
#include <stdio.h>

int main (void) {
  char var = 4;
  int *p = &var;

  printf("%d\n", *p);
  return 0;
}
```
```
$ gcc -Wall -std=c99 -pedantic-errors punteros.c
In function ‘main’:
error: initialization of ‘int *’ from incompatible pointer type ‘char *’
    6 |   int *p = &var;
      |            ^

```


---
class: text-2xl
---

# Asignaciones válidas

<v-clicks>

Solo se puede asignar un puntero a otro si ambos son del mismo tipo...

...con la excepción de los punteros de tipo `void`

El tipo `void` se puede usar en punteros, y significa que no es ningún tipo en particular

Se puede asignar cualquier puntero a un puntero `void`

Se puede asignar un puntero `void` a cualquier tipo de puntero

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Puntero `void`

::left::

```c
#include <stdio.h>

int main (void) {
  int var = 4;
  char *p;
  void *q;

  q = &var;
  p = q;

  printf("%d\n", *p);

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

# Puntero `void`

::left::

```c
#include <stdio.h>

int main (void) {
  int var = 4;
  char *p;
  void *q;

  q = &var; // [!code line-highlight]
  p = q;

  printf("%d\n", *p);

  return 0;
}

```

::right::

la dirección de un entero a un tipo `void`

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Puntero `void`

::left::

```c
#include <stdio.h>

int main (void) {
  int var = 4;
  char *p;
  void *q;

  q = &var;
  p = q;

  printf("%d\n", *p);

  return 0;
}

```

::right::

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Puntero `void`

::left::

```c
#include <stdio.h>

int main (void) {
  int var = 4;
  char *p;
  void *q;

  q = &var;
  p = q; // [!code line-highlight]

  printf("%d\n", *p);

  return 0;
}

```

::right::

un puntero `void` a un puntero `char`

---
class: text-2xl
---

# Puntero `void`

**NO** se puede desreferenciar un puntero `void`

---
class: text-2xl
transition: none
---


```c
#include <stdio.h>

int main (void) {
  int var = 4;
  void *q;

  q = &var;
  printf("%d\n", *q);

  return 0;
}
```

<v-clicks>

```
In function ‘main’:
warning: dereferencing ‘void *’ pointer
   10 |   printf("%d\n", *q);
      |                  ^~
error: invalid use of void expression
```


</v-clicks>

---
class: text-2xl
---

## Precedencia de Operadores (Actualizada)

<v-clicks>

$$
    \begin{array}{llll}
    \textsf{Operador}                                           &   &  & \textsf{Asociatividad} \\\hline
    () \quad []                                                 &   &  & \textsf{Izq. a Der.} \\
    + \quad - \quad (\text{tipo}) \quad ++ \quad -- \quad ! \quad \& \quad *    &   &  & \textsf{Der. a Izq.} \\
    * \quad / \quad \%                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad -                                                   &   &  & \textsf{Izq. a Der.} \\
    < \quad <= \quad > \quad >=                                 &   &  & \textsf{Izq. a Der.} \\
    == \quad !=                                                 &   &  & \textsf{Izq. a Der.} \\
    \&\&                                                        &   &  & \textsf{Izq. a Der.} \\
    ||                                                          &   &  & \textsf{Izq. a Der.} \\
    ?:                                                          &   &  & \textsf{Der. a Izq.} \\
    = \quad += \quad -=  \quad /= \quad *= \quad \%=                    &   &  & \textsf{Der. a Izq.} \\
    ,                  &   &  & \textsf{Izq. a Der.} \\
    \end{array}
$$

</v-clicks>

---
class: text-2xl
---

# Aritmética de punteros

<v-clicks->

Los punteros pueden ser operandos para operaciones de asignación, sumas y restas

Incluyendo operadores de pre y post incremento y decremento (++, --) y de incremento y decremento y asignación (+=, -=)

No se pueden usar los operadores de división o multiplicación

</v-clicks->

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros


::right::

<img src="/img/memoria-0082.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::
```c
char vec[5];
```
::right::

<img src="/img/memoria-0082.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
```

::right::

<img src="/img/memoria-0081.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;
```

::right::

<img src="/img/memoria-0081.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;
```

::right::

<img src="/img/memoria-0083.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;

p = &vec[0];
```

::right::

<img src="/img/memoria-0083.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;

p = &vec[0];
```

::right::

<img src="/img/memoria-0087.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;

p = &vec[0];
```

::right::

<img src="/img/memoria-0090.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;

p = &vec[0];

p += 1;
```

::right::

<img src="/img/memoria-0090.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

```c
char vec[5];
char *p;

p = &vec[0];

p += 1;
```

::right::

<img src="/img/memoria-0091.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

::right::

<img src="/img/memoria-0092.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Aritmética de punteros

::left::

::right::

<img src="/img/memoria-0093.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
---

# Aritmética de punteros

::left::

::right::

<img src="/img/memoria-0094.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
---

# Aritmética de punteros

<v-clicks>

La línea

```c
p += 1;
```

incrementa en 1 del puntero a `char` pasando por ejemplo de `0xAB00` a `0xAB01`

Sin embargo, si el puntero (y el arreglo) es de tipo `int` la misma línea provocaría que el puntero pase de  `0xAB00` a `0xAB04`

</v-clicks>


---
class: text-2xl
layout: default
class: flex flex-col justify-start pt-4
---

```c
#include <stdio.h>

int main (void) {
  char cadena[16];
  char *p = &cadena[0];
  int vec[16];
  int *q = &vec[0];

  printf("puntero char original: %p\n", p);
  p += 1;
  printf("      puntero char +1: %p\n\n", p);

  printf("puntero int original: %p\n", q);
  q += 1;
  printf("      puntero int +1: %p\n", q);

  return 0;
}
```

---
class: text-2xl
---

```
puntero char original: 0x7ffd9bb33cb0
      puntero char +1: 0x7ffd9bb33cb1

puntero int original: 0x7ffd9bb33c70
      puntero int +1: 0x7ffd9bb33c74
```

---
class: text-2xl
---

# Relación entre punteros y arreglos

<v-clicks>

Los punteros y los arreglos están íntimamente relacionados, y en ocasiones pueden ser intercambiados


Esto es debido a que el nombre del arreglo (solo el nombre sin los corchetes) es igual a la dirección de memoria del primer elemento

</v-clicks>

---
class: text-2xl
layout: default
class: flex flex-col justify-start pt-4
---

```c
#include <stdio.h>

int main (void)
{
  int vec[16];
  int *p;

  p = &vec[0];
  printf("%p\n", p);
  p = vec;
  printf("%p\n", p);

  return 0;
}
```

```
0x7ffd598a5110
0x7ffd598a5110
```

---
class: text-2xl
---

# Relación entre punteros y arreglos

<v-clicks>

Después de la línea `p = &vec[0];` se pueden acceder a los elementos desreferenciando el puntero y un desplazamiento, por ejemplo


```c
 *(p + 3) = 7;

```

asigna un 7 al elemento `vec[3]`

Esto se conoce como _notación puntero/desplazamiento_, también se puede hacer

```c
 *(vec + 3) = 7;
```

</v-clicks>

---
class: text-2xl
---

# Relación entre punteros y arreglos

<v-clicks>

También es posible usar el puntero con _notación puntero/índice_

```c
 int vec[5];
 int *p;
 p = vec;
 p[3] = 7;
```

Esto será útil en las funciones

</v-clicks>

---
class: text-2xl
---

# Implementación de llamadas a función por referencia

<v-clicks>

Como se dijo, en los lenguajes en general, los llamados a funciones se pueden hacer pasando variables _por valor_ o _por referencia_

Sin embargo, en C los llamados son siempre por valor.

Pero se pueden implementar llamadas _por referencia_ usando punteros, pasando la dirección de la variable a modificar en la función.

</v-clicks>

---
layout: two-cols-header
class: text-2xl
layoutClass: gap-4
transition: none
---

::left::

```c
#include <stdio.h>

void addone (int *p) {
  *p += 1;
}

int main (void) {
  int n = 3;

  addone(&n);

  printf("%d\n", n);

  return 0;
}
```

::right::

---
layout: two-cols-header
class: text-2xl
layoutClass: gap-4
transition: none
---

::left::

```c
#include <stdio.h>

void addone (int *p) {
  *p += 1;
}

int main (void) {
  int n = 3;

  addone(&n);

  printf("%d\n", n);

  return 0;
}
```

::right::

```
4
```

---
class: text-2xl
layout: two-cols-header
layoutClass: gap-4
transition: none
---

::left::

````md magic-move
```c
#include <stdio.h>

void addone (int *p) {
  *p += 1;
}

int main (void) {
  int n = 3;

  addone(&n);

  printf("%d\n", n);

  return 0;
}
```
```c
#include <stdio.h>

void addone (int *p) {
  *p += 1;
}

int main (void) {
  int n = 3;

  addone(&n);
  addone(&n);

  printf("%d\n", n);

  return 0;
}
```
````

::right::

---
class: text-2xl
layout: two-cols-header
layoutClass: gap-4
---

::left::

```c
#include <stdio.h>

void addone (int *p) {
  *p += 1;
}

int main (void) {
  int n = 3;

  addone(&n);
  addone(&n);

  printf("%d\n", n);

  return 0;
}
```

::right::

```
5
```

---
class: text-2xl
layout: two-cols-header
layoutClass: gap-4
transition: none
---

::left::

```c
#include <stdio.h>

void cuadrado (int *p) {
  *p *= *p;
}

int main (void) {
  int n = 4;

  cuadrado(&n);

  printf("%d\n", n);

  return 0;
}
```

::right::

---
class: text-2xl
layout: two-cols-header
layoutClass: gap-4
---

::left::

```c
#include <stdio.h>

void cuadrado (int *p) {
  *p *= *p;
}

int main (void) {
  int n = 4;

  cuadrado(&n);

  printf("%d\n", n);

  return 0;
}
```

::right::

```
16
```

---
class: text-2xl
---

# Pasaje de punteros a funciones

Entonces desde un función se puede modificar una variable declarada en el main u otra función (siempre que esta no haya finalizado) usando direcciones como argumentos y punteros como parámetros en las funciones llamadas.

---
class: text-2xl
---

# Calificador [`const`]{style="color: #F1502F"}

<v-clicks>

Usar el calificador `const` evita que se modifique una variable, intentar hacerlo es un error de compilación

```c
  int var;
  const int *p = &var;

  *p = 42;
  printf("%d\n", *p);
```

```
error: assignment of read-only location ‘*p’
   *p = 42;
      ^
```
</v-clicks>

---
class: text-2xl
---

# Calificador [`const`]{style="color: #F1502F"}

<v-clicks>

Sin embargo, la variable podría modificarse accediendola directamente por su nombre, ya que la variable no fue definida con `const`

```c
#include <stdio.h>

int main (void) {
  int var;
  const int *p = &var;

  var = 42;
  printf("%d\n", *p);

  return 0;
}
```

```
42
```
</v-clicks>

---
class: text-2xl
---

# Calificador [`const`]{style="color: #F1502F"}

<v-clicks>

Esta característica se usa generalmente en funciones para asegurarse que los datos pasados no sean modificados

```c
void copiar (const char *p, char *q) {
  for (int i = 0; *(p+i) != 0; i++)
    *(q+i) = *(p+i);
}
```

En esa función, la expresión `const char *p` asegura que la cadena apuntada por p no sea modificada en la función

</v-clicks>

---
class: text-2xl
---

# Calificador [`const`]{style="color: #F1502F"}

<v-clicks>

Hay cuatro formas de usar el calificador .red[const] en la lista de parámetros asociados a punteros

* puntero no constante a dato no constante
* puntero no constante a dato constante
* puntero constante a dato no constante
* puntero constante a dato constante

</v-clicks>

---
class: text-2xl
transition: none
---

## Puntero no constante a dato no constante

<v-clicks>

Se puede modificar el valor del puntero y el valor de la variable a la que apunta

```c
void carga_nota (int *pnotas, int n) {
  int nota;
  for (int i=0; i < n; i++) {
    do {
      printf("Ingrese una calificación: ");
      scanf("%d", &nota);
    } while (nota<1||nota>10);
    *pnotas++ = nota;
  }
}
```

</v-clicks>

---
class: text-2xl
transition: none
---

## Puntero no constante a dato no constante

Se puede modificar el valor del puntero y el valor de la variable a la que apunta

```c
void carga_nota (int *pnotas, int n) { // [!code range:int *]
  int nota;
  for (int i=0; i < n; i++) {
    do {
      printf("Ingrese una calificación: ");
      scanf("%d", &nota);
    } while (nota<1||nota>10);
    *pnotas++ = nota;
  }
}
```

---
class: text-2xl
---

## Puntero no constante a dato no constante

Se puede modificar el valor del puntero y el valor de la variable a la que apunta

```c
void carga_nota (int *pnotas, int n) { // [!code range:int *]
  int nota;
  for (int i=0; i < n; i++) {
    do {
      printf("Ingrese una calificación: ");
      scanf("%d", &nota);
    } while (nota<1||nota>10);
    *pnotas++ = nota; // [!code line-highlight]
  }
}
```


---
class: text-2xl
transition: none
---

## Puntero no constante a dato constante

<v-clicks>


Se puede modificar el valor del puntero y pero **no** el valor de la variable a la que apunta

```c
void imprimir (const int *pnotas, int n) {
  for (int i=0; i < n; i++)
    printf("%d\n", *pnotas++);
}
```

</v-clicks>

---
class: text-2xl
---

## Puntero no constante a dato constante

Se puede modificar el valor del puntero y pero **no** el valor de la variable a la que apunta

```c
void imprimir (const int *pnotas, int n) { // [!code range:const int *]
  for (int i=0; i < n; i++)
    printf("%d\n", *pnotas++);
}
```

<v-clicks>

El puntero _apunta_ a un tipo _const int_

El valor del puntero se puede modificar

La variable original **no** puede modificarse usando el puntero

</v-clicks>

---
class: text-2xl
transition: none
---

## Puntero constante a dato no constante

<v-clicks>

**No** se puede modificar el valor del puntero y pero si el valor de la variable a la que apunta


```c
void carga_nota (int * const pnotas, int n) {
  int nota;
  for (int i=0; i < n; i++) {
    do {
      printf("Ingrese una calificación: ");
      scanf("%d", &nota);
    } while (nota<1||nota>10);
    *(pnotas+i) = nota; // *pnotas++ no está permitido
  }
}
```

</v-clicks>

---
class: text-2xl
---

## Puntero constante a dato no constante

**No** se puede modificar el valor del puntero y pero si el valor de la variable a la que apunta

```c
void carga_nota (int * const pnotas, int n) { // [!code range:int * const ]
  int nota;
  for (int i=0; i < n; i++) {
    do {
      printf("Ingrese una calificación: ");
      scanf("%d", &nota);
    } while (nota<1||nota>10);
    *(pnotas+i) = nota; // *pnotas++ no está permitido
  }
}
```

---
class: text-2xl
transition: none
---

## Puntero constante a dato constante

<v-clicks>

**No** se puede modificar el valor del puntero y **no** se puede modificar el valor de la variable a la que apunta

```c
void imprimir (const int * const pnotas, int n) {
  for (int i=0; i < n; i++)
    printf("%d\n", *(pnotas+i));
}
```

</v-clicks>

---
class: text-2xl
---

## Puntero constante a dato constante

**No** se puede modificar el valor del puntero y **no** se puede modificar el valor de la variable a la que apunta

```c
void imprimir (const int * const pnotas, int n) { // [!code range:const int * const ]
  for (int i=0; i < n; i++)
    printf("%d\n", *(pnotas+i));
}
```

<v-clicks>

No se puede hacer algo como `pnotas++` ni nada que modifique el valor del puntero

No se puede hacer algo como `*(pnotas + 1) = 10` ni nada que modifique el valor de algún elemento en el arreglo

</v-clicks>

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::

::right::

<img src="/img/memoria-0100.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
```

::right::

<img src="/img/memoria-0100.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
```

::right::

<img src="/img/memoria-0100.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
```

::right::

<img src="/img/memoria-0101.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
```

::right::

<img src="/img/memoria-0102.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::

```c
 char var;
 char *p;
 char **q;
```

::right::

<img src="/img/memoria-0102.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;
```

::right::

<img src="/img/memoria-0103.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;
```

Si `p` apunta a un tipo `char`,
el puntero `q` así definido podrá apuntar a un tipo `char *`

<v-clicks>

Se dice que `q` es un _puntero a puntero_

</v-clicks>


::right::

<img src="/img/memoria-0103.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
---
# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;
```
::right::

<img src="/img/memoria-0103.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
```
::right::

<img src="/img/memoria-0103.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
```
::right::


<img src="/img/memoria-0104.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;
```

::right::

<img src="/img/memoria-0104.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;
```

::right::

<img src="/img/memoria-0105.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
```

::right::

<img src="/img/memoria-0105.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
```

::right::


<img src="/img/memoria-0106.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14;
```

::right::

<img src="/img/memoria-0106.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14;
```

::right::


<img src="/img/memoria-0107.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14;
```

::right::

<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14; // [!code line-highlight]
```

::right::

<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14; // [!code line-highlight]
```

En esta línea, el operador de desreferencia que tiene mayor precedencia es el de la derecha, que opera sobre el puntero `q`

::right::

<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---
# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14; // [!code line-highlight]
```

::right::


<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 *(*q) = 14; // [!code line-highlight]
```

::right::



<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 *(*q) = 14; // [!code line-highlight]
```


Equivale a encerrarlos entre paréntesis

<v-clicks>

desreferenciar `q`, o sea (`*q`), trae el contenido del puntero `p` (que es la dirección de `var`)

</v-clicks>

::right::

<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---
# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 *(*q) = 14; // [!code line-highlight]
```

::right::


<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
---
# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 *(*q) = 14; // [!code line-highlight]
```

Entonces al hacer la doble desreferencia de `q` se accede a la variable `var`

::right::


<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
---
# Punteros a puntero

::left::
```c
 char var;
 char *p;
 char **q;

 p = &var;
 q = &p;

 printf("%p", *q);
 **q = 14; // [!code line-highlight]
```

::right::

<img src="/img/memoria-0108.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
---

# Arreglos de caracteres (debería estar en la U07)

<v-clicks>

En general, en programación, las cadenas son conjuntos de caracteres.

Hay que diferenciar los caracteres individuales como `'a'` de una cadena como `"hola, mundo!"`

Los caracteres individuales están rodeados con comillas simples y las cadenas con comillas dobles

</v-clicks>

---
class: text-2xl
---

# Arreglos de caracteres (debería estar en la U07)

<v-clicks>

En lenguaje C, los caracteres individuales que se pueden almacenar en un `char`

```c
char caracter = 'a';

printf("%c", caracter);
```

y las cadenas como `"Hola, mundo!"` se pueden guardar en un arreglo de tipo `char`

```c
char cadena[13] = {'h','o','l','a',',',' ','m','u','n','d','o','!','\0'}

printf("%s", cadena);
```

El caracter `'\0'` es el caracter nulo, no es imprimible y en la tabla ASCII vale `0`

</v-clicks>

---
class: text-2xl
---

# Arreglos de caracteres (debería estar en la U07)

<v-clicks>

```c
char cadena[13] = {'h','o','l','a',',',' ','m','u','n','d','o','!','\0'}

printf("%s", cadena);
```

Las cadenas se pueden imprimir con el especificador de formato `%s`

Como cualquier arreglo, su paso a funciones es sin los corchetes.

Las cadenas deben finalizar en `0` o `'\0'` para poder ser impresas sin errores por `printf`

Este caracter se conoce como _terminador nulo_ o _null terminator_

</v-clicks>

---
class: text-2xl
transition: none
---

# Arreglos de caracteres (debería estar en la U07)

<v-clicks>

No es necesario inicializar las cadenas elemento por elemento como los arreglos comunes

en cambio se permite (solo para arreglos de char que sean cadenas) que el arreglo sea inicializado con una cadena (entre comillas dobles) sin llaves.

</v-clicks>

---
class: text-2xl
---

# Arreglos de caracteres (debería estar en la U07)

No es necesario inicializar las cadenas elemento por elemento como los arreglos comunes

en cambio se permite (solo para arreglos de char que sean cadenas) que el arreglo sea inicializado con una cadena (entre comillas dobles) sin llaves.

````md magic-move
```c
char cadena[13] = {'h','o','l','a',',',' ','m','u','n','d','o','!','\0'}

```
```c
char cadena[13] = "hola, mundo!\0";

```
````

---
class: text-2xl
---

# Arreglos de caracteres (debería estar en la U07)

<v-clicks>

Como el _terminador nulo_ es un `0` permite que al ser inicializado, el arreglo ya termine con ese valor siempre y cuando el tamaño sea suficiente para que al final haya al menos un caracter más.

```c
char cadena[13] = "hola, mundo!";

for (int i = 0; i < 13; i++)
  printf("%d ", cadena[i]);
```

```
104 111 108 97 44 32 109 117 110 100 111 33 0
```


</v-clicks>

---
class: text-2xl
---

# Arreglos de caracteres (debería estar en la U07)

<v-clicks>

Incluso si se omite el tamaño del arreglo, al inicializarse como cadena, automáticamente se deja un elemento extra para el _terminador nulo_

```c
char cadena[] = "hola, mundo!";
long unsigned int n = sizeof cadena;

printf("Tamaño de la cadena: %lu\n", n);

for (int i = 0; i < n; i++)
  printf("%d ", cadena[i]);
```

```
Tamaño de la cadena: 13
104 111 108 97 44 32 109 117 110 100 111 33 0
```


</v-clicks>

---
class: text-2xl
---

# Arreglos de caracteres (de vuelta a la U08)

<v-clicks>

Para almacenar cadenas se vieron los arreglos de caracteres, su inicialización y su uso

```c
char saludo[] = "hola, mundo!";

saludo[6] = 'M';
printf("%s\n", saludo);
```

La cadena `saludo` así definida tiene el tamaño justo para la frase _hola, mundo!_ + un caracter para el cero de final de línea

La cadena se puede modificar siempre y cuando no se supere el tamaño original

</v-clicks>


---
class: text-2xl
transition: none
---

# Punteros a cadenas constantes

<v-clicks>

Otra manera de almacenar cadenas es con los punteros a cadenas de caracteres

```c
char *saludo = "hola, mundo!";

printf("%s\n", saludo);
```

La diferencia fundamental es que **no** se pueden modificar. Se pueden considerar cadenas constantes

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a cadenas constantes

Otra manera de almacenar cadenas es con los punteros a cadenas de caracteres

````md magic-move
```c
char *saludo = "hola, mundo!";

printf("%s\n", saludo);
```
```c
char *saludo = "hola, mundo!";

saludo[6] = 'M';
printf("%s\n", saludo);
```
````

---
class: text-2xl
transition: none
---

# Punteros a cadenas constantes

Otra manera de almacenar cadenas es con los punteros a cadenas de caracteres

```c
char *saludo = "hola, mundo!";

saludo[6] = 'M';
printf("%s\n", saludo);
```

Intentar modificar una cadena apuntada por un puntero no es detectado por el compilador como un error, sin embargo falla en la ejecución

<v-clicks>

```
$ gcc -Wall -std=c99 --pedantic-errors pcad.c
```

</v-clicks>

---
class: text-2xl
---

# Punteros a cadenas constantes

Otra manera de almacenar cadenas es con los punteros a cadenas de caracteres

```c
char *saludo = "hola, mundo!";

saludo[6] = 'M';
printf("%s\n", saludo);
```

Intentar modificar una cadena apuntada por un puntero no es detectado por el compilador como un error, sin embargo falla en la ejecución


```
$ gcc -Wall -std=c99 --pedantic-errors pcad.c
$ ./a.out
[1]    154887 segmentation fault (core dumped)  ./a.out
```

---
class: text-2xl
---

# Punteros a cadenas constantes


Una mejora que se puede implementar es usar el calificador `const`

````md magic-move
```c
char *saludo = "hola, mundo!";

saludo[6] = 'M';
printf("%s\n", saludo);
```
```c
const char *saludo = "hola, mundo!";

saludo[6] = 'M';
printf("%s\n", saludo);
```
````

<v-clicks>
Ahora intentar modificar la cadena tampoco está permitido, pero el compilador da mensaje de error si se intenta

```
$ gcc -Wall -std=c99 --pedantic-errors pcad.c
pcad.c: En la función ‘main’:
pcad.c:6:13: error: asignación de la ubicación de sólo lectura
                                                ‘*(saludo + 6)’
    6 |   saludo[6] = 'M';
      |             ^
```

</v-clicks>

---
class: text-2xl
---

# Arreglos de cadenas (U07 de nuevo?)

<v-clicks>

Para almacenar varias cadenas se puede tener un arreglo bidimensional de caracteres

```c
char numeros[5][10] = {"cero", "uno", "dos", "tres", "cuatro"};

for(int i = 0; i < 5; i++)
  printf("%s\n", numeros[i]);
```
```
cero
uno
dos
tres
cuatro
```

</v-clicks>

---
class: text-2xl
---

# Arreglos de cadenas (U07 de nuevo?)


```c
char numeros[5][10] = {"cero", "uno", "dos", "tres", "cuatro"};

for(int i = 0; i < 5; i++)
  printf("%s\n", numeros[i]);
```
```
cero
uno
dos
tres
cuatro
```
<v-clicks>

Esto define un arreglo de 5 filas, donde el tamaño máximo de cada fila es 10 caracteres (una cadena de 10 caracteres)

La expresión `numeros[i]` devuelve la dirección de memoria del primer elemento de la fila `i` (o sea la i-ésima cadena)

</v-clicks>



---
class: text-2xl
---

# Arreglos de cadenas (U07 de nuevo?)

<v-clicks>

<img src="/img/memoria-200.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

Las _casillas_ vacías en realidad contienen un cero (el terminador nulo `'\0'` no el caracter `'0'`) pero se omiten para hacer más claro el gráfico

</v-clicks>


---
class: text-2xl
---

# Arreglo de punteros

<v-clicks>

Para almacenar varias cadenas también se podría usar un arreglo de punteros a cadenas de caracteres

```c
char *numeros[5] = {"cero", "uno", "dos", "tres", "cuatro"};

for(int i = 0; i < 5; i++)
  printf("%s\n", *(numero+i));
```

```
cero
uno
dos
tres
cuatro
```

Esto es arreglo de 5 elementos de tipo _puntero a char_

Cada puntero apunta a una cadena de texto, que no puede ser modificada

</v-clicks>


---
class: text-2xl
transition: none
---

# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente


<img src="/img/memoria-300.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---

# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-301.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---

# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-302.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-303.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-304.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-305.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-306.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-307.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-308.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---
# Organización de los datos con arreglos de punteros

La organización de los datos cuando se utiliza un arreglo de punteros es diferente

<img src="/img/memoria-309.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
class: text-2xl
---
# Punteros vs. Arreglos multidimensionales

<v-clicks>

La principal diferencia entre los arreglos de punteros y los arreglos multidimensionales es que, volviendo al ejemplo de los números, es que en el caso de los arreglos multidimensionales las expresiones:

```
numeros
numeros[0]
&numeros[0]
&numeros[0][0]
```

hacen referencia todas a la **misma dirección**

Sin embargo, en el caso de los arreglos de punteros esto no es así

</v-clicks>

---
class: text-2xl
---

# Punteros vs. Arreglos multidimensionales

<v-clicks>

En el caso de

```c
  char *numeros[5] = {"cero", "uno", "dos", "tres", "cuatro"};
```

el arreglo consta de 5 punteros, es decir, cada elemento tiene un tamaño de 8 bytes

```c
  for (int i=0; i<5; i++)
    printf("%p\n", &numeros[i]);
```

```
0x7ffcf1587840
0x7ffcf1587848
0x7ffcf1587850
0x7ffcf1587858
0x7ffcf1587860
```

</v-clicks>

---
class: text-2xl
---

# Punteros vs. Arreglos multidimensionales

<v-clicks>

Además, como en todos los arreglos, la dirección del primer elemento es igual a la dirección devuelta por la expresión que corresponde solo al nombre del arreglo, entonces se puede decir que en cualquier caso `numeros` es igual a `&numeros[0]`

Si bien `numeros[0]` corresponde al primer elemento del arreglo, el valor contenido es la dirección de memoria donde se encuentra la cadena. Entonces la expresión `numeros[0]` es igual a `&numeros[0][0]`


Sin embargo los primeros dos son diferentes de los segundos

</v-clicks>

---
class: text-2xl
---

# Ordenamiento de estructuras utilizando arreglo de punteros

<v-clicks>

Se puede aprovechar el hecho de que los punteros se pueden intercambiar para intercambiar _filas_ de un arreglo en lugar del intercambio elemento por elemento de un arreglo bidimensional


```c
  char *numeros[5] = {"cero", "uno", "dos", "tres", "cuatro"};

  char *p = numeros[0];
  numeros[0] = numeros[1];
  numeros[1] = p;
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Ordenamiento de estructuras utilizando arreglo de punteros


<img src="/img/memoria-310.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
transition: none
---

# Ordenamiento de estructuras utilizando arreglo de punteros

<img src="/img/memoria-311.svg" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

Las cadenas no cambian su valor ni posición, cambia el orden de sus apuntadores

---
class: text-2xl
transition: none
---

# malloc, calloc, realloc y free

<v-clicks>

Así como la sentencia

```c
int var;
```

hace una reserva de un espacio de memoria de 4 bytes (en mi máquina los enteros tienen 4 bytes), y la sentencia

```c
int *q = &var;
```

define e inicializa un puntero _apuntando_ a esa posición de memoria...

</v-clicks>

---
class: text-2xl
transition: none
---

# malloc, calloc, realloc y free

<v-clicks>

...es posible hacer la reserva de memoria sin hacer la declaración de una variable usando la función `malloc` declarada en `stdlib.h`.

```c
  int *p;
  p = malloc(4);
```

Se llama con la cantidad de memoria que se necesita reservar como argumento, expresada en bytes

La función devuelve un puntero a la primera posición de la memoria reservada o un `NULL` si no se pudo hacer la reserva

</v-clicks>

---
class: text-2xl
transition: none
---

# malloc, calloc, realloc y free

<v-clicks>

Para no cometer errores en el tamaño _pedido_ o poder usar el programa en distintas arquitecturas, en lugar de pasar un valor _literal_ de memoria solicitada se pasa la expresión `sizeof (int)` o del tipo necesario


```c
  int *p;
  p = malloc(sizeof (int));
```

o también usando el puntero desreferenciado

```c
  int *p;
  p = malloc(sizeof *p);
```

</v-clicks>

---
class: text-2xl
---

# malloc, calloc, realloc y free

<v-clicks>

Cada vez que se asigne memoria mediante la función `malloc` debe tenerse en cuenta que una vez finalizado el uso de la memoria, debe liberarse la misma con la función `free`

Debe ser llamada pasando como argumento el puntero devuelto en su momento por `malloc`

```c
  int *p;
  p = malloc(sizeof (int));

  // aquí uso de la memoria
  // desreferenciando p

  free(p);
```

También puede reservarse memoria para un arreglo de tamaño `n`

</v-clicks>

---
class: text-2xl
transition: none
---

```c
  int n;
  int *p;

  printf("Ingrese cuantos elementos necesita: ");
  scanf("%d", &n);

  p = malloc(n * sizeof (int));

  for (int i = 0; i < n; i++)
    *(p+i) = i*i;

  for (int i = 0; i < n; i++)
    printf("%d ", *(p+i));

  free(p);
```

---
class: text-2xl
---

```c
  int n;
  int *p;

  printf("Ingrese cuantos elementos necesita: ");
  scanf("%d", &n);

  p = malloc(n * sizeof (int)); // [!code line-highlight]

  for (int i = 0; i < n; i++)
    *(p+i) = i*i;

  for (int i = 0; i < n; i++)
    printf("%d ", *(p+i));

  free(p);
```

---
class: text-2xl
transition: none
---

# malloc, calloc, realloc y free

<v-clicks>

Esto es más eficiente que declarar un arreglo de tamaño sobredimensionado para el problema en cuestión y después solo atender a las necesidades del usuario

Esto también es preferible entes que usar los _arreglos de dimensión variable_ los cuales **no** están admitidos en esta materia

</v-clicks>

---
class: text-2xl
---

# malloc, calloc, realloc y free

<v-clicks>

La asignación de memoria realizada por `malloc` **no** modifica el contenido de esa memoria y hay que tenerlo en cuenta para usar estas direcciones sin inicializar.

En cambio, la función `calloc` también asigna memoria, pero inicializando en cero a los espacios de memoria reservados

La función `calloc` también devuelve el puntero a la primera posición de memoria reservada, pero necesita dos argumentos: la cantidad de elementos y, el tamaño de cada elemento

</v-clicks>

---
class: text-2xl
transition: none
---

```c
  int n;
  int *p;

  printf("Ingrese cuantos elementos necesita: ");
  scanf("%d", &n);

  p = calloc(n, sizeof (int));

  for (int i = 0; i < n; i++)
    *(p+i) = i*i;

  for (int i = 0; i < n; i++)
    printf("%d ", *(p+i));

  free(p);
```

---
class: text-2xl
---

```c
  int n;
  int *p;

  printf("Ingrese cuantos elementos necesita: ");
  scanf("%d", &n);

  p = calloc(n, sizeof (int)); // [!code line-highlight]

  for (int i = 0; i < n; i++)
    *(p+i) = i*i;

  for (int i = 0; i < n; i++)
    printf("%d ", *(p+i));

  free(p);
```

---
class: text-2xl
---

# malloc, calloc, realloc y free

<v-clicks>

En ocasiones es necesario cambiar el tamaño del arreglo

La biblioteca estándar también cuenta con la función `realloc` la cual puede _redimensionar_ el arreglo

Como las otras funciones de asignación, `realloc` devuelve el puntero a la posición de memoria (re)asignada

Debe ser llamada con el puntero de la memoria que se quiere modificar como primer argumento, y el nuevo tamaño como segundo argumento

</v-clicks>

---
class: text-2xl
---

```c
int n;
int *p;

printf("Ingrese cuantos elementos necesita: ");
scanf("%d", &n);

p = calloc(n, sizeof(int));

for (int i = 0; i < n; i++)
  *(p + i) = i * i;

printf("Arreglo original:\n");
for (int i = 0; i < n; i++)
  printf("%d ", *(p + i));

printf("\n");
// continúa en el siguiente slide

```

---
class: text-2xl
transition: none
---

```c
// Aumentamos el arreglo
n += 3;
p = realloc(p, n * sizeof(int));

// Cargamos los nuevos elementos
for (int i = n - 3; i < n; i++)
  *(p + i) = i * i;

printf("Arreglo después de realloc:\n");
for (int i = 0; i < n; i++)
  printf("%d ", *(p + i));

free(p);
```

---
class: text-2xl
---

```c
// Aumentamos el arreglo
n += 3;
p = realloc(p, n * sizeof(int)); // [!code line-highlight]

// Cargamos los nuevos elementos
for (int i = n - 3; i < n; i++)
  *(p + i) = i * i;

printf("Arreglo después de realloc:\n");
for (int i = 0; i < n; i++)
  printf("%d ", *(p + i));

free(p);
```

---
class: text-2xl
---

# malloc, calloc, realloc y free

<v-clicks>

Siempre es conveniente chequear que el valor del puntero devuelto por `malloc`, `calloc` o `realloc` no sea `NULL` lo que indicaría que no fue posible la asignación, de lo contrario podría ser un error en tiempo de ejecución

Liberar por segunda vez un puntero da un error en tiempo de ejecución


Desreferenciar un puntero que apunta a memoria ya liberada también es un error en tiempo de ejecución

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a función

<v-clicks>

Los punteros también pueden apuntar a direcciones de memoria donde están implementadas las funciones


Los punteros a funciones pueden ser pasados a otras funciones o ser devueltos por funciones


Los punteros a funciones también pueden almacenarse en arreglos y asignarse a otros punteros a funciones

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a función

<v-clicks>

Al igual que con los punteros a variables, los punteros a funciones deben ser definidos antes de su uso

En las declaraciones de los punteros a funciones, debe aclararse que tipos de valores recibirá la función apuntada y que tipo de valor devolverá

Por ejemplo:

```c
int (*p)(int, int);
```

es la definición un puntero a una función que espera dos enteros y devuelve un entero

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a función

Es importante diferenciar el prototipo de una función común y corriente que devuelve un puntero a un entero

```c
  int *funcion(int, int);
```

---
class: text-2xl
transition: none
---

# Punteros a función

Es importante diferenciar el prototipo de una función común y corriente que devuelve un puntero a un entero

```c
  int *funcion(int, int); // [!code range:int *]
```

---
class: text-2xl
transition: none
---

# Punteros a función

Es importante diferenciar el prototipo de una función común y corriente que devuelve un puntero a un entero

```c
  int *funcion(int, int);
```

de un puntero a una función que devuelve un entero

---
class: text-2xl
transition: none
---

# Punteros a función

Es importante diferenciar el prototipo de una función común y corriente que devuelve un puntero a un entero

```c
  int *funcion(int, int);
```

de un puntero a una función que devuelve un entero

```c
  int (*pfuncion)(int, int);
```

---
class: text-2xl
transition: none
---

# Punteros a función

Es importante diferenciar el prototipo de una función común y corriente que devuelve un puntero a un entero

```c
  int *funcion(int, int);
```

de un puntero a una función que devuelve un entero

```c
  int (*pfuncion)(int, int); // [!code range: *pfuncion ]
```

---
class: text-2xl
---

# Punteros a función

Es importante diferenciar el prototipo de una función común y corriente que devuelve un puntero a un entero

```c
  int *funcion(int, int);
```

de un puntero a una función que devuelve un entero

```c
  int (*pfuncion)(int, int);
```

El uso de los paréntesis es la única forma de diferenciar entre los dos casos

---
class: text-2xl
---

# Punteros a función

<v-clicks>

Al igual que los arreglos, **el nombre de la función indica la posición de memoria donde comienza su implementación**

Entonces si se tiene una definición de función como

```c
int add (int a, int b) {
  return a+b;
}
```

Se puede hacer una asignación como

```c
  int (*p)(int, int);
  p = add;
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a función

<v-clicks>

El llamado a las funciones apuntadas por medio de la desreferencia se puede hacer con

```c
  int (*p)(int, int);
  p = add;

  printf("%d\n", (*p) (5,3) );
```

En lugar de usar el nombre de la función se usa el puntero desreferenciado

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a las funciones apuntadas por medio de la desreferencia se puede hacer con

```c
  int (*p)(int, int);
  p = add;

  printf("%d\n", (*p) (5,3) ); // [!code range: *p]
```

En lugar de usar el nombre de la función se usa el puntero desreferenciado

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a las funciones apuntadas por medio de la desreferencia se puede hacer con

```c
  int (*p)(int, int);
  p = add;

  printf("%d\n", (*p) (5,3) );
```

En lugar de usar el nombre de la función se usa el puntero desreferenciado

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a las funciones apuntadas por medio de la desreferencia se puede hacer con

```c
  int (*p)(int, int);
  p = add;

  printf("%d\n", (*p) (5,3) );
```

En lugar de usar el nombre de la función se usa el puntero desreferenciado

El paso de argumentos se hace encerrando la lista entre paréntesis como en una función común

---
class: text-2xl
---

# Punteros a función

El llamado a las funciones apuntadas por medio de la desreferencia se puede hacer con

```c
  int (*p)(int, int);
  p = add;

  printf("%d\n", (*p) (5,3) );  // [!code range: (5,3)]
```


En lugar de usar el nombre de la función se usa el puntero desreferenciado

El paso de argumentos se hace encerrando la lista entre paréntesis como en una función común

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

::left::

```c
#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}
int resta (int a, int b) {
  return a-b;
}

```

::right::

```c
int main (void) {
  int (*p)(int,int);
  int r;

  p = suma;
  r = (*p)(5,4);
  printf("%d\n",  r);

  p = resta;
  r = (*p)(5,4);
  printf("%d\n",  r);

  return 0;
}

```

---
class: text-2xl
---

# Punteros a función

<v-clicks>

La expresión `r = (*p)(5,4);` podría escribirse
```c
  r = p(5,4);
```
sin usar el operador de desreferencia

Sin embargo esto no es aconsejable porque se _pierde_ la información a cerca de `p`...

Alguien podría pensar que es una función que no está definida

Se aconseja usar la versión con el operador de desreferencia


</v-clicks>

---
class: text-2xl
---

# Punteros a función

Un ejemplo un poco más complejo es el siguiente. Supongamos las dos funciones ya vistas que resuelven una operación, ambas reciben dos enteros y devuelven un entero

```c
int suma (int a, int b) {
  return a+b;
}

int resta (int a, int b) {
  return a-b;
}
```

---
class: text-2xl
transition: none
---

# Punteros a función

En lugar de definir el puntero en la función `main`, se lo pone en la lista de parámetros de una función, que recibe además los operandos que se le pasan al puntero a función

```c
void pregunta (int (*p)(int,int), int a, int b, char signo){
  int r;
  printf("¿Cuánto es %d%c%d? ", a, signo, b);
  scanf("%d", &r);

  if (r == (*p)(a,b))
    printf("Correcto\n");
  else
    printf("Incorrecto\n");
}
```

---
class: text-2xl
---

# Punteros a función

En lugar de definir el puntero en la función `main`, se lo pone en la lista de parámetros de una función, que recibe además los operandos que se le pasan al puntero a función

```c
void pregunta (int (*p)(int,int), int a, int b, char signo){ // [!code range: int (*p)(int,int)]
  int r;
  printf("¿Cuánto es %d%c%d? ", a, signo, b);
  scanf("%d", &r);

  if (r == (*p)(a,b))
    printf("Correcto\n");
  else
    printf("Incorrecto\n");
}
```

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a la función, se hace simplemente pasando el nombre de la función

```c
int main (void) {

  pregunta(suma, 5, 4, '+');

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a la función, se hace simplemente pasando el nombre de la función

```c
int main (void) {

  pregunta(suma, 5, 4, '+'); // [!code range: suma]

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a la función, se hace simplemente pasando el nombre de la función

```c
int main (void) {

  pregunta(suma, 5, 4, '+');

  return 0;
}
```

<v-clicks>

También se puede enviar otra función

</v-clicks>

---
class: text-2xl
transition: none
---

# Punteros a función

El llamado a la función, se hace simplemente pasando el nombre de la función

````md magic-move
```c
int main (void) {

  pregunta(suma, 5, 4, '+');

  return 0;
}
```
```c
int main (void) {

  pregunta(suma, 5, 4, '+');
  pregunta(resta, 5, 4, '-');

  return 0;
}
```
````

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
---

# Punteros a puntero

::left::

::right::

<img src="/img/memoria-0100.svg" width="200" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


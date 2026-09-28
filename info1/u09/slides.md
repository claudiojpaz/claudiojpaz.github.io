---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 9
titleTemplate: '%s'
info: |
    Unidad 9  
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

# Unidad 9


# Estructuras, uniones y campos de bit en C

</div>

<QrOverlay title=''>

<img src="/img/info1-u09.png" class="mx-auto w-3/4" />

</QrOverlay>

---
class: text-2xl
---

# Repaso

<v-clicks>

Los int, char, float con todos sus calificadores, junto con el tipo void y los punteros son conocidos como _tipos escalares_


Los arreglos, vistos en la Unidad 7, forman parte de los _tipos agregados_


Los arreglos sirven para almacenar datos relacionados del mismo tipo bajo un mismo nombre


Existe otra forma de datos de _tipo agregado_...

</v-clicks>

---
class: text-2xl
---

# Estructuras

<v-click>

Las estructuras son tipos de datos _derivados_ que agrupan datos relacionados que <span v-mark.underline.orange="{at: [3]}">pueden ser de distinto tipo </span>

</v-click>
<v-click>

Ej. una estructura que tenga un entero y un char

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
struct dato {
  int a;
  char b;
};
```

::right::

<v-click>

`struct` es la palabra reservada para indicar que se define una estructura

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
struct dato {
  int a;
  char b;
};
```

::right::

<v-click>


`dato` es la _etiqueta_ de la estructura

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
struct dato {
  int a;
  char b;
};
```

::right::

<v-click>

entre llaves se definen los _miembros_ de la estructura (la cantidad que se quiera)

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
struct dato {
  int a;
  char b;
};
```

::right::

<v-click>


los _miembros_ son variables de cualquier tipo, se definen con tipo y nombre, terminan en punto y coma (;)

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
struct dato {
  int a;
  char b;
};
```

::right::

<v-click>

los _miembros_ pueden ser de cualquier tipo, incluso arreglos, punteros u otras estructuras.

</v-click>

---
layout: two-cols-header
class: text-2xl
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
struct dato {
  int a;
  char b;
};
```

::right::

<v-click>

la _definición de la estructura_ termina con punto y coma (;)

</v-click>

---
class: text-2xl
---

# Estructuras. Definición

<v-clicks>

La definición de una estructura no asigna memoria, solo _crea_ un nuevo tipo de datos que puede ser usado para definir variables

Para definir una variable con el nuevo tipo, se antepone al nombre de la variable la palabra `struct` y el nombre de la etiqueta de la estructura

```c
  struct dato d;
```

en este ejemplo se define una variable `d` de tipo `struct dato` definido anteriormente

</v-clicks>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d;

  return 0;
}
```
</v-click>

::right::

<v-click>

La definición de las variables de tipo `struct dato` deberán hacerse, luego de la definición de la estructura

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d; // [!code line-highlight]

  return 0;
}
```

::right::


La definición de las variables de tipo `struct dato` deberán hacerse, luego de la definición de la estructura


---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d;

  return 0;
}
```

::right::

<v-click>

Es en este momento donde se hace la reserva de memoria

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Estructuras. Definición

::left::

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d;

  return 0;
}
```

::right::

<v-click>

<img src="/img/memoria-struct-001.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

</v-click>

---
class: text-2xl
transition: none
---

# Estructuras. Definición

<v-clicks>

Se pueden definir variables en la misma definición de la estructura si se necesita que sean globales...

En lugar de

```c
#include <stdio.h>

struct dato {
 int a;
 char b;
};

struct dato d;

int main (void) {
    // aquí se puede usar d, ya está definida

```

</v-clicks>

---
class: text-2xl
transition: none
---

# Estructuras. Definición


Se pueden definir variables en la misma definición de la estructura si se necesita que sean globales...

<v-clicks>

Se puede usar

```c
#include <stdio.h>

struct dato {
 int a;
 char b;
} d;

int main (void) {
    // aquí se puede usar d, ya está definida

```

</v-clicks>

---
class: text-2xl
---

# Estructuras. Definición


Se pueden definir variables en la misma definición de la estructura si se necesita que sean globales...


Se puede usar

```c
#include <stdio.h>

struct dato {
 int a;
 char b;
} d; // [!code word-once:d]

int main (void) {
    // aquí se puede usar d, ya está definida

```
<v-clicks>

En este caso, `d` es una variable global

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Inicialización


::left::
<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {1, 'a'};

  return 0;
}
```
</v-click>

::right::

<v-click>

Al igual que en los arreglos se inicializan entre llaves, donde los elementos se asignan en el orden que están definidos dentro de la estructura

</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Inicialización

::left::

<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {0};

  return 0;
}
```
</v-click>

::right::
<v-click>

Si se desea hacer todos los elementos iguales a cero, se coloca entre las llaves un cero
</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Inicialización

::left::
<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {1};

  return 0;
}
```
</v-click>

::right::

<v-click>

Si hay menos inicializadores que miembros, los que faltan son puestos en cero
</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Inicialización

::left::

<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {1, 'a', 3.14};

  return 0;
}
```

</v-click>

::right::

<v-click>

Si hay más inicializadores que miembros, se genera una advertencia  
(o error con  
`-pedantic-errors`)

</v-click>

---
class: text-2xl
---

# Operador punto

En el caso de los arreglos se usaban los `[]` (corchetes) para identificar cada elemento que componía el arreglo

En el caso de las estructuras, se utiliza el operador punto y el nombre del miembro al que se quiere acceder

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

# Operador punto

::left::

<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {1, 'a'};

  printf("miembro a: %d\n", d.a);
  printf("miembro b: %c\n", d.b);

  return 0;
}
```

</v-click>

::right::

<v-clicks>

La variable `d`, al ser de tipo `struct dato` tiene miembros llamados `a` y `b` a los que se accede mediante el operador punto

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

# Operador punto

::left::

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {1, 'a'};

  printf("miembro a: %d\n", d.a); // [!code range: d.a]
  printf("miembro b: %c\n", d.b); // [!code range: d.b]

  return 0;
}
```

::right::

La variable `d`, al ser de tipo `struct dato` tiene miembros llamados `a` y `b` a los que se accede mediante el operador punto

<v-clicks>

`d.a` es un entero y se lo puede usar usar como a cualquier entero, al igual que `d.b` es usado como cualquier caracter


```
miembro a: 1
miembro b: a
```

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
transition: none
class: text-2xl -translate-y-8
---

::left::

<v-click>

```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {0};

  printf("Ingrese el miembro b: ");
  scanf(" %c", &d.b);

  printf("miembro a: %d\n", d.a);
  printf("miembro b: %c\n", d.b);

  return 0;
}
```

</v-click>

---
layout: two-cols-header
layoutClass: gap-4
transition: none
class: text-2xl -translate-y-8
---

::left::


```c
#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void) {
  struct dato d = {0};

  printf("Ingrese el miembro b: ");
  scanf(" %c", &d.b); // [!code range: &d.b]

  printf("miembro a: %d\n", d.a);
  printf("miembro b: %c\n", d.b);

  return 0;
}
```


::right::

<v-clicks>

```
Ingrese el miembro b: x
miembro a: 0
miembro b: x
```

En este caso, el operador punto se resuelve primero que el operador dirección de memoria.

Es importante entonces actualizar la tabla de precedencia de operadores

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
transition: none
class: text-2xl -translate-y-8
---

## Precedencia de Operadores (Actualizada)

$$
    \begin{array}{llll}
    \textsf{Operador}                                           &   &  & \textsf{Asociatividad} \\\hline
    () \quad [] \quad \cdot \quad\quad                     &   &  & \textsf{Izq. a Der.} \\
    + \quad - \quad (\text{tipo}) \quad ++ \quad -- \quad ! \quad \& \quad *    &   &  & \textsf{Der. a Izq.} \\
    * \quad / \quad \%                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad -                                                   &   &  & \textsf{Izq. a Der.} \\
    < \quad <= \quad > \quad >=                                 &   &  & \textsf{Izq. a Der.} \\
    == \quad !=                                                 &   &  & \textsf{Izq. a Der.} \\
    \&\&                                                        &   &  & \textsf{Izq. a Der.} \\
    ||                                                          &   &  & \textsf{Izq. a Der.} \\
    ?:                                                          &   &  & \textsf{Der. a Izq.} \\
    = \quad += \quad -=  \quad /= \quad *= \quad \%=            &   &  & \textsf{Der. a Izq.} \\
    ,                                                           &   &  & \textsf{Izq. a Der.} \\
    \end{array}
$$

---
layoutClass: gap-4
transition: none
class: text-2xl -translate-y-8
---


# Acceso a los miembros de una estructura

````md magic-move
```c
#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void) {
  struct punto_2d p1 = {3, 2};

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}

```
```c
#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void) {
  struct punto_2d p1;

  p1.x = 3;
  p1.y = 2;

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}

```
````

---
layoutClass: gap-4
transition: none
class: text-2xl -translate-y-8
---

```c
#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
  float altura;
  float peso;
};

int main (void) {
  struct persona emp = {12345678, "nombre Cualquiera"};

  emp.nombre[0] = 'N';
  printf("Nombre: %s", emp.nombre);
  return 0;
}

```

---
layoutClass: gap-4
transition: none
class: text-2xl -translate-y-8
---

```c
#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
  float altura;
  float peso;
};

int main (void) {
  struct persona emp = {12345678, "nombre Cualquiera"};

  emp.nombre[0] = 'N'; // [!code line-highlight]
  printf("Nombre: %s", emp.nombre);
  return 0;
}
```

A igual precedencia, con asociatividad desde la izq. primero opera el punto

---

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
class: text-2xl
---

# Operaciones permitidas

<v-clicks>

Asignación

Tomar dirección de memoria con `&`

Desreferenciar con `*`

Acceder a miembros con  `.` o `->`

Operador `sizeof`

</v-clicks>

---
class: text-2xl
transition: none
---

# Operaciones permitidas: Asignación

```c
#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void) {
  struct punto_2d p1, p2 = {3,2};

  p1 = p2;

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}

```

```
(3.00, 2.00)
```

---
class: text-2xl
---

# Operaciones permitidas: Asignación

```c
#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void) {
  struct punto_2d p1, p2 = {3,2};

  p1 = p2; // [!code line-highlight]

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}

```

```
(3.00, 2.00)
```

---
class: text-2xl
---

# Operaciones permitidas: Asignación

<v-clicks>

Se puede hacer asignación si y solo si se trata del mismo tipo de estructuras...

...de lo contrario hay error de compilación

```
  struct punto_2d p1, p2 = {3,2};
  struct punto_3d p3;

  p3 = p2;
```

```
$ gcc -Wall -std=c99 -pedantic-errors punto-3.c
punto-3.c:18:8: error: incompatible types when assigning to type
                ‘struct punto_3d’ from type ‘struct punto_2d’
   18 |   p3 = p2;
      |        ^~
$
```

</v-clicks>

---
class: text-2xl
---

# Operaciones no permitidas

<v-clicks>

No se permite el uso de los operadores de relación (`==`, `!=`, `>`, `<`, etc)

```c
  struct punto_2d p1, p2 = {3,2};

  p1 = p2;

  if (p1 == p2)
    printf("Ok!\n");

```

```
$ gcc -Wall -std=c99 -pedantic-errors punto-4.c && ./a.out
punto-4.c:14:9: error: invalid operands to binary ==
                (have ‘struct punto_2d’ and ‘struct punto_2d’)
   14 |   if (p1==p2)
      |         ^~
$
```

</v-clicks>

---
class: text-2xl
---

# Punteros a estructuras

<v-clicks>

De la misma manera que en variables de tipo escalar se usa el asterisco entre el nombre y el tipo...

...en estructuras se usa el asterisco, pero recordando que el tipo incluye la palabra reservada [`struct`]{style="color: #F1502F"}

Ej. Si se define una estructura así

```c
struct punto_2d {
  float x;
  float y;
};

```

</v-clicks>

---
class: text-2xl
transition: none
---
# Punteros a estructuras

```c
int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp;

  pp = &p1;

  printf("%.2f\n", (*pp).x);

  return 0;
}
```

---
class: text-2xl
transition: none
---
# Punteros a estructuras

```c
int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp; // [!code line-highlight]

  pp = &p1;

  printf("%.2f\n", (*pp).x);

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Punteros a estructuras

```c
int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp;

  pp = &p1;

  printf("%.2f\n", (*pp).x);

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Punteros a estructuras

```c
int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp;

  pp = &p1; // [!code line-highlight]

  printf("%.2f\n", (*pp).x);

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Punteros a estructuras

```c
int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp;

  pp = &p1;

  printf("%.2f\n", (*pp).x);

  return 0;
}
```
---
class: text-2xl
---

# Punteros a estructuras

```c
int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp;

  pp = &p1;

  printf("%.2f\n", (*pp).x); // [!code line-highlight]

  return 0;
}
```
---
class: text-2xl
---
# Punteros a estructuras

<v-clicks>

En la expresión `(*pp).x` deben usarse los paréntesis para que la desreferencia sea correcta

Debido al orden de precedencia del operador punto deben usarse paréntesis para que la desreferencia del puntero se realice primero.

De lo contrario el compilador da un error, ya que el operador punto espera una estructura y un miembro al que acceder, no un puntero.

</v-clicks>

---
class: text-2xl
---
# Punteros a estructuras

<v-clicks>

Para simplificar la notación y disminuir la posibilidad de errores se usa el operador _flecha_ (`->`)

En lugar de

```c
  printf("%.2f\n", (*pp).x);
```

se puede usar

```c
  printf("%.2f\n", pp->x);
```

El operador flecha espera un puntero a una estructura a la izquierda y un miembro de esa estructura a la derecha

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
---

## Precedencia de Operadores (Actualizada)

$$
    \begin{array}{llll}
    \textsf{Operador}                                           &   &  & \textsf{Asociatividad} \\\hline
    () \quad [] \quad \cdot \quad\quad \text{->}                    &   &  & \textsf{Izq. a Der.} \\
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
class: text-2xl
---

# Arreglos de estructuras

<v-clicks>

Si se tiene una estructura como la siguiente...

```c
struct punto_2d {
  float x;
  float y;
};
```

para definir un arreglo de estructuras simplemente se usa el corchete en el nombre de la variable

```c
struct punto_2d puntos[10];
```

En el ejemplo se crea un arreglo de 10 elementos, cada uno de tipo `struct punto_2d`

Se accede a los miembros de cada estructura, primero a través del uso del índice que corresponde en el arreglo

</v-clicks>

---
class: text-2xl
---

# Arreglos de estructuras

```c
int main (void) {
  struct punto_2d puntos[5] = { {0,0},{6,7} };

  puntos[0].x = 3; puntos[0].y = 3;
  puntos[3].x = 4; puntos[3].y = 5;

  for(int i = 0; i < 5; i++)
    printf("(%.2f, %.2f)\n", puntos[i].x, puntos[i].y);

  return 0;
}
```

---
class: text-2xl
---

# Arreglos de estructuras

<v-clicks>

En el caso de

```c
  puntos[0].x = 3;
```
se opera primero el corchete por estar más a la izq.

La variable `puntos` antes que nada es un arreglo por lo que el elemento se accesa con los corchetes.

Luego, el elemento accesado con los corchetes es de tipo `struct puntos_2d`, por lo que entonces se puede accesar al miembro de la estructura con el operador punto.

</v-clicks>

---
class: text-2xl
---

# Arreglos asignados dinámicamente

<v-clicks>

Si se tiene una estructura como la siguiente

```c
struct personal {
  int dni;
  char nombre[80];
  int legajo;
};
```

para generar un arreglo dinámico, usando `malloc` o `calloc`, etc...

</v-clicks>

---
class: text-2xl
---

```c
int main (void) {
  struct personal *p;
  int n=10;

  p = malloc (n*sizeof (struct personal));

  for(int i = 0; i < n; i++) {
    printf("Ingrese Nombre: "); scanf(" %80[^\n]s", (p+i)->nombre);
    printf("Ingrese DNI: "); scanf("%d", &(p+i)->dni);
    printf("Ingrese Legajo: "); scanf("%d", &(p+i)->legajo);
  }

  // continua
```


---
class: text-2xl
---

```c

  for(int i = 0; i < n; i++) {
    printf("Nombre: %s\n", (p+i)->nombre);
    printf("DNI: %d\n", (p+i)->dni);
    printf("Legajo: %d\n", (p+i)->legajo);
  }

  free(p);
  return 0;
}

```

---
class: text-2xl
---

# Funciones y Estructuras

<v-click>

A las funciones se pueden pasar:

</v-click>

<v-click>

* miembros de la estructura,

</v-click>

<v-click>

* la estructura completa, o

</v-click>

<v-click>

* un puntero a una estructura (o arreglo de estructuras)

</v-click>

<v-click>

En el caso de un miembro de la estructura o la estructura completa, es pasaje es _por valor_, o sea que la estructura original con la que se hace el llamado no se modifica dentro de la función

</v-click>

---
class: text-2xl
transition: none
---

# Funciones y Estructuras

<v-clicks>

Pasar miembros de una estructura es igual al paso de variables...

Por ejemplo, si la función espera enteros

```c
int suma (int a, int b) {
  return a+b;
}
```

el llamado se puede hacer

```c
printf("%d\n", suma(p.x, p.y));
```
</v-clicks>

---
class: text-2xl
transition: none
---

# Funciones y Estructuras

Pasar miembros de una estructura es igual al paso de variables...


Por ejemplo, si la función espera enteros

```c
int suma (int a, int b) {
  return a+b;
}
```


el llamado se puede hacer

```c
printf("%d\n", suma(p.x, p.y)); // [!code range: p.x]
```
---
class: text-2xl
---

# Funciones y Estructuras

Pasar miembros de una estructura es igual al paso de variables...


Por ejemplo, si la función espera enteros

```c
int suma (int a, int b) {
  return a+b;
}
```

el llamado se puede hacer

```c
printf("%d\n", suma(p.x, p.y)); // [!code range: p.x, p.y]
```

---
class: text-2xl
---

# Funciones y Estructuras

<v-clicks>

Pasar estructuras completas también es igual a cualquier variable...

...teniendo cuidado de no olvidar el tipo completo en la lista de parámetros del encabezado de la función

</v-clicks>

---
class: text-2xl
---

<v-clicks>

```c
struct punto2D {
  float x;
  float y;
};

float norma2d (struct punto2D p, struct punto2D q) {
  return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
```

entonces desde alguna otra función se puede hacer


```c
  struct punto2D p1 = {3, 2}, p2 = {4, 5};
  float norma;

  norma = norma2d(p1, p2);
  printf("%.2f\n", norma);

```

</v-clicks>

---
class: text-2xl
---

# Funciones y Estructuras

<v-clicks>

Cuando se pasan arreglos de estructuras a funciones, son automáticamente por _referencia_ como todos los arreglos...

Pero si una estructura tiene arreglos estos se pasan por copia, como todos los elementos de la estructura.

</v-clicks>

---
class: text-2xl
---

# Funciones y Estructuras

<v-clicks>

Siempre se dijo que las funciones solo pueden devolver un solo valor...esto todavía es así, pero se puede devolver **una** estructura

Entonces de esta manera se pueden devolver varios valores, siempre que haya coincidencia entre el tipo de estructura devuelto y la variable que recibe la estructura

</v-clicks>

---
transition: none
layoutClass: gap-4
class: text-2xl -translate-y-8
---

```c
#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
};

struct persona carga (void) {
  struct persona r;

  printf("Ingrese su DNI: ");
  scanf("%d", &r.dni);
  printf("Ingrese su nombre: ");
  scanf(" %s", r.nombre);

  return r;
}
```

---
layoutClass: gap-4
class: text-2xl -translate-y-8
---

```c
#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
};

struct persona carga (void) { // [!code range: struct persona]
  struct persona r;

  printf("Ingrese su DNI: ");
  scanf("%d", &r.dni);
  printf("Ingrese su nombre: ");
  scanf(" %s", r.nombre);

  return r;
}
```

---
transition: none
layoutClass: gap-4
class: text-2xl -translate-y-8
---

```c
int main (void) {
  struct persona p;

  p = carga();

  printf("dni: %d\n", p.dni);
  printf("nombre: %s\n", p.nombre);

  return 0;
}
```

---
transition: none
layoutClass: gap-4
class: text-2xl -translate-y-8
---

```c
int main (void) {
  struct persona p; // [!code line-highlight]

  p = carga();

  printf("dni: %d\n", p.dni);
  printf("nombre: %s\n", p.nombre);

  return 0;
}
```
---
layoutClass: gap-4
class: text-2xl -translate-y-8
---

```c
int main (void) {
  struct persona p;

  p = carga(); // [!code line-highlight]

  printf("dni: %d\n", p.dni);
  printf("nombre: %s\n", p.nombre);

  return 0;
}
```

---
class: text-2xl
---

# Typedef

<v-clicks>

La palabra clave `typedef` prevé un mecanismo para generar sinónimos o _alias_

```c
typedef unsigned int uint;
```

se coloca el tipo de datos del que se quiere generar un sinónimo

se finaliza con el _alias_ (y el punto y coma)

a partir de ese punto se puede usar indistintamente el alias o el tipo completo

```c
unsigned int valor1;
uint valor2;
```

</v-clicks>

---
class: text-2xl
---

# Typedef

<v-clicks>

Se usa mucho en estructuras para simplificar notación...

supongamos la definición de una estructura

```c
struct punto2D {
  float x;
  float y;
};
```

El prototipo de funciones que reciben estructuras con este nombre podrían ser extensas, por ejemplo

```c
struct punto2D suma (struct punto2D p, struct punto2D q);
```

</v-clicks>

---
class: text-2xl
---

# Typedef

Se puede usar `typedef` de varias formas

````md magic-move
```c
struct punto2D {
  float x;
  float y;
};

typedef struct punto2D p2D;
```
```c
typedef struct punto2D {
  float x;
  float y;
} p2D;

```
````

---
class: text-2xl
---

# Typedef

<v-clicks>

Entonces teniendo

```c
typedef struct punto2D {
  float x;
  float y;
} p2D;

```

el prototipo

```c
struct punto2D suma (struct punto2D p, struct punto2D q);
```

puede pasar a

```c
p2D suma (p2D p, p2D q);
```

</v-clicks>

---
class: text-2xl
---

<v-clicks>

Las estructuras pueden ser definidas sin _etiquetas_ si se definen usando `typedef`


```c
typedef struct {
  float x;
  float y;
} punto2d;
```

o se usan para declarar una variable global

```c
struct {
  float x;
  float y;
} p2d;
```

Cuidado con la diferencia: `punto2d` puede servir para definir nuevas variables, `p2d` es una variable, y no puede haber otra igual, porque no hay como definirla

</v-clicks>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl -translate-y-8
---

<div class="text-2xl">

También se pueden definir sin etiquetas cuando se definen dentro de la definición de otra estructura

</div>

::left::


<v-click>

```c
struct persona {
  char nombre[80];
  char apellido[80];
  int dni;
  struct {
    float altura_m;
    float peso_kg;
  } parametro;
};
```

</v-click>

::right::

<v-clicks>

entonces si definimos

```c
struct persona empleado1;
```

se podría acceder con

```c
empleado1.parametro.altura_m = 1.85;
```

</v-clicks>

---
class: text-2xl
---

Entonces, si se omite la etiqueta, ya sea por el uso de `typedef`, por ser una variable global o por ser una estructura definida dentro de otra estructura, la estructura se llama <span v-mark.underline.orange>anónima</span>


---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

## (para fijar concepto antes de seguir)

::right::

<v-click>

<img src="/img/memoria-struct-000.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 30px" >

</v-click>

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
transition: none
---

## (para fijar concepto antes de seguir)

::left::


Cada miembro de la estructura se coloca después del otro, en la medida que se pueda mantener a todos los datos _alineados_

<v-clicks>

```c
struct dato {
  int a;
  char b;
};

struct dato d;
```
</v-clicks>

::right::

<img src="/img/memoria-struct-000.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 30px" >

---
layout: two-cols-header
layoutClass: gap-4
class: text-2xl
---

## (para fijar concepto antes de seguir)

::left::

Cada miembro de la estructura se coloca después del otro, en la medida que se pueda mantener a todos los datos _alineados_

```c
struct dato {
  int a;
  char b;
};

struct dato d;
```
::right::

<img src="/img/memoria-struct-001.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 30px" >


---
class: text-2xl
transition: none
---

# Uniones

<v-clicks>

Las Uniones son tipos derivados como las estructuras...

...y de similar definición

```c
 union dato {
   int a;
   char b;
 };
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones

Las Uniones son tipos derivados como las estructuras...

...y de similar definición

```c
 union dato {  // [!code range: union ]
   int a;
   char b;
 };
```

<v-clicks>

La palabra clave para definir uniones es `union`

Tiene miembros como las estructuras y se acceden con el operador punto (`.`) o flecha (`->`)

La gran diferencia...

</v-clicks>



---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

::right::

<img src="/img/memoria-union-000.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

::right::

<img src="/img/memoria-union-000.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

```c
union dato {
  int a;
  char b;
};

union dato u;
```

::right::

<img src="/img/memoria-union-000.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

```c
union dato {
  int a;
  char b;
};

union dato u;
```

::right::

<img src="/img/memoria-union-001.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

```c
union dato {
  int a;
  char b;
};

union dato u;
```

::right::


<img src="/img/memoria-union-000.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >


---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

```c
union dato {
  int a;
  char b;
};

union dato u;
```

::right::

<img src="/img/memoria-union-002.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

```c
union dato {
  int a;
  char b;
};

union dato u;
```

::right::

<img src="/img/memoria-union-003.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
layout: two-cols-header
class: text-2xl
layoutClass: gap-4
---

# Uniones

::left::

Cada miembro de la unión **comparte** la posición memoria con los otros

```c
union dato {
  int a;
  char b;
};

union dato u;
```

::right::

<img src="/img/memoria-union-004.svg" width="280" class="ml-auto" style="margin: auto; position: relative; top: 0px" >

---
class: text-2xl
layoutClass: gap-4
---

# Uniones

<v-clicks>

<img src="/img/sin-memoria-union-002.svg" width="500" style="margin: auto; position: relative; top: 10px" >

El tamaño en memoria de la unión es suficiente para almacenar el miembro que ocupe mayor espacio

Pero compartir memoria trae problemas si se accesa de forma equivocada

</v-clicks>

---
class: text-2xl
---

## (repaso de Unidad 2)

<v-clicks>

Si se tiene un número real, por ej. `3.125` almacenado en formato IEEE754 de simple precisión, en bits sería

<img src="/img/ieee-3.125.svg" width="75%" style="margin: auto; position: relative; top: 10px" >

pero si se interpretan esos mismos bits

<img src="/img/int-3.125.svg" width="75%" style="margin: auto; position: relative; top: 10px" >

como un entero...

se lee `1078460416`

ya que

$2^{30}+2^{22}+2^{19} =  1078460416$

</v-clicks>


---
class: text-2xl
---

# Uniones

<v-clicks>

Entonces, para definir una unión se sigue el mismo formato que la estructura pero con la palabra clave `union`

Puede tener cualquier tipo y cantidad de _miembros_, los cuales se definen cada uno con su tipo y nombre finalizando cada línea con punto y coma (`;`)

La _etiqueta_ y los nombres de los miembros deben respetar las reglas de los identificadores

Toda la definición debe terminar con punto y coma (`;`)

</v-clicks>

---
class: text-2xl
---

# Uniones

<v-clicks>

Entonces, con

```c
#include <stdio.h>

union int_float {
  int entero;
  float real;
};
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones

```c
int main (void) {
  union int_float u;

  printf("Asignando a float\n") ;
  u.real = 3.125;
  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Uniones

```c
int main (void) {
  union int_float u;

  printf("Asignando a float\n") ;
  u.real = 3.125; // [!code line-highlight]
  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

<v-clicks>

```
Asignando a float
Imprimiendo float  => 3.125
Imprimiendo entero => 1078460416
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones

````md magic-move
```c
int main (void) {
  union int_float u;

  printf("Asignando a float\n") ;
  u.real = 3.125;
  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```
```c
int main (void) {
  union int_float u;

  printf("Asignando a int\n") ;
  u.entero = 42;
  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```
````

---
class: text-2xl
---

# Uniones

```c
int main (void) {
  union int_float u;

  printf("Asignando a int\n") ;
  u.entero = 42; // [!code line-highlight]
  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

<v-clicks>

```
Asignando a int
Imprimiendo float  => 0.000
Imprimiendo entero => 42
```

¿Por qué imprimir el `float` da 0?

</v-clicks>

---
class: text-2xl
---

# Uniones

<v-clicks>

El entero 42 se almacena como

<img src="/img/int-42.svg" width="75%" style="margin: auto;" >

Si se lee como un `float`

<img src="/img/ieee-42.svg" width="75%" style="margin: auto;" >

al convertir este número se obtiene

`5.88545355016e-44`

y en notación decimal se escribe `0.` y cuarenta y tres ceros antes del 5

Se puede ver el valor almacenado real con `%e`

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones

```c
int main (void) {
  union int_float u;

  printf("Asignando a int\n") ;
  u.entero = 42;
  printf("Imprimiendo float  => %.11e\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

---
class: text-2xl
transition: none
---

# Uniones

```c
int main (void) {
  union int_float u;

  printf("Asignando a int\n") ;
  u.entero = 42;
  printf("Imprimiendo float  => %.11e\n", u.real) ; // [!code range: %.11e]
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

<v-clicks>

```
Asignando a int
Imprimiendo float  => 5.88545355016e-44
Imprimiendo entero => 42
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones

<v-clicks>

En resumen, si se asigna un valor a un miembro de la unión, este se guarda siguiendo las _reglas_ de ese tipo de datos

Pero siempre recordar que todos los valores, del tipo que sean, se guardan en bits

Si se lee desde un miembro de un tipo diferente, se interpretan los bits almacenados con las _reglas_ de este último tipo de miembro que se lee

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones. Inicialización

<v-clicks>

```c
#include <stdio.h>

union int_float {
  int entero;
  float real;
};

int main (void) {
  union int_float u = {42};

  printf("Imprimiendo float  => %.3f\n", u.real) ; // probar %.11e
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

</v-clicks>


---
class: text-2xl
transition: none
---

# Uniones. Inicialización

```c
#include <stdio.h>

union int_float {
  int entero;
  float real;
};

int main (void) {
  union int_float u = {42}; // [!code range: {42}]

  printf("Imprimiendo float  => %.3f\n", u.real) ; // probar %.11e
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```


---
class: text-2xl
---

# Uniones. Inicialización

<v-clicks>

Pero hay un detalle...

Solo se puede inicializar un valor, ya que es compartido por todos los miembros

El _formato_ de carga depende de cual sea el valor que esté primero en la definición de la unión

</v-clicks>

---
class: text-2xl
transition: none
---

# Uniones. Inicialización

```c
int main (void) {
  union int_float u = {42.195};

  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

---
class: text-2xl
---

# Uniones. Inicialización

```c
int main (void) {
  union int_float u = {42.195}; // [!code range: {42.195}]

  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
```

<v-clicks>

Aunque se inicialice con un número real, como el primer miembro es entero, se produce un truncamiento en la inicialización, y solo se inicializa la variable entera con un `42`

```
Imprimiendo float  => 0.000
Imprimiendo entero => 42
```

</v-clicks>

---
class: text-2xl
---

# Uniones. Inicialización

<v-clicks>

Se puede inicializar un miembro que no sea el primero en la definición usando los _inicializadores designados_

```c
union int_float u = {.real=42.195};
```

</v-clicks>

---
class: text-2xl
---

# Uniones. Operaciones permitidas

<v-clicks>

Se permite asignar uniones a otras uniones del mismo tipo

Se puede usar el operador _dirección de memoria_ (`&`) para devolver la dirección de la unión (que es la misma que la de cualquiera de sus miembros)

El operador punto (`.`) y el operador flecha (`->`) se usan de la misma manera que en las estructuras

</v-clicks>

---
class: text-2xl
---

# Uniones. Operaciones NO permitidas

<v-clicks>

No se permiten las comparaciones (`==`,  `!=`,  `<`,  `>` etc.)

No se permiten operaciones aritméticas (`+`, `-`, `*`, `/`)

</v-clicks>


---
class: text-2xl
---

# Uniones. Posibles usos

<v-clicks>

Las uniones pueden tener arreglos como miembros (los cuales son pasados
por valor a las funciones)


```c
union int_4char {
  int entero;
  char ch[4];
};
```

No es necesario que el arreglo tenga el mismo tamaño que el otro u otros miembros

En cualquier caso el tamaño de la unión será igual al tamaño en memoria de miembro que ocupe más espacio

</v-clicks>

---
class: text-2xl
---

# Uniones. Posibles usos

Se pueden hacer arreglos de uniones

```c
union int_float {
  int entero;
  float real;
};

union int_float u[10];
```

---
class: text-2xl
---

# Uniones. Posibles usos

Las uniones pueden tener estructuras como miembros


```c
union numero {
  int entero;
  float real;
  struct {
    short int r;
    short int i;
  } complejo;
};
```

---
class: text-2xl
---

# Uniones. Posibles usos

Las estructuras pueden tener uniones como miembros

```c
struct int_float {
  int es_entero;
  union {
    int entero;
    float real;
  } num;
};

if (n.es_entero == 1)
  printf ("Imprimiendo int => %d\n", n.num.entero);
else
  printf ("Imprimiendo float => %.2f\n" , n.num.real);

```

---
class: text-2xl
---

# Uniones. Usos. Ahorro de memoria

```c
#include <stdio.h>
#include <string.h>

union mensajes {
  char info[80];
  char aviso[80];
  char error[80];
};

int main (void) {
  union mensajes msg;

  strcpy(msg.info, "Uso para ahorro de memoria");
  printf("%s\n" , msg.info);
  printf("Uso de memoria: %lu bytes\n", sizeof msg);

  return 0;
}
```

---
class: text-2xl
---

# Uniones. Usos. Ejemplo: Comunicación serie

<v-clicks>

Visualizar en la PC datos provenientes de un sistema embebido con sensores de magnitudes reales (temperatura, humedad, aceleración, etc.) enviando los valores mediante serie configurado como 8N1

<img src="/img/Workstation.svg" width="75%" style="margin: auto;" >

</v-clicks>

---
class: text-2xl
---

# Uniones. Usos. Ejemplo: Comunicación serie

<v-clicks>

El problema radica en que el número real almacenado como IEEE754 de simple precisión tiene 4 bytes

Sin embargo el bus de comunicación tiene solo 1 byte de ancho

En este caso se puede usar una unión entre un `float` y un arreglo de cuatro `char`

El procedimiento sería: cargar el valor real en el miembro `float` y enviar byte por byte del arreglo por el puerto serie

</v-clicks>

---
class: text-2xl
---

# Uniones. Usos. Ejemplo: Comunicación serie

<v-clicks>

Del otro lado, en la PC, se recibe byte por byte y se los va colocando en el arreglo `char`

Luego, para visualizar, se accede al miembro `float`

Los valores de cada `char` no tendrían sentido, sin embargo al leerlos como `float` se recupera el valor original

</v-clicks>

---
class: text-2xl
---

# Uniones. Usos. Ejemplo: Comunicación serie

<v-clicks>

A ambos lados del bus se usará la misma unión  

```c
union byte_float {
  float dato;
  char dato_b[4];
};
```

y una función para enviar bytes llamada `send_byte` y para recibir bytes llamada `receive_byte`

Del lado de los sensores se hace el envío suponiendo que hay una función que lee el sensor llamada `read_sensor`

</v-clicks>

---
class: text-2xl
---

# Uniones. Usos. Ejemplo: Comunicación serie

<v-clicks>

Entonces, la forma más sencilla sería, del lado del sensor...

```c
union byte_float bf;

while (1) {
  bf.dato = read_sensor(sensor_port);
  send_byte('$', bus_port);
  for (int i = 0; i < 4; i++)
    send_byte(bf.dato_b[i], bus_port);
}

```

</v-clicks>

---
class: text-2xl
---

# Uniones. Usos. Ejemplo: Comunicación serie

<v-clicks>

y del lado del receptor


```c
union byte_float bf;

while (1) {
  char b = receive_byte(bus_port);
  if (b == '$') {
    for (int i = 0; i < 4; i++)
      bf.dato_b[i] = receive_byte(bus_port);

    printf("Sensor reading: %f\n", bf.dato);
  }
}
```

</v-clicks>

---
class: text-2xl
---

# Campos de bit

<v-clicks>

Las variables en general, y las estructuras en particular, pueden ser capaces de contener valores más grandes de lo que realmente necesitan

```c
struct time {
  unsigned int h;           // 0-23
  unsigned int m;           // 0-59
  unsigned int s;           // 0-59
};
```

El rango de `unsigned int` es 0 a 4294967295

```c
printf("Tamaño de la estructura: %lu bytes", sizeof(struct time));
```

```c
Tamaño de la estructura: 12 bytes
```

</v-clicks>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Campos de bit. Definición

::left::

<v-click>

```c
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
```

</v-click>

::right::

<v-click>

se usan (:) para definir cuantos bits se deben usar

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Campos de bit. Definición

::left::

```c
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
```
::right::

<v-click>

el tamaño en bits no debe exceder el tamaño del tipo usado

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Campos de bit. Definición

::left::

```c
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
```
::right::

<v-click>

solo se pueden declarar miembros `int` o `unsigned int`

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Campos de bit. Definición

::left::

```c
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
```
::right::

<v-click>

el tamaño de bits puede ser cero, pero en ese caso no se coloca el _declarador_ (el nombre del miembro)

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Campos de bit. Definición

::left::

```c
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
```
::right::

<v-click>

no se puede usar el operador `&` para tomar la dirección de los bits

</v-click>

---
layout: two-cols-header
class: text-2xl
layoutClass: gap-4
---

# Campos de bit. Definición

::left::

```c
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
```
::right::

<v-click>

la organización de un campo de bits en la memoria depende del compilador

</v-click>

::bottom::

<v-clicks>

```c
printf("Tamaño de la estructura: %lu bytes", sizeof(struct time));
```

```
Tamaño de la estructura: 4 bytes
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Definición

<v-clicks>

También existe los _campos de bit sin nombre_ que se utilizan para agregar _padding_ (completar lugares para alinear datos en la memoria).


Se utiliza un miembro de la estructura sin nombre, y luego de los dos puntos (:) el _padding_


```c
struct time {
  unsigned int h:5;
  unsigned int :27;
  unsigned int m:6;
  unsigned int s:6;
};
```

</v-clicks>

---
class: text-2xl
---

# Definición

También existe los _campos de bit sin nombre_ que se utilizan para agregar _padding_ (completar lugares para alinear datos en la memoria).


Se utiliza un miembro de la estructura sin nombre, y luego de los dos puntos (:) el _padding_


```c
struct time {
  unsigned int h:5;
  unsigned int :27; // [!code line-highlight]
  unsigned int m:6;
  unsigned int s:6;
};
```

---
class: text-2xl
transition: none
---

# Definición

<v-clicks>

También se puede poner _ancho cero_ a un campo de bit sin nombre.

Esto genera el padding necesario para alinear el siguiente campo de bit en la siguiente _unidad de almacenamiento_.

```c
struct time {
  unsigned int h:5;
  unsigned int  :0;
  unsigned int m:6;
  unsigned int s:6;
};
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Definición

También se puede poner _ancho cero_ a un campo de bit sin nombre.

Esto genera el padding necesario para alinear el siguiente campo de bit en la siguiente _unidad de almacenamiento_.

```c
struct time {
  unsigned int h:5;
  unsigned int  :0; // [!code line-highlight]
  unsigned int m:6;
  unsigned int s:6;
};
```

---
class: text-2xl
transition: none
---

# Inicialización y acceso a un campo de bits

<v-clicks>

```c
#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};

int main (void) {
  struct time t = {23, 59, 59};

  printf("%02d:%02d:%02d\n", t.h, t.m, t.s);

  return 0;
}
```

</v-clicks>

---
class: text-2xl
transition: none
---

# Inicialización y acceso a un campo de bits

```c
#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};

int main (void) {
  struct time t = {23, 59, 59}; // [!code line-highlight]

  printf("%02d:%02d:%02d\n", t.h, t.m, t.s);

  return 0;
}
```

---
class: text-2xl
---

# Inicialización y acceso a un campo de bits

```c
#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};

int main (void) {
  struct time t = {23, 59, 59};

  printf("%02d:%02d:%02d\n", t.h, t.m, t.s); // [!code line-highlight]

  return 0;
}
```

---
class: text-2xl
---

# Inicialización y acceso a un campo de bits

<v-clicks>

Los campos de bit se inicializan igual que las estructuras usando llaves.

Incluso usando _inicializadores designados_.

El acceso se realiza mediante el operador punto (o flecha si es un puntero)

</v-clicks>

---
class: text-2xl
---

# Constantes de Enumeración

<v-clicks>

Son un conjunto de constantes enteras representadas por identificadores.

Su definición es semejante a las estructuras...

```c
enum dias_laborales {
  LUNES,
  MARTES,
  MIERCOLES,
  JUEVES,
  VIERNES
};
```

a menos que se explicite lo contrario, se _enumeran_ las constantes desde el 0 (cero)

</v-clicks>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Constantes de Enumeración

::left::

<v-click>

```c
 enum dias_laborales {
   LUNES,
   MARTES,
   MIERCOLES,
   JUEVES,
   VIERNES
 };
```

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Constantes de Enumeración

::left::

```c
 enum dias_laborales { // [!code range: enum]
   LUNES,
   MARTES,
   MIERCOLES,
   JUEVES,
   VIERNES
 };
```

::right::

<v-click>

la palabra clave es ``enum``

</v-click>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Constantes de Enumeración

::left::

```c
 enum dias_laborales {
   LUNES,
   MARTES,
   MIERCOLES,
   JUEVES,
   VIERNES
 };
```

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Constantes de Enumeración

::left::

```c
 enum dias_laborales { // [!code range: dias_laborales]
   LUNES,
   MARTES,
   MIERCOLES,
   JUEVES,
   VIERNES
 };
```

::right::

<v-clicks>

a continuación se coloca la _etiqueta_ (opcional)

</v-clicks>

---
layout: two-cols-header
class: text-2xl
transition: none
layoutClass: gap-4
---

# Constantes de Enumeración

::left::

```c
 enum dias_laborales {
   LUNES,
   MARTES,
   MIERCOLES,
   JUEVES,
   VIERNES
 };
```

::right::

---
layout: two-cols-header
class: text-2xl
layoutClass: gap-4
---

# Constantes de Enumeración

::left::

```c
 enum dias_laborales {
   LUNES, // [!code line-highlight]
   MARTES, // [!code line-highlight]
   MIERCOLES, // [!code line-highlight]
   JUEVES, // [!code line-highlight]
   VIERNES // [!code line-highlight]
 };
```

::right::

<v-clicks>

las constantes van separadas de comas (,)

se recomienda el uso de mayúsculas para las constantes

</v-clicks>

---
class: text-2xl
---

# Constantes de Enumeración

<v-clicks>

En la definición se puede asignar cualquier valor entero usando el igual (=)...

...a partir de ahí, los siguientes se incrementan de a 1

```c
enum colores {
  ROJO,             // 0
  VERDE,            // 1
  AZUL = 10,        // 10
  BLANCO = 20,      // 20
  AMARILLO,         // 21
  NARANJA = 5,      // 5
  NEGRO             // 6
};
```

</v-clicks>

---
class: text-2xl
---

# Constantes de Enumeración
## Usos

<v-clicks>

```c
#include <stdio.h>

enum dias {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

int main (void) {
  enum dias hoy;

  hoy = VIERNES;

  if (hoy == LUNES)
    printf("Hay Informática I\n");
  else
    printf("No hay Informática I\n");

  return 0;
}

```

</v-clicks>


---
class: text-2xl
---

# Constantes de Enumeración
## Usos

<v-clicks>

```c
#include <stdio.h>

enum dias {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

char *nombre_dia[] = {
  "lunes",
  "martes",
  "miércoles",
  "jueves",
  "viernes",
  "sábado",
  "domingo"
};

```

</v-clicks>

---
class: text-2xl
---

# Constantes de Enumeración
## Usos

<v-clicks>

```c
int main (void) {
  enum dias hoy;

  for (hoy = LUNES; hoy <= DOMINGO; hoy++ )
    printf("Hoy es %s\n", nombre_dia[hoy]);

  return 0;
}

```

</v-clicks>


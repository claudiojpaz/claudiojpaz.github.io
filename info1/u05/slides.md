---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 5
titleTemplate: '%s'
info: |
    Unidad 5  
    Slides del teórico de la Materia  
    Informática 1 del Departamento de Ingeniería Electrónica  
    Facultad Regional Córdoba de la Universidad Tcnológica Nacional
# apply UnoCSS classes to the current slide
# https://sli.dev/features/drawing
drawings:
  persist: false
# slide transition: https://sli.dev/guide/animations.html#slide-transitions
transition: slide-left
# enable MDC Syntax: https://sli.dev/features/mdc
mdc: true
layout: image
class: text-2xl
---

<script setup>
import './style.css'
</script>

<div class="absolute left-10 bottom-10">

# Unidad 5

# Control de flujo en lenguaje C

</div>

<QrOverlay title=''>

<img src="/img/info1-u05.png" class="mx-auto w-3/4" />

</QrOverlay>

---
layout: center
class: text-4xl
---


Primero, algunas definiciones

---
class: text-2xl
---

# Sentencias

Unidades _sintácticas_ de programación que expresan una acción que debe ser llevada a cabo para lograr un resultado

Pueden ser:

- Simples (las terminadas en `;`)
- Compuestas (simples encerradas entre `{}`)
- de Selección (`if`, `if-else` y `switch`)
- de Repetición (`while`, `do-while` y `for`)
- de Salto (`break`, `continue`, `return` y ~~goto~~)

---
class: text-2xl
---

# Expresiones

Es una combinación de una o más constantes, variables o funciones que se interpretan siguiendo las reglas de precedencia y devuelven un resultado

Pueden ser:

- operaciones (aritméticas, lógicas, de relación, etc.)
- llamados a función
- variables o constantes

---
class: text-2xl
---

# Sentencias de Selección
## Selección simple (`if`)

En lenguaje C, el condicional simple se codifica con la palabra clave `if`

La condición que se evalúa se coloca entre paréntesis. Puede ser cualquier expresión

Si la condición se evalúa verdadera se _ejecuta_ la sentencia que siguen a la condición.


```
if ( expresión )
  sentencia
```

---
layout: two-cols-header
class: text-2xl
---

# Sentencias de Selección
## Selección simple (`if`)

**Ejemplo**

::left::

<img src="/img/si-simple-nota-aprobado-saludo.svg" width="300" style="position: relative; top: 0px" >

::right::

```c
if ( nota >= 6 ) {
  printf("Aprobado\n");
  printf("Felicitaciones\n");
}
```

---
layout: two-cols-header
class: text-2xl
---

# Sentencias de Selección
## Selección simple (`if`)

**Ejemplo**

::left::

<img src="/img/si-simple-nota-aprobado.svg" width="300" style="position: relative; top: 0px" >


::right::

```c
if ( nota >= 6 ) {
  printf("Aprobado\n");
}
```

::bottom::

Si la sentencia compuesta tiene una sola sentencia simple podrían omitirse las llaves

---
transition: none
class: text-2xl
---

# Sentencias de Selección
## Selección simple (`if`)

**Errores lógicos**

En ocasiones se hacen agregados de código olvidando usar las llaves

```c
if ( nota >= 6 )
  printf("Aprobado\n");

```

---
class: text-2xl
---

# Sentencias de Selección
## Selección simple (`if`)

**Errores lógicos**

En ocasiones se hacen agregados de código olvidando usar las llaves

```c
if ( nota >= 6 )
  printf("Aprobado\n");
  printf("Felicitaciones\n");
```

lo que causa errores lógicos

En el ejemplo, el programa felicita siempre, sin importar el valor de nota

---
class: text-2xl
---

# Sentencias de Selección
## Selección doble (`if-else`)

La sintaxis es la siguiente:

```
if ( expresión )
  sentencia 1
else
  sentencia 2
```

Si la `expresión` devuelve algo distinto de cero, se ejecuta la `sentencia 1`.


Si devuelve cero, se ejecuta la  `sentencia 2`.

---
layout: two-cols-header
class: text-2xl
---

# Sentencias de Selección
## Selección doble (`if-else`)

**Ejemplo**

::left::

<img src="/img/si-doble-nota-aprobado.svg" width="400" style="position: relative; top: 10px; left: -60px; z-index: -1;" >

::right::

```c
if ( nota >= 6 ) {
  printf("Aprobado\n");
} else {
  printf("Desaprobado\n");
}
```

---
class: text-2xl
---

# Sentencias de Selección

Las sentencias _dentro_ de cada rama del `if` puede ser de cualquier tipo.

Si se necesita más de una sentencia por rama, deben formar una sentencia compuesta con las `{}`.

Se recomienda siempre usar llaves.

```c
if ( nota >= 6 ) {
  printf("Aprobado\n");
  if ( nota >= 9 ) {
    printf("Excelente!\n");
  }
} else {
  printf("Desaprobado\n");
}
```

---
class: text-2xl
---

# Sentencias de Selección
## Operador ternario (`?:`)

El operador ternario en C es una forma abreviada de escribir una estructura `if-else` cuando queremos elegir entre dos valores.

Su sintaxis es:

```
expresión 1 ? expresión 2 : expresión 3;
```

Funciona así:

* Si `expresión 1` es verdadera (distinta de cero), devuelve la `expresión 2` (lo que está antes de `:`)

* Si `expresión 1` es falsa (igual a cero), devuelve la `expresión 3` (lo que está después de `:`)

---
class: text-2xl
---

# Sentencias de Selección
## Operador ternario (`?:`)

**Ejemplo**

El código

```c
int a = 2, b = 3;
int max;

if (a > b)
    max = a;
else
    max = b;

printf("El máximo entre %d y %d es %d\n", a, b, max);
```

---
class: text-2xl
---

# Sentencias de Selección
## Operador ternario (`?:`)

**Ejemplo**

es equivalente a escribir:

```c
int a = 2, b = 3;
int max = (a > b) ? a : b;

printf("El máximo entre %d y %d es %d\n", a, b, max);
```

Se usa mucho para hacer código más compacto, aunque si la lógica es compleja suele ser más claro usar if-else.

---
class: text-2xl
---

# Operadores lógicos

En C hay tres operadores lógicos a nivel de variables:

- AND ( $\&\&$ )
- OR ( $||$ )
- NOT ( $!$ )

Se pueden usar en cualquier expresión, aunque generalmente se usan en condicionales y sentencias repetitivas

---
class: text-2xl
---

# Operadores lógicos

**Ejemplo**

```
  if ( expresión 1 && expresión 2 )
    sentencia
```

La sentencia se ejecutará dependiendo del valor de las expresiones evaluadas por el operador $\&\&$

$$
    \begin{array}{c|c|c}
    \texttt{expresión 1} & \texttt{expresión 2}  &  \&\& \\\hline
    0                    & 0                     &  0 \\
    0                    & \text{distinto de }0  &  0 \\
    \text{distinto de }0 & 0                     &  0 \\
    \text{distinto de }0 & \text{distinto de }0  &  1
    \end{array}

$$

---
class: text-2xl
---

# Operadores lógicos

**Ejemplo**

```
  if ( expresión 1 || expresión 2 )
    sentencia
```

En el caso de $||$ la tabla de verdad es la siguiente

$$
    \begin{array}{c|c|c}
    \texttt{expresión 1} & \texttt{expresión 2}  &  || \\\hline
    0                    & 0                     &  0 \\
    0                    & \text{distinto de }0  &  1 \\
    \text{distinto de }0 & 0                     &  1 \\
    \text{distinto de }0 & \text{distinto de }0  &  1
    \end{array}
$$

---
class: text-2xl
---

# Operadores lógicos

El tercer operador lógico es la negación NOT ( $!$ )

$$
    \begin{array}{c|c}
    \texttt{expresión 1} &  ! \\\hline
    0                    &  1 \\
    \text{distinto de }0 &  0
    \end{array}
$$

---
class: text-2xl
---

# Precedencia de operadores (actualizada)

$$
    \begin{array}{llll}
    \textsf{Operador}                                           &   &  & \textsf{Asociatividad} \\\hline
    ()                                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad - \quad (\text{tipo}) \quad ++ \quad -- \quad !     &   &  & \textsf{Der. a Izq.} \\
    * \quad / \quad \%                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad -                                                   &   &  & \textsf{Izq. a Der.} \\
    < \quad <= \quad > \quad >=                                 &   &  & \textsf{Izq. a Der.} \\
    == \quad !=                                                 &   &  & \textsf{Izq. a Der.} \\
    || \quad \&\&                                               &   &  & \textsf{Izq. a Der.} \\
    ?:                                                          &   &  & \textsf{Der. a Izq.} \\
    = \quad += \quad -=  \quad /= \quad *= \quad \%=            &   &  & \textsf{Der. a Izq.} \\
    \end{array}
$$

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)

## Sentencia repetitiva `while`

Permite repetir sentencias **mientras** se cumpla una condición

La sintaxis es

```
while (expresión)
  sentencia
```

---
layout: two-cols-header
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `while`

**Ejemplo**

::left::

<img src="/img/mientras-2.svg" width="250" style="position: relative; top: 0px" >

::right::

```c
n = 0;
while ( n < 10 ) {
  printf("%d", n);
  n = n + 1;
}
```

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `do-while`

Igual que antes, permite repetir sentencias **mientras** se cumpla una condición

La sintaxis es

```
do
  sentencia
while (expresión);
```

con la diferencia que las sentencias se realizan al menos una vez.

---
layout: two-cols-header
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `do-while`

**Ejemplo**

::left::

<img src="/img/hacer-mientras-2.svg" width="200" style="position: relative; top: 0px" >

::right::

```c
n = 0;
do {
  printf("%d", n);
  n = n + 1;
} while ( n < 10 );
```

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `do-while`

Se usa generalmente para validar datos ingresados por el usuario

Las sentencias que se ejecutan al menos una vez son el `printf` que solicita el dato y el `scanf` que toma el valor ingresado

Si los datos ingresados están en el rango no permitido la condición debe evaluarse por verdadero.

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `do-while`

**Ejemplo**

El usuario debe ingresar una calificación, por lo que el rango permitido es desde 1 hasta 10, incluyendo a ambos.

Entonces si se ingresa un número menor que 1 se debe solicitar un nuevo ingreso.

Si el número es mayor a 10 también se debe solicitar un nuevo ingreso.

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `do-while`

**Ejemplo**


```c
do {
  printf("Ingrese la calificación (1-10): ");
  scanf("%d", &nota);
} while ( nota < 1 || nota > 10 );
```

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)

**Ejemplo**

Realizar un programa que calcule el promedio entre `n` notas ingresadas.

Las notas deben ser validadas, de forma que solo se acepten aquellas entre 1 y 10.

---
class: text-2xl
---

```c {*}{maxHeight:'450px'}
#include <stdio.h>
// u5-notas.c

int main (void) {
  int i, n;
  int nota, notas;
  float promedio;

  printf("Cuantos registros cargará: ");
  scanf("%d", &n);

  notas = 0;
  i = 0;
  while (i < n) {
    do {
      printf("Ingrese nota %d: ", i+1);
      scanf("%d", &nota);
    } while ( nota < 1 || nota > 10 );
    notas += nota;
    i++;
  }
  promedio = (float) notas / n;

  printf("El promedio de notas es %.2f", promedio);

  return 0;
}
```

---
class: text-2xl
---

# Sentencias de Selección
## Selección múltiple (`switch`)

Se usa en casos donde hay muchos posibles valores para una variable con distintas acciones para cada valor.

Se usa en lugar de anidar múltiples `if-else`

Solo se pueden comparar enteros (pueden ser caracteres pero no flotantes) y solo por igualdad (no relación)

---
class: text-2xl
---

# Sentencias de Selección

## Sintaxis

```
switch (expresión) {
    case valor1:
      sentencia 1; // pueden ser muchas, no hace falta {}
      break; // opcional
    case valor2:
      sentencia 2;
      break; // opcional
    // tantos case como se quiera, mientras sean diferentes
    default:
      sentencia n;
      break; // opcional
}
```

---
class: text-2xl
---

# Sentencias de Selección

Se compara la expresión (puede ser una variable, operación, etc.) con las _etiquetas_ en los **case**

Las etiquetas deben ser diferentes. Cuando haya una coincidencia, el flujo del programa salta hasta esa ubicación

---
class: text-2xl
---

# Sentencias de Selección

```c {*|1|2|3|6|9|10|11|14}
i = 3;
switch (i) {
  case 1:
    printf("Primera opción\n");
    break;
  case 2:
    printf("Segunda opción\n");
    break;
  case 3:
    printf("Tercera opción\n");
    break;
  default:
    printf("Ninguna opción\n");
}
```

---
layout: two-cols
class: text-xl
---

::left::

```c
if (nota == 10) {
  printf("A\n");
} else {
  if (nota == 9) {
    printf("B\n");
  } else {
    if (nota == 8) {
      printf("C\n");
    } else {
      if (nota == 7) {
        printf("D\n");
      } else {
        printf("F\n");
      }
    }
  }
}
```

::right::

```c
switch (nota) {
  case 10:
    printf("A\n");
    break;
  case 9:
    printf("B\n");
    break;
  case 8:
    printf("C\n");
    break;
  case 7:
    printf("D\n");
    break;
  default:
    printf("F\n");
    break;
}
```

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

La sentencia `for` es una manera _compacta_ de controlar repetición como si fuera por contador

```
for ( expresión 1; expresión 2; expresión 3 )
  sentencia
```

¿Cómo funciona?

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

::left::
Tiene un funcionamiento semejante al `while` controlado por contador


::right::

<img src="/img/para-while-1.svg" width="250" class="ml-auto">


---
layout: two-cols-header
class: text-2xl
transition: none
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

::left::
Tiene un funcionamiento semejante al `while` controlado por contador

La `expresión 1` se ejecuta una vez, al principio

::right::

<img src="/img/para-while-1.svg" width="250" class="ml-auto">

---
layout: two-cols-header
class: text-2xl
transition: none
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

::left::
Tiene un funcionamiento semejante al `while` controlado por contador

La `expresión 1` se ejecuta una vez, al principio

Tiene un funcionamiento semejante al `while` controlado por contador

::right::

<img src="/img/para-while-1.svg" width="250" class="ml-auto">



---
layout: two-cols-header
class: text-2xl
transition: none
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

::left::

La `expresión 2` sirve de condición para repetir el ciclo

Se evalúa todos los ciclos

::right::

<img src="/img/para-while-1.svg" width="250" class="ml-auto">



---
layout: two-cols-header
class: text-2xl
transition: none
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

::left::

La `sentencia` puede ser simple, compuesta, condicional o iterativa.

::right::

<img src="/img/para-while-1.svg" width="250" class="ml-auto">


---
layout: two-cols-header
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

::left::

La `expresión 3` se ejecuta todos los ciclos al finalizar la `sentencia`

::right::

<img src="/img/para-while-1.svg" width="250" class="ml-auto">


---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

Las expresiones son opcionales

Por ejemplo, si falta la `expresión 2` se considera que la condición es verdad y el bucle continúa indefinidamente

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

**Ejemplo**

```c
for ( i = 0; i < 5; i++ )
  printf("vuelta %d\n", i);
```

```
vuelta 0
vuelta 1
vuelta 2
vuelta 3
vuelta 4
```

---
class: text-2xl
---

# Sentencias de repetición (o iterativas)
## Sentencia repetitiva `for`

A partir del estándar C99 se puede declarar la variable de control en la `expresión 1`

```c
#include <stdio.h>

int main (void) {
  for ( int i = 0; i < 10 ; i++ ) {
    printf("%d\n", i);
  }

  return 0;
}
```

---
class: text-2xl
---

Pero la variable solo existe en el bloque del `for`

```c
#include <stdio.h> // u5-for-init-2.c

int main (void) {
  for ( int i = 0; i < 10 ; i++ ) {
    printf("%d\n", i);
  }
  printf("%d\n", i);

  return 0;
}
```
```
$ gcc -Wall -std=c99 -pedantic-errors u5-for-init-2.c
u5-for-init-2.c: En la función ‘main’:
u5-for-init-2.c:7:18: error: ‘i’ no se declaró aquí (primer uso en esta función)
    7 |   printf("%d\n", i);
                         ^
```


---
class: text-2xl
---

# Sentencias break y continue

`break` y `continue` son sentencias de salto, que se pueden usar dentro de estructuras repetitivas (`while`, `do-while` y `for`) o dentro de la sentencia `switch`


`break` interrumpe la ejecución de la estructura en la que se encuentra

En el caso de estructuras repetitivas se usa con condicionales

---
class: text-2xl
---

```c {*|15,16,17}{maxHeight:'450px'}
#include <stdio.h>
// u5-for-break.c

int main (void) {
  int nota, suma = 0;
  int i;

  printf("Ingrese 10 calificaciones, o 0 para terminar\n");
  for (i = 0; i < 10; i++) {
    do {
      printf("Ingrese la calificación %d: ", i+1);
      scanf("%d", &nota);
    } while (nota < 0 || nota > 10);

    if (nota == 0) {
      break;
    }

    suma += nota;
  }

  printf("El promedio es %.2f\n", (float) suma / i);

  return 0;
}
```
---
class: text-2xl
---

La sentencia `continue` interrumpe la ejecución del ciclo **actual** pero continúa con el siguiente

```c{*|5,6}
#include <stdio.h>

int main (void) {
  for (int i = 0; i < 10; i++) {
    if (i == 3)
      continue;

    printf("%d  ", i);
  }

  return 0;
}
```
```
0  1  2  4  5  6  7  8  9
```

---
class: text-2xl
---

# Directivas de preprocesador

Antes de la compilación propiamente dicha comienzan la línea con `#`

* `include`
* `define`
* `ifdef`
* `ifndef`
* `else`
* `elif`
* `endif`
* `defined` (ojo que no usa `#`)
* etc.

---
class: text-2xl
---

# `#define`

Sirve para crear _constantes simbólicas_

```
#define  identificador  reemplazo
```

Antes de la compilación, el preprocesador reemplaza todas las coincidencias con el identificador por el texto de reemplazo

**NO** se usa punto y coma (`;`), no es una sentencia

**NO** se usa el igual (`=`), no es asignación

---
class: text-2xl
---

# `#define`

```c
#include <stdio.h>

#define PI 3.141592

int main (void) {

  printf("%.4f\n", PI);

  return 0;
}
```
```
3.1416
```

---
class: text-2xl
---

# `define`

No confundir las constantes simbólicas con variables.

Es texto que se reemplaza. Cuando el compilador lo compila no diferencia si fue agredado en la edición o en el preprocesamiento

No se pueden hacer asignaciones y cambiar su valor

---
class: text-2xl
---

# `#define`

**Ejemplo**

```c
#include <stdio.h>

#define MSG "Hola, mundo!\n"

int main (void) {

  printf(MSG);

  return 0;
}
```

```
Hola, mundo!
```

---

# Compilación condicional





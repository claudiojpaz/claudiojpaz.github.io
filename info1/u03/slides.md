---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 3
titleTemplate: '%s'
info: |
    Unidad 3  
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

# Unidad 3

# Introducción al lenguaje C

</div>

<QrOverlay title=''>

<img src="/img/info1-u03.png" class="mx-auto w-3/4" />

</QrOverlay>

---
layout: center
---


![pdp7](/img/512px-Pdp7-oslo-2005.jpeg)

<div class="absolute left-35 bottom-10">
<font size="3">
1964 Digital Equipment Corporation - PDP-7 - [<a href="http://creativecommons.org/licenses/sa/1.0/">CC SA 1.0</a>], <a href="https://commons.wikimedia.org/wiki/File:Pdp7-oslo-2005.jpeg">via Wikimedia Commons</a>
</font>
</div>

---

# Reseña histórica
## Fines de los 60's y principios de los 70's

* 1966 - BCPL - Martin Richards.
* 1969 - B -  Ken Thompson con Dennis Ritchie.
* 1969-1973 - C -  Dennis Ritchie.

---

# Reseña histórica

## Fines de los 70's hasta fines de los 90's.. y más
*  1978 - Libro: Lenguaje de Programación C. Kernighan & Ritchie
*  1989 - American National Standards Institute - ANSI C - C89
*  1990 - International Organization for Standardization - ISO C - C90
*  1999 - ANSI adopta el estándar ISO para C - C99
*  2011 - ISO C - C11
*  2018 - ISO C - C18
*  2023 - ISO C - C23

---

# Elementos del lenguaje C

**Token:** conjunto de símbolos que tiene un significado coherente en un lenguaje de programación

Existen seis clases de tokens en el vocabulario del lenguaje C

$$
    \begin{array}{llll}
    \textsf{Palabras clave} &  &  & \textsf{Identificadores} \\
    \textsf{Constantes}     &  &  & \textsf{Comentarios} \\
    \textsf{Operadores}     &  &  & \textsf{Separadores} \\
    \end{array}
$$

---

# Elementos del lenguaje C

## Palabras clave

32 palabras reservadas para el lenguaje

$$
    \begin{array}{llllllllll}
      \mathtt{auto}     & & &  \mathtt{break}    & & &   \mathtt{case}      & & &  \mathtt{char} \\
      \mathtt{const}    & & &  \mathtt{continue} & & &   \mathtt{default}   & & &  \mathtt{do} \\
      \mathtt{enum}     & & &  \mathtt{extern}   & & &   \mathtt{float}     & & &  \mathtt{for} \\
      \mathtt{goto}     & & &  \mathtt{if}       & & &   \mathtt{int}       & & &  \mathtt{long} \\
      \mathtt{else}     & & &  \mathtt{return}   & & &   \mathtt{short}     & & &  \mathtt{signed} \\
      \mathtt{sizeof}   & & &  \mathtt{static}   & & &   \mathtt{struct}    & & &  \mathtt{double} \\
      \mathtt{register} & & &  \mathtt{switch}   & & &   \mathtt{typedef}   & & &  \mathtt{union} \\
      \mathtt{unsigned} & & &  \mathtt{void}     & & &   \mathtt{volatile}  & & &  \mathtt{while}
    \end{array}
$$

---

# Elementos del lenguaje C

## Identificadores

Conjunto de caracteres alfanuméricos que asocian a entidades del programa (variables, funciones, etc.).

No pueden ser iguales a ninguna palabra reservada.

Pueden estar formados por letras del alfabeto inglés, números o guiones bajos (\_).

No pueden comenzar con números.

No pueden tener espacios ni operadores aritméticos.

---
layout: two-cols-header
---

# Elementos del lenguaje C

## Identificadores

::left::

$$
\textbf{Correcto}\\[5pt]
\begin{array}{l}
    \texttt{var} \\
    \texttt{n1} \\
    \texttt{\_node05}\\
    \texttt{contador}\\
    \texttt{max\_temp}\\
    \texttt{i}
\end{array}
$$

::right::

$$
\textbf{Incorrecto}\\[5pt]
\begin{array}{l}
    \texttt{3var}\\
    \texttt{if}\\
    \texttt{5}\\
    \texttt{node\text{-}05}\\
    \texttt{max\;temp}
\end{array}
$$

---

# Elementos del lenguaje C

## Constantes

Son valores que no pueden cambiar una vez que el programa fue compilado.

También se llaman literales.

Pueden ser números, caracteres individuales o cadenas de texto.

---

# Elementos del lenguaje C

## Constantes

## Números

$$
\begin{array}{cccccc}
 \texttt{3} &
 \texttt{3.1416} &
 \texttt{31.416e-1} &
 \texttt{0.31416e1} &
 \texttt{.31416e1} &
 \texttt{.31416e+1} &
\end{array}
$$

$$
\begin{array}{cccccc}
 \texttt{3.1416f} &
 \texttt{31.416F} &
 \texttt{0.31416E-1} &
 \texttt{0xfe01} &
 \texttt{0xFE01} &
 \texttt{0XFE01}
\end{array}
$$

## Caracteres

$$
\begin{array}{ccc}
 \texttt{'c'} &
 \texttt{'F'} &
 \texttt{'7'}
\end{array}
$$

## Cadenas de caracteres

$$
\begin{array}{c}
    \texttt{"Hola, mundo!"}
\end{array}
$$

---

# Elementos del lenguaje C

## Operadores

Los operadores en C son conjuntos de caracteres (uno o dos) que indican al programa que debe hacer.


Aritméticos: +, -, *, / y % <br><br>

Asignación: =, +=, -=, *= y /= <br><br>

Incrementales: ++ y -- <br><br>

Relacionales: <, >, >=, <=, == y != <br><br>

Lógicos: && y ||



---

# Elementos del lenguaje C


## Separadores o delimitadores


Se utilizan en distintas construcciones del lenguaje

$$
    \begin{array}{llllllllllllllllll}
    \mathbf{[\;]} & (\;) & \{\} & , & ; & : & ... & * & = & \#
    \end{array}
$$

---

# Elementos del lenguaje C

## Comentarios

Cadenas de texto que no se compilan.

Sirven para que el programador deje aclaraciones.

O para anular partes del código.

La doble barra (//) anula todo hasta el final de la línea.

/\* comenta todo hasta encontrar un \*/ aunque sea muchas líneas más abajo

---
layout: two-cols-header
transition: none
---

# Primer ejemplo: Hola, Mundo!

::left::

```c
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```
::right::

---
layout: two-cols-header
transition: none
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|5}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* Todos los programas deben tener una función ``main``

</div>

---
layout: two-cols-header
transition: none
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|6-10}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* Las llaves definen _bloques_.

* En este caso el bloque es el _cuerpo_ de la función ``main``

</div>

---
layout: two-cols-header
transition: none
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|9}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* A partir del estándar C90 en adelante, la función ``main`` debe terminar con un ``return``.

* Indica al _proceso_ que _lanzó_ el programa, que el mismo ya terminó.

</div>

---
layout: two-cols-header
transition: none
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|1}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* Las líneas que comienzan con # se llaman _directivas de preprocesador_.

* Son necesarias para que el compilador trabaje de forma correcta.

* Otras son: ``#define`` ``#ifdef`` etc.

</div>

---
layout: two-cols-header
transition: none
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|7,9}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* En este caso ``printf`` y ``return 0`` son sentencias simples...

* Sentencias simples deben terminar con punto y coma (;)

</div>

---
layout: two-cols-header
transition: none
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|7}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* ``printf`` es una función definida en ``stdio.h``

* Se utiliza para imprimir mensajes en pantalla

</div>

---
layout: two-cols-header
class: text-2xl
---

# Primer ejemplo: Hola, Mundo!

::left::


```c {none|3}
#include <stdio.h>

// programa de prueba

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

::right::

<div v-if="$slidev.nav.clicks === 1">

* Los comentarios de una sola línea comienzan con // y funcionan hasta el fin de la línea

* Los comentarios multi-línea comienzan con /* y terminan con */

</div>

---
transition: none
---

# Fases de compilación

![compilacion](/img/computer-system-2015-pag41.svg){class="mx-auto"}

<!--Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.41-->


El **preprocesador** modifica el programa original agregando y quitando texto para dejar preparado el archivo `.i` para el compilador.

---
transition: none
---

# Fases de compilación

![compilacion](/img/computer-system-2015-pag41.svg){class="mx-auto"}


El **compilador** traduce el programa del archivo `.i` a lenguaje _assembly_, dejando el archivo `.s`

---
transition: none
---

# Fases de compilación

![compilacion](/img/computer-system-2015-pag41.svg){class="mx-auto"}

El **ensamblador** traduce el programa escrito en _assembly_ a código objeto, comprensible por la computadora.
Queda un archivo `.o`

---

# Fases de compilación

![compilacion](/img/computer-system-2015-pag41.svg){class="mx-auto"}

Finalmente, el **linqueador** o **enlazador** compone un único archivo ejecutable con el `.o` que se creó a partir del código del usuario, junto con los `.o` de las funciones de las bibliotecas elegidas

---
layout: center
class: text-center
---

# Entorno de desarrollo

---
layout: image
image: /img/c-how-to-program-2016-pag47.svg
backgroundSize: contain
---

---
transition: none
---

# Entorno de desarrollo

> **Editor:** Programa con el que se pueden modificar los archivos donde se escriben los programas.
> Luego de modificarlos se guardan en el disco.

En linux se suele usar el gedit, nano, vim o emacs pero hay muchos más.

No confundir con los IDE de programación (geany, zinja, eclipse, codeblock, etc.)

---
transition: none
---

# Entorno de desarrollo

> **Preprocesador:** Programa que se ejecuta automáticamente antes del compilador.
> Modifica el archivo original agregando y quitando texto.
> Luego guarda el resultado nuevamente en el disco.

El preprocesador _pega_ el contenido de los archivos solicitados con la directiva `#include`, remueve las líneas comentadas, y cambia las constantes definidas con la directiva `#define`

---
transition: none
---

# Entorno de desarrollo

> **Compilador:** Programa que traduce el código escrito en C y lo pasa a un código entendible por la máquina.
> Luego guarda el resultado nuevamente en el disco como código objeto.

En esta fase podemos considerar que el compilador está formado por el compilador propiamente dicho y el ensamblador, según lo visto en la sección anterior (**Fases de compilación**)

---
transition: none
---

# Entorno de desarrollo

> **Linqueador:** Programa que compagina el código objeto realizado por el compilador con el código objeto de las funciones de bibliotecas usadas por el programa.
> Luego guarda el resultado nuevamente en el disco como un archivo ejecutable.

$$
\phantom{a}
$$

> **Cargador:** Programa que toma el programa del disco y lo coloca en memoria, quedando listo para ejecutarse.

$$
\phantom{a}
$$

> **Ejecución:** Finalmente el CPU ejecuta una a una las instrucciones de la memoria.

---

# Uso del compilador.

En adelante, en los _slides_ emularemos la terminal con cuadros de texto como el siguiente

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code=" "
/>
</v-click>

<v-click>

El signo $ se llama _prompt_ y es el inicio de la línea de comandos en SO GNU/Linux.


El signo $ NO debe escribirse.

</v-click>

---

# Uso del compilador.

Si se cuenta con un archivo llamado `hello.c` con el siguiente contenido:

```c
#include <stdio.h>

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

---

# Uso del compilador

...se puede compilar usando el programa `gcc`:

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc hello.c
./a.out
>Hola, Mundo!
"
/>
</v-click>

<v-click>

Si no se cometen errores en el programa, el `gcc` no da ningún mensaje y se crea un archivo llamado `a.out` el cual se puede ejecutar poniendo adelante un `./` sin espacios

</v-click>

---

# Uso del compilador

Se puede utilizar el `gcc` con otros _parámetros_

Por ejemplo, para cambiar el nombre del archivo ejecutable se agrega `-o` seguido del nuevo nombre

<v-click>
<TypingBash
  :active="$slidev.nav.clicks === 1"
  code="gcc hello.c -o saludo
./saludo
>Hola, Mundo!
"
/>
</v-click>

---

# Uso del compilador

Otros parámetros útiles son:

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors hello.c"
/>
</v-click>

<v-click>

<span class="text-red-500">`-Wall`</span> **W**arning **all**

<span class="text-red-500">`-std=c99`</span> para el estándar C99

<span class="text-red-500">`--pedantic-errors`</span> si algo no cumple el estándar da error

</v-click>

---

# Funciones de entrada/salida

## Funciones
Las funciones son fragmentos de código que se _ejecutan_ cada vez que son _llamadas_.

Generalmente las funciones reciben información por parte de _quien_ las llame.
Esta información se pasa a la función por medio de los paréntesis.

Por ejemplo:

```c
  printf("Hola, Mundo!\n");
```

---

# Funciones de entrada/salida

`stdio.h` es el archivo de cabecera que contiene las declaraciones de las funciones de la **biblioteca estándar**

Algunas funciones son:  
`printf`, `scanf`, `getchar`, `putchar`

---

# Funciones de entrada/salida


```c {all|1}
#include <stdio.h>

int main (void)
{
  printf("Hola, Mundo!\n");

  return 0;
}
```

<v-click>
Para usar estas funciones se debe incluir este archivo de cabecera con la directiva de preprocesador `#include`
</v-click>

---

# Función `printf`

Como se vió, `printf` es una función para imprimir en pantalla.

Esta función debe recibir la cadena de caracteres para imprimir.
Por ejemplo, en los ejemplos se usó la cadena `"Hola, Mundo!\n"`

Como se puede ver en los ejemplos, el `\n` no se imprime.

La barra invertida (`\`) se llama **caracter de escape**, y cambia el _significado_ del caracter que sigue.

---

# Función `printf`

## Secuencias de escape de la función `printf`

$$
    \begin{array}{ll}
    \text{Escape} & \text{Descripción} \\
    \hline
    {\sf \backslash  n} & \text{Nueva línea} \\
    {\sf \backslash  t} & \text{Tabulador horizontal} \\
    {\sf \backslash  v} & \text{Tabulador vertical} \\
    {\sf \backslash  b} & \text{Retroceso} \\
    {\sf \backslash  r} & \text{Retorno de carro} \\
    {\sf \backslash \backslash} & \text{Diagonal invertida} \\
    {\sf \backslash "} & \text{Comillas}
    \end{array}
$$

---

# Función `printf`

## Ejemplos

```c
#include <stdio.h>
// u3-tres.c

int main (void)
{
  printf("Uno\nDos\nTres\n");

  return 0;
}
```

---

# Función `printf`

## Ejemplos

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-tres.c
./a.out
>Uno
>Dos
>Tres
"
/>
</v-click>

---

# Función `printf`
## Ejemplos

```c
#include <stdio.h>
// u3-retroceso.c

int main (void)
{
  printf("Uno\tDos\rTres\n");

  return 0;
}
```

---

# Función `printf`
## Ejemplos

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-retroceso.c
./a.out
>Tres   Dos
"
/>
</v-click>

---

# Función printf

## Especificadores de conversión o de formato

$$
    \begin{array}{ll}
        \text{Especificadores} & \text{Descripción} \\
        \hline
        \%\text{c}       & \text{Caracter}\\
        \%\text{d} \text{ o } \%\text{i} & \text{Entero decimal con signo}\\
        \%\text{u}       & \text{Entero decimal sin signo}\\
        \%\text{f}       & \text{Decimal de punto flotante}\\
    \end{array}
$$

---

# Función printf

## Especificadores de conversión o de formato

```c
#include <stdio.h>
// u3-conversion.c

int main (void)
{
  printf("%f\n", 3.14);
  printf("%d %d %d\n", 1, 2, 4);

  return 0;
}
```

---

# Función printf

## Especificadores de conversión o de formato

Por cada especificador que tenga la cadena de texto se espera un valor que tomará su lugar, todos separados por comas (llamados **argumentos**)


---

# Función printf

La cadena puede tener cualquier caracter válido junto con los especificadores de formato

```c
#include <stdio.h>
// u3-conv-suma.c

int main (void)
{
  printf("%d+%d=%d\n", 1, 2, 3);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-conv-suma.c
./a.out
>1+2=3
"
/>
</v-click>

---

# Función printf

Los valores que usan los especificadores pueden ser el resultado de operaciones

```c
#include <stdio.h>
// u3-conv-op-suma.c

int main (void)
{
  printf("%d+%d=%d\n", 1, 2, 1+2);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-conv-op-suma.c
./a.out
>1+2=3
"
/>
</v-click>

---

# Función printf

```c
#include <stdio.h>
// u3-conv-div-mod.c

int main (void)
{
  printf("%d\n", 5%2);
  printf("%d\n", 5/2);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-conv-div-mod.c
./a.out
>1
>2
"
/>
</v-click>

---
layout: image-right
image: /img/variable.svg
backgroundSize: contain
---

# Variables

Todas las variables tienen:
* Nombre o identificador
* Valor almacenado
* Dirección de memoria
* Tipo

---

# Tipos de datos, ej. de tamaño

$$
    \begin{array}{lrrr}
      \textsf{Tipo}          & \textsf{Menor}        & \textsf{Mayor}       & \textsf{Bytes} \\
      \hline
      \textsf{char}          & -128        & 127           & 1 \\
      \textsf{unsigned char} & 0           & 255           & 1 \\
      \textsf{short}         & -32768      & 32767         & 2 \\
      \textsf{unsigned short}& 0           & 65535         & 2 \\
      \textsf{int}           & -2147483648 & 2147483647    & 4 \\
      \textsf{unsigned int}  & 0           & 4294967295    & 4 \\
      \textsf{long}          & -9223372036854775808 & 9223372036854775807 & 8 \\
      \textsf{unsigned long} & 0           & 18446744073709551615  & 8 \\
      \color{red}{\textsf{float}}         & \text{1.18e-38}     & \text{3.4e+38}       & 4 \\
      \color{red}{\textsf{double}}        & \text{2.23e-308}    & \text{1.8e+308}      & 8 \\
      \color{red}{\textsf{long double}}   & \text{3.36e-4932}   & \text{1.19e+4932}     & 10
    \end{array}
$$

---

# Definición de variables

Cuando se **define** una variable se reserva una posición de memoria para poder almacenar su contenido.

En la definición se debe explicitar el **tipo** que corresponderá a esa variable.

De esta manera el compilador sabe que tan grande es el espacio de memoria que debe reservar.

También hay que asignar un **nombre**, con el cual se puede acceder al contenido de la memoria.

---

# Definición de variables

## Cómo?


<span class="text-green-500">`tipo`</span> <span class="text-grey-500">`identificador`</span>

Donde <span class="text-green-500">`tipo`</span> puede ser <span class="text-green-500">`int`</span>, <span class="text-green-500">`char`</span>, <span class="text-green-500">`float`</span>, etc.

...y donde <span class="text-grey-500">`identificador`</span> puede ser cualquier identificador válido

```c
int entero;
char caracter;
int n1, n2;
float max_temp;
```

---
layout: two-cols-header
---

# Definición de variables

## Donde?

::left::

```c {4}
#include <stdio.h>

int main (void) {
  int respuesta;

  respuesta = 42;
  printf("%d\n", respuesta);

  return 0;
}
```

::right::

* Por ahora entre las llaves del cuerpo de `main`

* Siempre **antes de su uso**

---
layout: two-cols-header
---

# Definición de variables

## Donde?

::left::

```c {6}
#include <stdio.h>

int main (void) {
  int respuesta;

  respuesta = 42;
  printf("%d\n", respuesta);

  return 0;
}
```

::right::

* Cuando se **asigna** un valor a una variable se dice que se **inicializa**

---
layout: two-cols-header
---

# Definición de variables

## Donde?

::left::

```c {4}
#include <stdio.h>

int main (void) {
  int respuesta = 42;

  printf("%d\n", respuesta);

  return 0;
}
```

::right::

* Se puede **inicializar** una variable en el mismo momento que se **define**

---

# Definición de variables


Se pueden definir varias variables del mismo tipo en la misma sentencia.


```c
  char var1, var2, var3;
```

Se pueden inicializar varias variables en la misma sentencia.

```c
  int a=3, b, c=0;
```

Las variables no inicializadas pueden tener cualquier valor.

---

# Definición de variables

```c
#include <stdio.h>

int main (void) {
  int a=3, b, c=0;

  printf("%d %d %d\n", a, b, c);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-sin-ini.c
>u3-sin-ini.c: In function ‘main’:
>u3-sin-ini.c:6:3: warning: ‘b’ is used uninitialized
>                               in this function [-Wuninitialized]
>   printf(&quot;%d %d %d&quot;,a,b,c);
>   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
./a.out
>3 32767 0
"
/>
</v-click>

---

# Definición de variables

Si se ejecuta nuevamente `a.out` la variable `b` puede tener cualquier valor.

Posiblemente diferente cada vez que se ejecute.

Dependerá de donde sea alojado `a.out` y la _basura_ que haya quedado en esa posición.

Para evitar errores inesperados **debe** inicializarse cada variable.

Y prestar atención a los mensajes del compilador.

---

# Operadores

En general, los **operadores** son símbolos que indican que debe realizarse una operación sobre algún conjunto de objetos.

Los objetos sobre los que opera un operador se llaman **operandos**.

Según a cuantos operandos afecten, los operadores pueden ser **unarios**, **binarios** o **ternarios**.

Los operadores siempre **devuelven** el resultado de la operación.

---

# Operadores aritméticos

## Unarios

$$
\begin{array}{cc}
 \texttt{+} & \texttt{Signo positivo} \\
 \texttt{-} & \texttt{Signo negativo} \\
\end{array}
$$

## Binarios

$$
\begin{array}{cc}
 \texttt{+} & \texttt{Suma} \\
 \texttt{-} & \texttt{Resta} \\
 \texttt{*} & \texttt{Producto} \\
 \texttt{/} & \texttt{División} \\
 \texttt{\%} & \texttt{Módulo} \\
 \texttt{=} & \texttt{Asignación}
\end{array}
$$

---

# Operadores aritméticos

El resultado de la operación se puede imprimir

```c
#include <stdio.h>
// u3-operadores-1.c

int main (void)
{
  printf("%d\n", 2 + 1);

  return 0;
}
```
---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-operadores-1.c
./a.out
>3
"
/>
</v-click>

---

# Operadores aritméticos
El resultado de la operación se puede **asignar**

```c
#include <stdio.h>
// u3-operadores-2.c

int main (void) {
  int resultado;

  resultado = 2 + 1;
  printf("%d\n", resultado);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-operadores-2.c
./a.out
>3
"
/>
</v-click>

---

# Operadores aritméticos

```c
#include <stdio.h>
// u3-operadores-3.c

int main (void) {
  int resultado;

  resultado = 3 * 2 + 1; // ??
  printf("%d\n", resultado);

  return 0;
}
```
---

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-operadores-3.c
$ ./a.out
7
$
```

<div style="font-size: 80%;">
<p>
El orden en el que se resuelven las operaciones depende de las reglas de precedencia
</p>
</div>

---

# Precedencia

Se llama precedencia al orden en el que se evalúan las operaciones en una expresión

Mientras más arriba en la tabla, se dice que tiene más (o mayor) precedencia, y se evalúa primero

---

# Precedencia

Hasta ahora...

$$
    \begin{array}{llll}
    \textsf{Operador} &    &  & \textsf{Asociatividad} \\\hline
    \textsf{()}       &    &  & \textsf{Izq. a Der.} \\
    \textsf{+ - (los de signo)}      &    &  & \textsf{Der. a Izq.} \\
    \textsf{* / }\%   &    &  & \textsf{Izq. a Der.} \\
    \textsf{+ -}      &    &  & \textsf{Izq. a Der.} \\
    \textsf{=}        &    &  & \textsf{Der. a Izq.} \\
    \end{array}
$$

---
transition: none
---

![](/img/operaciones-precedencia-001.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-002-4.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-002-3.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-002-2.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-002-1.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-002.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-003.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-004.svg){class="mx-auto"}

---
transition: none
---

![](/img/operaciones-precedencia-005.svg){class="mx-auto"}

---

![](/img/operaciones-precedencia-006.svg){class="mx-auto"}

---

# Operadores relacionales

Los operadores relacionales sirven para comparar constantes o variables.

$$
    \begin{array}{ccl}
     \textsf{En Mat.} & \textsf{En C} & \textsf{Descripción} \\ \hline
     >   & >  & \textsf{Mayor} \\
     <   & <  & \textsf{Menor} \\
     \geq& >= & \textsf{Mayor o igual} \\
     \leq& <= & \textsf{Menor o igual} \\
     =   & == & \textsf{Igual}\\
     \neq& != & \textsf{Distinto}
    \end{array}
$$

Como todos los operadores, devuelve el resultado de la operación

---

# Operadores relacionales

```c
#include <stdio.h>
// u3-relacion-1.c

int main (void)
{
  printf("%d\n", 3>2);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-relacion-1.c
./a.out
>1
"
/>
</v-click>

---

# Operadores relacionales

Si la relación **no** se cumple, devuelve un `0`

```c
#include <stdio.h>
// u3-relacion-2.c

int main (void)
{
  printf("%d\n", 2>3);

  return 0;
}
```

---

<v-click>
<TypingBash
  :active="$slidev.nav.clicks >= 1"
  code="gcc -Wall -std=c99 --pedantic-errors u3-relacion-2.c
./a.out
>1
"
/>
</v-click>

<v-click>
Estos operadores son utilizados en los condicionales.
</v-click>

---

# Funciones de entrada/salida

Cuando se necesita que el usuario ingrese algún valor se puede usar la función `scanf`

`scanf` es otra de las funciones de la **biblioteca estándar**

---

# Función scanf

`scanf` espera _al menos_ dos argumentos.

```c
  scanf("%d", &variable);
```

El primero es una cadena de texto con especificadores de formato semejantes a `printf`.

Luego espera tantos argumentos como especificadores de formato tenga la cadena.

Por ahora, estos argumentos son las variables (con un & delante) donde se guardarán los valores ingresados por el usuario.

---

```c {class="maxHeight:'300pxmaxHeight:'300px'erflow-auto"}
#include <stdio.h>

int main (void) {
  int sum1, sum2;
  int res;

  printf("Ingrese un número: ");
  scanf("%d", &sum1);
  printf("Ingrese otro número: ");
  scanf("%d", &sum2);

  res = sum1 + sum2;
  printf("%d+%d=%d\n", sum1, sum2, res);

  return 0;
}
```

---

# Función scanf

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-relacion-2.c
$ ./a.out
Ingrese un número: 12
Ingrese otro número: 13
12+13=25
$
```

Si una variable va a ser utilizada por primera vez en un `scanf` no hace falta inicializarla

---

# Función scanf

Al igual que `printf` tiene distintos especificadores de formato

$$
    \begin{array}{ll}
        \text{Especificadores} & \text{Descripción} \\
        \hline
        \%\text{c}       & \text{Caracter}\\
        \%\text{d} \text{ o } \%\text{i} & \text{Entero decimal con signo}\\
        \%\text{u}       & \text{Entero decimal sin signo}\\
        \%\text{f}       & \text{Decimal de punto flotante}\\
    \end{array}
$$


---

# Función scanf

También se pueden ingresar más valores por sentencia


```c
  scanf("%d %d", &var1, &var2);
```

donde para diferenciar los valores desde el teclado se ingresan con un espacio, un tab o un enter entre ellos.


---

# Función putchar

```c
#include <stdio.h>

int main (void)
{
  int numero;

  printf("Ingrese un número (1-127): ");
  scanf("%d", &numero);

  printf("En la tabla ASCII: ");
  putchar(numero);

  return 0;
}
```

---

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-putchar.c
$ ./a.out
Ingrese un número (1-127): 65
En la tabla ASCII: A
$
```

---

# Función putchar

La función `putchar` tiene el mismo efecto que `printf` si solo se imprime un caracter con `"%c"`

La sentencia

```c
  putchar(65);
```

Tiene el mismo efecto que la sentencia

```c
  printf("%c", 65);
```

---

# Función putchar

Además de la diferente complejidad de las sentencias, la diferencia fundamental reside en el valor devuelto.

La función `putchar` devuelve el valor entero del carater impreso.

La función `printf` devuelve la cantidad de caracteres impresos.

---

# Función getchar

Se puede ingresar cualquier caracter desde el teclado utilizando la función `getchar`

`getchar` devuelve un entero correspondiente al caracter ingresado

---

# Función getchar

```c
#include <stdio.h>

int main (void) {
  int numero;

  printf("Ingrese un caracter de la tabla ASCII: ");
  numero = getchar();

  printf("En la tabla ASCII es el %d\n", numero);

  return 0;
}
```

---

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-getchar.c
$ ./a.out
Ingrese un caracter de la tabla ASCII: A
En la tabla ASCII es el 65
$
```

---

# Operador de Conversión de tipo (cast)

En ocaciones se necesita obtener resultados de un tipo de datos a partir de variables de tipos diferentes.

Por ejemplo un promedio (punto flotante) a partir calificaciones (enteras)

```c
  promedio = suma_notas / cuantas_notas;
```

---

# Operador de Conversión de tipo (cast)

```c
#include <stdio.h>

int main (void) {
  int suma_notas, cuantas_notas;
  float promedio;

  printf("Ingrese la suma de todas las notas: ");
  scanf("%d", &suma_notas);
  printf("Ingrese cuantas notas son: ");
  scanf("%d", &cuantas_notas);

  promedio = suma_notas / cuantas_notas;

  printf("Promedio: %.2f\n", promedio);

  return 0;
}
```

---

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-sin-cast.c
$ ./a.out
Ingrese la suma de todas las notas: 13
Ingrese cuantas notas son: 2
Promedio: 6.00
$
```

El problema es que cuando la división es entre dos enteros, se realiza de la manera básica, devolviendo un entero y dejando resto...

...asignando un valor entero a la variable `promedio` (aunque quede almacenado como de punto flotante)

Para esto se usa el operador de conversión de tipo

---

# Operador de Conversión de tipo (cast)

El operador de conversión de tipo o simplemente _cast_ es un operador **unario** que cambia temporalmente el tipo de datos de su operando.

Consiste en colocar entre parentesis el tipo de datos al que se quiere _convertir_ el operando, delante del mismo.

---

# Operador de Conversión de tipo (cast)

```c
#include <stdio.h>

int main (void) {
  int suma_notas, cuantas_notas;
  float promedio;

  printf("Ingrese la suma de todas las notas: ");
  scanf("%d", &suma_notas);
  printf("Ingrese cuantas notas son: ");
  scanf("%d", &cuantas_notas);

  promedio = (float) suma_notas / cuantas_notas;

  printf("Promedio: %.2f\n", promedio);

  return 0;
}
```

---

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-con-cast.c
$ ./a.out
Ingrese la suma de todas las notas: 13
Ingrese cuantas notas son: 2
Promedio: 6.50
$
```

---

# Precedencia (actualizada)

$$
    \begin{array}{llll}
    \textsf{Operador}                        &   &  & \textsf{Asociatividad} \\\hline
    ()                                       &   &  & \textsf{Izq. a Der.} \\
    + \quad - \quad (\text{tipo})            &   &  & \textsf{Der. a Izq.} \\
    * \quad / \quad \%                       &   &  & \textsf{Izq. a Der.} \\
    + \quad -                                &   &  & \textsf{Izq. a Der.} \\
    < \quad <= \quad > \quad >=              &   &  & \textsf{Izq. a Der.} \\
    == \quad !=                              &   &  & \textsf{Izq. a Der.} \\
    =                                        &   &  & \textsf{Der. a Izq.} \\
    \end{array}
$$

---

# Operadores

Otros operadores son el `++` (llamado incremento) y  
el `--` (llamado decremento)


Son operadores **unarios** porque solo funcionan con un operando.


Solo pueden usarse con variables.

El `++` incrementa en 1 el operando al que opera

El `--` decrementa en 1 el operando al que opera

---

# Operadores

 Ejemplo con `++`

```c
#include <stdio.h>

int main (void) {
  int var = 3;

  var++;

  printf("%d\n", var);

  return 0;
}
```

la variable `var` se inicializa con un 3, pero luego en la siguiente línea aparece el `var++;`

---

# Operadores

Ejemplo con `++`

```c
#include <stdio.h>
// u3-op-inc.c

int main (void) {
  int var = 3;

  var++;

  printf("%d\n", var);

  return 0;
}
```

---

```bash
$ gcc -Wall -std=c99 --pedantic-errors u3-op-inc.c
$ ./a.out
4
$
```

---

el operador `++` aquí funciona igual que
```c
var = var + 1;
```

---

# Operadores

 Ejemplo con `++`

```c
#include <stdio.h>
// u3-op-inc.c

int main (void)
{
  int var = 3;

  var++;

  printf("%d\n", var);

  return 0;
}
```

O sea, tomar el valor que tiene la variable, incrementarla en una unidad, y volver a guardar el resultado en la misma variable.

---

# Operadores

El operador `++` también se puede usar antes de la variable

```c
++var;
```

En este caso tiene el mismo efecto que en el caso anterior

---

# Operadores

Los operadores `++` y `--` también se pueden usar dentro de otra expresión...

```c
int var = 3

printf("%d\n", ++var);
```

```bash
4
```
pero con un detalle...

---
layout: two-cols-header
---

# Operadores

Suponga 2 fragmentos de código (se omite todo el resto y se pone la salida sin compilar para simplificar)

::left::

**pre** incremento

```c
int var = 3

printf("%d\n", ++var);
```

```bash
4
```

::right::

**post** incremento

```c
int var = 3

printf("%d\n", var++);
```

```bash
3
```

::bottom::

<v-click>
¿Qué pasó?
</v-click>

---

# Operadores

La función `printf` en este caso reemplaza el `%d` con lo que hay luego de la coma

```c
printf("`%d`\n", `++var`);
```

como es una operación, debe resolverse primero (como en el caso de 1+2 hace unos slides atrás)

El `++` delante de la variable se llama **pre** incremento, porque se incrementa **previamente** a su _uso_ (el uso de la variable).

El _uso_ es ser reemplazada por el `%d`

---

# Operadores

En cambio, cuando el `++` se coloca después de la variable se llama **post** incremento, porque incrementa a la variable **después** de su _uso_.

Entonces, primero se usa el valor actual de `var` en el `printf` y **luego** se incrementa

```c
printf("%d\n", var++);
```

Lo mismo sucede con el `--`, se puede hacer pre o post decremento

---

# Operadores

Otro operador útil es el `+=` y sus variantes

```c
var += 3;
```

es equivalente a

```c
var = var + 3;
```

en lugar de 3 se podría poner cualquier valor numérico


---

# Operadores

Las variantes son:

$$
    \begin{array}{ll}
        += & \textsf{Suma y asignación} \\
        -= & \textsf{Resta y asignación} \\
        *= & \textsf{Producto y asignación} \\
        /= & \textsf{División y asignación} \\
        \%= & \textsf{Módulo y asignación} \\
    \end{array}
$$

---

# Precedencia de operadores (actualizada)

$$
    \begin{array}{llll}
    \textsf{Operador}                                           &   &  & \textsf{Asociatividad} \\\hline
    ()                                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad - \quad (\text{tipo}) \quad ++ \quad --      &   &  & \textsf{Der. a Izq.} \\
    * \quad / \quad \%                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad -                                                   &   &  & \textsf{Izq. a Der.} \\
    < \quad <= \quad > \quad >=                                 &   &  & \textsf{Izq. a Der.} \\
    == \quad !=                                                 &   &  & \textsf{Izq. a Der.} \\
    = \quad += \quad -=  \quad /= \quad *= \quad \%=            &   &  & \textsf{Der. a Izq.} \\
    \end{array}
$$

---

<!--# Material-->

<!--Todos los códigos de esta unidad (y las próximas) se pueden ver/bajar de:-->

<!--https://github.com/claudiojpaz/code-->




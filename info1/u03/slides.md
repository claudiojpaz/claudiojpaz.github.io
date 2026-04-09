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

Finalmente, el **linqueador** transforma compone un único archivo ejecutable con el `.o` que se creo a partir del código del usuario, junto con los `.o` de las funciones de las bibliotecas elegidas

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

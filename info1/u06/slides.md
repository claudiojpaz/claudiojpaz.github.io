---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 6
titleTemplate: '%s'
info: |
    Unidad 6  
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

<div class="absolute left-10 bottom-10">

# Unidad 6

# Funciones en lenguaje C

</div>

<QrOverlay title=''>

<img src="/img/info1-u06.png" class="mx-auto w-3/4" />

</QrOverlay>

---
layout: two-cols-header
class: text-2xl
---

# Programación modular

La programación modular consiste en resolver problemas dividiéndolos en problemas más pequeños

::left::

<img src="/img/funcion-un-modulo.svg" style="transform: scale(0.8); display:block; margin:auto;position: relative; top: 0px">


::right::

<img src="/img/funcion-un-tres-modulo.svg" style="transform: scale(0.8); display:block; margin:auto; position: relative; top: -10px">


---
class: text-2xl
---

# Funciones en el lenguaje C

Funciones de la biblioteca estándar...

(de `stdio.h`: `printf`, `scanf`, etc.)

(de `math.h`: `sqrt`, `pow`, `log`, etc.)

o nuevas funciones _definidas_ por el usuario

---
transition: none
class: text-2xl
---

# Definición de una función


<pre><code>
tipo-valor-retorno <span class="text-red-500">nombre-funcion</span> (lista-parametros)
{
  sentencias
}
</code></pre>

<v-clicks>

Los nombres de función deben respetar las mismas reglas que los otros identificadores (variables)

Se usa ese nombre para invocarla. No pueden tener nombres de otras funciones.

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función


<pre><code>
tipo-valor-retorno nombre-funcion <span class="text-red-500">(lista-parametros)</span>
{
  sentencias
}
</code></pre>

<v-clicks>

La lista de parámetros es la información (variables) que recibe la función desde quien la llama


Son variables separadas por comas (,) que deben incluir el tipo de las mismas

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función


<pre><code>
<span class="text-red-500">tipo-valor-retorno</span> nombre-funcion (lista-parametros)
{
  sentencias
}
</code></pre>

<v-clicks>

En ocasiones las funciones devuelven un valor


El tipo del valor devuelto, debe estar explicito en la definición de la función


</v-clicks>

---
class: text-2xl
---

# Definición de una función


<pre><code>
tipo-valor-retorno nombre-funcion (lista-parametros)
<span class="text-red-500">{
  sentencias
}</span>
</code></pre>

<v-clicks>

Abajo del encabezado, el _cuerpo_ de la función está formado por el bloque formado por las sentencias y las llaves que las rodean

Las llaves son **obligatorias** aunque la sentencia sea una _sentencia simple_

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2)
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}
```

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code range:int n1, int n2]
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}
```

<v-clicks>

En este ejemplo las variables `n1` y `n2` no necesitan definirse en el cuerpo de la función

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code range:int n1, int n2]
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}
```

<v-clicks>

A cada variable de la lista de parámetros debe anteponerse su tipo (aunque sean iguales)

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2)
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}
```

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code word-once:float]
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}
```

<v-clicks>

El tipo de valor de retorno puede ser cualquier tipo (`int`, `char`, `float`, etc.)

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code word-once:float]
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado;
}
```
---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code word-once:float]
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado; // [!code range:return resultado;]
}
```

<v-clicks>

Al final del cuerpo de la función la sentencia `return` indica cual es el valor devuelto

</v-clicks>

---
transition: none
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code word-once:float]
{
  int suma;
  float resultado;

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado; // [!code range:return resultado;]
}
```

<v-clicks>

Debe coincidir en tipo con el _tipo de valor de retorno_

</v-clicks>

---
class: text-2xl
---

# Definición de una función
## Ejemplo

```c
float media (int n1, int n2) // [!code word-once:float]
{
  int suma;
  float resultado; // [!code range:float resultado;]

  suma = n1 + n2;

  resultado = (float) suma / 2;

  return resultado; // [!code range:return resultado;]
}
```

Debe coincidir en tipo con el _tipo de valor de retorno_

---
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

<v-clicks>

Las funciones se llaman invocándolas por su nombre, colocando entre paréntesis los valores que pasan a la lista de parámetros

```c
  m = media(7, 8);
```

se dice que los números (en este caso) entre paréntesis son la _Lista de Argumentos_

También podrían ser variables o cualquier otra expresión

```c
  m = media(a, b);
```

</v-clicks>

---
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

<v-clicks>

La _Lista de Argumentos_ debe coincidir con la _Lista de Parámetros_ en tipo y número

Cada elemento de la _Lista de Argumentos_ **se copia** en los elementos de la _Lista de Parámetros_

Las variables de la _Lista de Argumentos_ puede tener nombres diferentes de la _Lista de Parámetros_

</v-clicks>

---
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

<v-clicks>

Por ejemplo, si se tiene la siguiente función:

```c
float potencia (float base, int exponente) {
  float p = 1;

  for (int i = 0; i < exponente; i++)
    p *= base;

  return p;
}
```
</v-clicks>

---
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

<v-clicks>

el llamado debería ser algo así:


```c
  float resultado;

  resultado = potencia(2, 3);

```

Aquí el 2 se copia en `base` y el 3 en `exponente`

</v-clicks>


---
transition: none
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

Si la función no recibe ningún valor, la _Lista de Parámetros_ debe tener el tipo `void`

```c
int ingreso_nota (void)
{
  int nota;

  do {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
  } while ( nota < 1 || nota > 10 );

  return nota;
}
```

---
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

Si la función no recibe ningún valor, la _Lista de Parámetros_ debe tener el tipo `void`

```c
int ingreso_nota (void) // [!code word-once:void]
{
  int nota;

  do {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
  } while ( nota < 1 || nota > 10 );

  return nota;
}
```

---
transition: none
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

y la _Lista de Argumentos_ debe estar vacía


```c
int n;

n = ingreso_nota();
```

---
class: text-2xl
---

# Lista de Parámetros Vs Lista de Argumentos

y la _Lista de Argumentos_ debe estar vacía


```c
int n;

n = ingreso_nota();  // [!code word-once:()]
```

---
transition: none
class: text-2xl
---

# Retorno desde una función

Si la función **no devuelve** valor, en el encabezado el _tipo de valor de retorno_ debe ser `void`

```c
void imprime_linea (int n)
{
  for (int i = 0; i < n; i++)
    if ( i % 2 == 0 )
      printf("*");
    else
      printf("+");

  printf("\n");
}
```

---
class: text-2xl
---

# Retorno desde una función

Si la función **no devuelve** valor, en el encabezado el _tipo de valor de retorno_ debe ser `void`

```c
void imprime_linea (int n) // [!code word-once: void]
{
  for (int i = 0; i < n; i++)
    if ( i % 2 == 0 )
      printf("*");
    else
      printf("+");

  printf("\n");
}
```

<v-clicks>

En ese caso, no hace falta la sentencia `return`

</v-clicks>

---
class: text-2xl
---

# Uso del valor devuelto por una función

<v-clicks>

El valor devuelto _desde_ la función con la sentencia `return` se puede almacenar en una variable

```c
  m = media(7, 8);
  printf("La media entre %d y %d es %.1f\n", 7, 8, m);
```

O se puede usar directamente como argumento en otra función

```c
  printf("La media entre %d y %d es %.1f\n", 7, 8, media(7, 8));
```

O se puede usar como operando

```c
  med = 20 / media(7, 8);
```

</v-clicks>

---
class: text-2xl
---

# Uso del valor devuelto por una función

<v-clicks>

Si valor devuelto por la función no se usa, se pierde

Esto no da errores ni advertencias del compilador

Hay funciones se usan cotidianamente, que devuelven valor que generalmente se descarta

Por ejemplo: `printf`, `scanf`

</v-clicks>

---
class: text-2xl
---

# Prototipo de una función

<v-clicks>

Para que los programas no den errores o advertencias de _linqueo_, las funciones deben estar definidas antes de su uso en el programa (de arriba hacia abajo).

Se puede definir la función debajo de su llamado si se usa los _prototipos_

El _prototipo_ de una función es una sentencia que indica el valor de retorno, el nombre y los _tipos_ de la lista de parámetros y finaliza con un punto y coma (;)

</v-clicks>

---
class: text-2xl
---

# Prototipo de una función


```c {all|3,15}  {maxHeight: '400px'}
#include <stdio.h>

int cuadrado (int);

int main (void) {
  int x=3, x2;

  x2 = cuadrado(x);

  printf("El cuadrado de %d es %d\n", x, x2);

  return 0;
}

int cuadrado (int x) {
  return x * x;
}

```

---
class: text-2xl
---

# Prototipo de una función

<v-clicks>

Los prototipos indican al compilador cuantos y de que tipo son los argumentos que hay que pasarle a cada función y el tipo de valor de retorno


La ventaja de usar prototipos es que no hace falta preocuparse cual función es llamada antes que otra, o que función llama a cual y que las definiciones estén en el orden correcto


Los prototipos van antes de las definiciones de las funciones, usualmente los prototipos van antes que `main` y las definiciones después de `main`

</v-clicks>

---
class: text-2xl
---

# Clases de Almacenamiento

<v-clicks>

En la Unidad 3 se dijo que las variables tenían cuatro atributos:

Nombre

Tipo

Dirección

Valor

</v-clicks>

---
class: text-2xl
---

# Clases de Almacenamiento

Nuevo atributo:

**Clase de almacenamiento:**

Determina la duración, alcance y enlace de las variables

---
class: text-2xl
---

# Clases de Almacenamiento

## Duración del almacenamiento

Se refiere al tiempo que las variables _existen_ en memoria

Pueden durar solo un momento, ser creadas y destruidas reiteradamente, o existir durante toda la ejecución del programa

Las variables pueden ser:
* de _duración de almacenamiento **automática**_
* de _duración de almacenamiento **estática**_

---
class: text-2xl
---

# Clases de Almacenamiento

## Alcance o ámbito (_scope_) de una variable

El alcance de una variable es la porción de programa donde se puede acceder o _referenciar_ a una variable

Las variables que se definen en la lista de parámetros o en el cuerpo de las funciones se dice que son **variables locales**

Solo pueden ser accedidas desde las funciones donde están definidas

---
class: text-2xl
---

# Clases de Almacenamiento
## Alcance o ámbito (_scope_) de una variable

Las variables que se definen afuera de cualquier función son conocidas como **variables globales**


Pueden ser accedidas desde cualquier función


Pueden retener su valor durante toda la duración del programa

---
class: text-2xl
---

# Variables automáticas Vs estáticas

Cuando una función es llamada, las variables definidas en la lista de parámetros o las definidas en el cuerpo de la función son creadas

Cuando la función llega a una sentencia [`return`]{style="color: #C27A7F"} o a la llave de cierre del cuerpo de la función, las variables son destruidas

Se dice que estas variables son **automáticas** y es el comportamiento por defecto de las _variables locales_

Se puede explicitar este comportamiento con la palabra clave [`auto`]{style="color: #C27A7F"} a la izq. en la definición

---
class: text-2xl
---

# Variables automáticas Vs estáticas

Si las variables se definen con la palabra clave [`static`]{style="color: #C27A7F"}, son consideradas **estáticas**

En este caso, las variables no se destruyen al finalizar la función, y mantienen su valor hasta el próximo llamado a la función

Por defecto se inicializan en 0, a menos que se dé otro valor

```c
static int var = 1;
```

---
class: text-2xl
---

# Variables automáticas Vs estáticas

Las variables _locales_ son por defecto **automáticas**


Las variables _globales_ son por defecto **estáticas**


---
class: text-2xl
---

# Reglas de alcance

Las variables globales, los prototipos y las definiciones de las funciones se dice que tienen _alcance de archivo_

Esto quiere decir que se pueden acceder desde cualquier parte del archivo

Las variables definidas dentro de bloques se dice que tienen _alcance de bloque_

---
class: text-2xl
---

# Reglas de alcance

Se pueden anidar bloques, y en cada bloque definir nuevas variables que tendrán alcance de **ese** bloque

Si dentro de un bloque anidado hay un identificador (variable) con el mismo nombre que una variable de un bloque de más afuera, la variable del bloque de afuera es _escondida_ hasta que el bloque anidado termine

Si una variable local tiene el mismo nombre que una variable global, esta última es escondida y no puede ser accedida desde la función


---
transition: none
class: text-2xl
---

```c
#include <stdio.h>

int inc (void) {
  int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

<v-click>

```
0 0 0 0 0 0 0 0 0 0
```

</v-click>

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>

int inc (void) {
  int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

<v-click>

Cuando se llama a la función [`inc`]{style="color: #8EB274"} la variable `c` es creada e inicializada a cero

</v-click>

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>

int inc (void) {
  int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

<v-click>

Cuando la función termina el valor (incrementado) de la variable `c` se pierde

</v-click>

---
transition: none
class: text-2xl
---

````md magic-move
```c
#include <stdio.h>

int inc (void) {
  int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```
```c
#include <stdio.h>

int inc (void) {
  static int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```
````

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>

int inc (void) {
  static int c = 0; // [!code word-once:static]

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

<v-click>

```
0 1 2 3 4 5 6 7 8 9
```

</v-click>

---
transition: none
class: text-2xl
---

```c
#include <stdio.h>

int inc (void) {
  static int c = 0; // [!code word-once:static]

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

<v-click>

Cuando se define la variable como estática, es creada e inicializada cuando inicia el programa

</v-click>

---
class: text-2xl
---

```c
#include <stdio.h>

int inc (void) {
  static int c = 0; // [!code word-once:static]

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

<v-click>

Cada vez que se llama a la función no se declara ni inicializa, continúa con el valor que quedó del llamado anterior, o sea que _"se salta esa línea"_

</v-click>

---
transition: none
layout: two-cols-header
class: text-2xl
---

::left::

```c
#include <stdio.h>

int inc (void) {
  static int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

::right::

```c
#include <stdio.h>

int c = 0;

int inc (void) {
  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```
::bottom::

<v-click>

Ambos casos tienen la misma salida, la diferencia es que la variable `c` cuando es local solo puede ser accedida desde la función

</v-click>

---
layout: two-cols-header
class: text-2xl
---

::left::

```c
#include <stdio.h>

int inc (void) {
  static int c = 0;

  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```

::right::

```c
#include <stdio.h>

int c = 0;

int inc (void) {
  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", inc() );

  return 0;
}
```
::bottom::

<v-click>

En el caso de la variable global, esta podría ser accesible desde cualquier función definida en este archivo

</v-click>

---
class: text-2xl
---

## Variables estáticas Vs Globales

Entonces hay que diferenciar entre el alcance (desde donde se puede acceder) y la duración (por cuanto tiempo se mantienen los datos)

Las variables locales (automáticas por defecto) solo pueden ser accedidas desde la función donde _"viven"_ y cuando la función termina, las variables _"dejan de existir"_

---
class: text-2xl
---

# Funciones con más de un return

En ocasiones, siempre tratando de escribir código más claro, se puede usar más de una sentencia return en una función

En caso de haber dos sentencias return, la ejecución de cualquiera de ellas termina inmediatamente la función devolviendo el valor indicado en la sentencia.

Aún estando en una estructura y sin importar el grado de anidamiento

---
class: text-2xl
---

# Funciones con más de un return

```c
#include <stdio.h>

int max (int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int main (void) {
  printf("%d\n", max(3,4));

  return 0;
}
```

---
class: text-2xl
---

# Llamada por valor y por "referencia"

En programación, cuando se llama a funciones se pasa información _por valor_ o _por referencia_

El paso _por valor_ significa que la información es copiada en una nueva variable, y modificar esta última no afecta a la original

El paso _por referencia_ significa que algún cambio en la variable en la función afecta la variable original

---
layout: two-cols-header
class: text-2xl
---

# Llamada por valor y por "referencia"

::left::

```c
#include <stdio.h>

void func1 (int x) {
  x++;
  printf("En la función: %d\n", x);
}

int main (void) {
  int x = 3;
  func1(x);
  printf("En el main: %d\n", x);

  return 0;
}
```

::right::

<v-clicks>

```
En la función: 4
En el main: 3
```

En lenguaje C el paso es *siempre* por valor

</v-clicks>

<style>
.two-cols-header {
  column-gap: 20px; /* Adjust the gap size as needed */
}
</style>

---
class: text-2xl
---

# Recursividad

Existen algunos problemas en los que es útil tener funciones **que se llaman a si mismas**

Reciben el nombre de **funciones recursivas**

Cada llamado a la función (incluso desde la misma función) crea un nuevo "contexto" de la función, con nuevas variables

Cuando una función se llama a si misma es equivalente a cuando llama a cualquier otra, esto es, suspende la ejecución hasta que la función llamada termina.

---
layout: two-cols-header
class: text-2xl
---

::left::

```c
#include <stdio.h>

void imp (int n) {
  printf("Ingresa donde n vale %d\n", n);

  if (n > 1)
    imp(n-1);

  printf("Sale donde n vale %d\n", n);
}

int main (void) {
  imp(5);

  return 0;
}
```


::right::

<v-clicks>

```
Ingresa donde n vale 5
Ingresa donde n vale 4
Ingresa donde n vale 3
Ingresa donde n vale 2
Ingresa donde n vale 1
Sale donde n vale 1
Sale donde n vale 2
Sale donde n vale 3
Sale donde n vale 4
Sale donde n vale 5
```

</v-clicks>

<style>
.two-cols-header {
  column-gap: 20px; /* Adjust the gap size as needed */
}
</style>

---
class: text-2xl
---

# Condiciones para implementar funciones recursivas

<v-clicks>

Las funciones recursivas deben tener dos partes:

- El **caso base**, en el cual la función **no** realiza la llamada recursiva (es decir, no se llama a sí misma).

- El **caso recursivo**, en el cual la función se llama a sí misma con uno o más argumentos modificados de manera que la ejecución termine alcanzando el caso base.

</v-clicks>

---
class: text-2xl
---

# Ejemplo: Suma acumulada

<v-clicks>

La suma acumulada de un número $n$ se puede calcular como

$$
    \text{cumsum}(n) = \sum\limits_{i=1}^{n} i
$$

entonces, el algoritmo recursivo se puede escribir

$$
    \text{cumsum}(n) = n + \text{cumsum}(n-1)
$$

Se puede tomar está expresión como el paso recursivo

y $\text{cumsum}(1) = 1$ como caso base

</v-clicks>

---
class: text-2xl
---

# Ejemplo: Suma acumulada

```c
int suma_acumulada(int n) {
  int resultado;

  if (n == 1)
    resultado = 1;
  else
    resultado = n + suma_acumulada (n-1);

  return resultado;
}
```

---
class: text-2xl
---


# Ejemplo: Serie de Fibonacci

Es una serie de números que comienza con $0$ y $1$, y a partir de ahí, cada elemento de la serie es igual a la suma de los dos números anteriores

$0,1,1,2,3,5,8,13,21,34,$ etc

$\text{fibo}(n) = \text{fibo}(n-1) + \text{fibo}(n-2)$


Como caso base se toma $\text{fibo}(1)=1$ y $\text{fibo}(0)=0$

---
class: text-2xl
---

# Ejemplo: Serie de Fibonacci

````md magic-move
```c
int fibo (int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  return fibo(n-1) + fibo(n-2);
}
```
```c
int fibo (int n) {
  if (n == 0 || n == 1)
    return n;

  return fibo(n-1) + fibo(n-2);
}
```
````

---
class: text-2xl
---

# Recursividad vs. Iteración

Ambos métodos usan sentencias de control: La _iteración_ usa la sentencia repetitiva, la _recursividad_ usa la sentencia selectiva

La _recursión_ realiza numerosos llamados a una función, creando con cada llamado nuevas copias de variables para cada instancia de la función, usando tiempo de computo y **memoria**.

La _iteración_ generalmente está confinada en una función y no hace mayor uso de memoria que 1 ciclo

---
class: text-2xl
---

# Recursividad vs. Iteración

La recursividad se usa en los programas en los que este enfoque es más natural de implementar, lo que resulta en un problema más fácil de entender o _mantener_

También se usa en los problemas en que la solución _iterativa_ no es fácil de implementar

---
class: text-2xl
---

# Archivos de cabecera

Los archivos de cabecera son aquellos con extensión `.h`

Contienen los prototipos de las funciones necesarias para el programa

Se _incluyen_ en el programa usando la directiva de preprocesador `#include`

Pueden ser los archivos de cabecera correspondientes a la biblioteca estándar o a las funciones realizadas por el usuario

---
class: text-2xl
---

# Archivos de cabecera

Se pueden incluir de dos formas

```c
#include <stdio.h>
```

o

```c
#include "mifuncion.h"
```

los _ángulos_ (`< >`) indican que debe buscarse en los directorios del sistema (en Linux usualmente `/usr/include/`)

las `" "` indican que debe buscarse en el directorio actual, o en su defecto en el directorio del sistema

---
class: text-2xl
---

# Archivos de cabecera

por ejemplo, si se tiene un archivo `fibo.h` con

```c
int fibo (int);
```

---
class: text-2xl
---

# Archivos de cabecera

quedando el archivo `principal.c`

```c
#include <stdio.h>
#include "fibo.h"

int main (void) {
  for (int i = 0; i < 10; i++)
    printf("%d ", fibo(i));

  return 0;
}

int fibo (int n) {
  if (n == 0 || n == 1)
    return n;

  return fibo(n-1) + fibo(n-2);
}
```

---
class: text-2xl
---

# Archivos de cabecera (extra)

también se puede poner en un archivo llamado `fibo.c` la función

```c
int fibo (int n)
{
  if (n == 0 || n == 1)
    return n;

  return fibo(n-1) + fibo(n-2);
}
```

quitándola del archivo `principal.c`

---
class: text-2xl
---

# Archivos de cabecera (extra)

quedando ahora el archivo `principal.c`

```c
#include <stdio.h>
#include "fibo.h"

int main (void)
{
  for (int i = 0; i < 10; i++)
    printf("%d ", fibo(i));

  return 0;
}

```

---
class: text-2xl
---

# Archivos de cabecera (extra)

Recordando el proceso de _compilación_, compuesto del preprocesamiento, la compilación propiamente dicha y el linqueo...


La compilación propiamente dicha no da errores (faltando la definición de la función) ya que existe el prototipo que indica nombre, lista de parámetros y valor de retorno.


De manera similar a lo que sucede con `printf`


En el proceso de linqueo, hay que _juntar_ el código del programa principal con el **código objeto** de la función

---
class: text-2xl
---

# Archivos de cabecera (extra)

Para compilar (y solo compilar) se usa la opción **`-c`**


```shell
$ gcc -Wall -std=c99 -c fibo.c
```

Esto genera un archivo de extensión `.o`, el cual no es posible ejecutar


Lo mismo se hace con el programa principal

```shell
$ gcc -Wall -std=c99 -c principal.c
```


luego, el proceso de linqueo se puede hacer con el mismo `gcc`, pero con los archivos `.o` generados


---
class: text-2xl
---

# Archivos de cabecera (extra)


```shell
$ gcc -Wall -std=c99 fibo.o principal.o -o fibonacci
```

esto genera un archivo **ejecutable** llamado `fibonacci` (si no se usa el `-o` se llamará `a.out`)


y se ejecuta con

```shell
$ ./fibonacci
```

---
class: text-2xl
---


# Archivos de cabecera (extra)

```shell
$ gcc -Wall -std=c99 fibo.o principal.o -o fibonacci
```
esto genera un archivo **ejecutable** llamado `fibonacci` (si no se usa el `-o` se llamará `a.out`)

y se ejecuta con

```shell
$ ./fibonacci
0 1 1 2 3 5 8 13 21 34
$
```

---
class: text-2xl
---

# Archivos de cabecera (extra)

Una de las condiciones para usar múltiples archivos es que solo uno de ellos debe tener la función `main`


Recordar también compilar cada archivo con la opción `-c` y luego todos los `.o` juntos sin el `-c`


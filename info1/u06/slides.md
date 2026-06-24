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

<img src="./img/info1-u06.png" class="mx-auto w-3/4" />

</QrOverlay>

---
layout: two-cols-header
class: text-2xl
---

# Programación modular

La programación modular consiste en resolver problemas dividiéndolos en problemas más pequeños

::left::

<img src="./img/funcion-un-modulo.svg" style="transform: scale(0.8); display:block; margin:auto;position: relative; top: 0px">


::right::

<img src="./img/funcion-un-tres-modulo.svg" style="transform: scale(0.8); display:block; margin:auto; position: relative; top: -10px">


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
# Prototipo de una función

<v-clicks>

Los prototipos indican al compilador cuantos y de que tipo son los argumentos que hay que pasarle a cada función y el tipo de valor de retorno


La ventaja de usar prototipos es que no hace falta preocuparse cual función es llamada antes que otra, o que función llama a cual y que las definiciones estén en el orden correcto


Los prototipos van antes de las definiciones de las funciones, usualmente los prototipos van antes que `main` y las definiciones después de `main`

</v-clicks>

---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 2
titleTemplate: '%s'
info: |
    Unidad 2  
    Slides del teórico de la Materia  
    Informática 1 del Departamento de Ingeniería Electrónica  
    Facultad Regional Córdoba de la Universidad Tcnológica Nacional
# apply UnoCSS classes to the current slide
class: text-xl
# https://sli.dev/features/drawing
drawings:
  persist: false
# slide transition: https://sli.dev/guide/animations.html#slide-transitions
transition: slide-left
# enable MDC Syntax: https://sli.dev/features/mdc
mdc: true
layout: image
---

<div class="absolute left-20 bottom-20">

# Unidad 1

# Sistemas de numeración

</div>

---
class: text-2xl
---

# Sistemas de numeración

<div class="space-y-8">

<v-clicks>

Preguntas para hacernos...

¿Por qué (los humanos) usamos el sistema decimal?

¿Usamos otros sistemas?

¿Por qué las computadoras usan el sistema binario?

</v-clicks>

</div>

---
class: text-2xl
transition: none
---

# Sistemas de numeración

<div class="space-y-8">

En la primaria vimos como descomponer un número en unidad, decena, centena, etc.

<v-click>

$1324$

</v-click>

</div>

---
class: text-2xl
---

# Sistemas de numeración

<div class="space-y-8">

En la primaria vimos como descomponer un número en unidad, decena, centena, etc.

$1324 = 1000 + 300 + 20 + 4 %$

<v-clicks>

Se podría escribir también como

$1324 = 1 \times 1000 + 3 \times 100 + 2 \times 10 + 4 \times 1 %$

o más formalmente (para el nivel universitario)

$1324 = 1 \times 10^3 + 3 \times 10^2 + 2 \times 10^1 + 4 \times 10^0 %$

</v-clicks>

</div>

---
class: text-2xl
---

# Sistemas de numeración

<div class="space-y-8">

<v-clicks>

$1324 = 1 \times 10^3 + 3 \times 10^2 + 2 \times 10^1 + 4 \times 10^0 %$

Se puede ver que el 1 ocupa una posición de mayor valor que el 4.

Aunque el 4 es nominalmente mayor al 1

Por eso se dice que el sistema decimal, es posicional

Existen los sistemas posicionales, como el decimal, y no posicionales como el sistema romano

</v-clicks>

</div>

---
class: text-2xl
---

# Teorema Fundamental de la Numeración

<v-click>

Considérese un sistema de numeración posicional de base $b$, siendo $b$ números naturales que cumplan con $b>1$, entonces cualquier número natural $N$ puede expresarse de manera única en esa base decimal como

$$
  N = a_n b^n + a_{n-1} b^{n-1} + \dots + a_2 b^2 + a_1 b^1 + a_0 b^0
$$

siendo $a_n,\, a_{n-1},\, \dots ,\,  a_2,\, a_1 ,\, a_0$ alguno de los símbolos que forman la base del sistema y $n+1$ la cantidad de cifras del número $N$.

</v-click>

<v-click>

También se puede escribir de forma compacta como

$$
  N = \sum^n_{i=0} a_i b^i
$$

</v-click>

<WarningOverlay>

La posición menos significativa es $b^0$ que sin importar la base siempre es 1  

Si la base es 2 (sistema binario) las ponderaciones serían  
$1$, $2$, $4$, $8$, $16$, $32$, etc

</WarningOverlay>

---
class: text-2xl
---

# Sistema de numeración decimal

<v-click>

$$
\begin{align*}
  base &= \{0,\,1,\,2,\,3,\,4,\,5,\,6,\,7,\,8,\,9\} \\
  b &= 10
\end{align*}
$$

</v-click>
<v-click>

$$
\begin{align*}
  N = \sum^n_{i=0} a_i 10^i
\end{align*}
$$

</v-click>
<v-click>

$$
\begin{align*}
  512 &= 5 \times 10^2 + 1 \times 10^1 + 2 \times 10^0
\end{align*}
$$

</v-click>

---
class: text-2xl
---

# Sistema de numeración binario

<v-click>

$$
\begin{align*}
  base &= \{0,\,1\}\\
  b &= 2
\end{align*}
$$

</v-click>
<v-click>

$$
\begin{align*}
  N = \sum^n_{i=0} a_i 2^i
\end{align*}
$$

</v-click>
<v-click>

$$
\begin{align*}
  101_{(2)}  &\rightarrow 1 \times 2^2 + 0 \times 2^1 + 1 \times 2^0 = 5_{(10)} \\
  1010_{(2)} &\rightarrow 1 \times 2^3 + 0 \times 2^2 + 1 \times 2^1 + 0 \times 2^0 = 10_{(10)}\\
  1101_{(2)} &\rightarrow 1 \times 2^3 + 1 \times 2^2 + 0 \times 2^1 + 1 \times 2^0 = 13_{(10)}
\end{align*}
$$

</v-click>

---
class: text-2xl
---

# Sistema de numeración hexadecimal

<v-click>

$$
\begin{align*}
  base &= \{0,\,1,\,2,\,3,\,4,\,5,\,6,\,7,\,8,\,9,\,A,\,B,\,C,\,D,\,E,\,F\}\\
  b &= 16
\end{align*}
$$

</v-click>
<v-click>

$$
\begin{align*}
  N = \sum^n_{i=0} a_i 16^i
\end{align*}
$$

</v-click>
<v-click>

$$
\begin{align*}
  10_{(16)}   &\rightarrow  1  \times 16^1 + 0 \times 16^0  = 16_{(10)}
\end{align*}
$$

</v-click>

---
class: text-2xl
---

# Sistema de numeración octal

$$
\begin{align*}
  base &= \{0,\,1,\,2,\,3,\,4,\,5,\,6,\,7 \}\\
  b &= 8
\end{align*}
$$

$$
\begin{align*}
  N = \sum^n_{i=0} a_i 8^i
\end{align*}
$$

$$
\begin{align*}
  10_{(8)}   &\rightarrow  1  \times 8^1 + 0 \times 8^0  = 8_{(10)} \\
  130_{(8)}   &\rightarrow  1  \times 8^2 + 3 \times 8^1 + 0 \times 8^0  = 88_{(10)}
\end{align*}
$$

---
class: text-2xl
transition: none
---

$1000_{(10)} = \;$

$1000_{(2)} = \;$

$1000_{(8)} = \;$

$1000_{(16)} = \;$

---
class: text-2xl
---

$1000_{(10)} = 1000$

$1000_{(2)} = 8$

$1000_{(8)} = 512$

$1000_{(16)} = 4096$

---

## Números enteros y positivos con binarios de 4 bits

<style>
.tight-table td, .tight-table th {
  padding: 0 !important;
  margin: 0 !important;
}
</style>

<div class="tight-table">

|Sistema binario | Sistema decimal | Sistema hexadecimal | Sistema octal|
|----------------|-----------------|---------------------|--------------|
|0 0 0 0         |       0         |         0           |         0    |
|0 0 0 1         |       1         |         1           |         1    |
|0 0 1 0         |       2         |         2           |         2    |
|0 0 1 1         |       3         |         3           |         3    |
|0 1 0 0         |       4         |         4           |         4    |
|0 1 0 1         |       5         |         5           |         5    |
|0 1 1 0         |       6         |         6           |         6    |
|0 1 1 1         |       7         |         7           |         7    |
|1 0 0 0         |       8         |         8           |        10    |
|1 0 0 1         |       9         |         9           |        11    |
|1 0 1 0         |      10         |         A           |        12    |
|1 0 1 1         |      11         |         B           |        13    |
|1 1 0 0         |      12         |         C           |        14    |
|1 1 0 1         |      13         |         D           |        15    |
|1 1 1 0         |      14         |         E           |        16    |
|1 1 1 1         |      15         |         F           |        17    |

</div>

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-01.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-02.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-03.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-04.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-05.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-06.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-07.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-08.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga-09.svg)

---
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga.svg)

---
class: text-2xl
transition: none
---

# Conversión de decimal a binario
## Ejemplo 345

![una imagen](/img/pasaje-decimal-binario-division-larga.svg)

$345_{(10)} = 101011001_{(2)}$

<WarningOverlay>

Si el número es impar siempre la primera división da resto 1  

</WarningOverlay>

---
class: text-2xl
---

# Pasaje entre distintos sistemas

## Pasaje directo de números enteros y positivos

<div class="space-y-8">


Debido a que <span v-mark.highlight.orange>las bases del sistema binario, octal y hexadecimal </span> son
<span v-mark.highlight.orange>potencias de 2 </span> , el pasaje entre números de estos sistemas se puede hacer directamente cifra por cifra

<v-clicks>

Cada cifra del sistema hexadecimal se puede representar con 4 del sistema binario.

Cada cifra del sistema octal se puede representar con 3 del sistema binario.

</v-clicks>

</div>

<WarningOverlay>

Teniendo un número binario, para pasar a hexadesimal se toman de a 4 desde la derecha

Teniendo un número binario, para pasar a octal se toman de a 3 desde la derecha

</WarningOverlay>

---
class: text-2xl
---

## Pasaje directo de números enteros y positivos

</br>

<v-click>

## Ejemplo con 32bits

$53048=1100111100111000_{(2)}$

</br>

</v-click>


<v-click>

## Pasando a hexadecimal

$$
\begin{array}{cccc}
     1100 & 1111 & 0011 & 1000\\
       C  &  F   &  3   &   8
\end{array}
$$

</v-click>

<v-click>

## Pasando a octal

$$
\begin{array}{cccc}
1&100 & 111 & 100 & 111 & 000\\
1&4  &  7  &   4 &  7  &  0
\end{array}
$$

</v-click>

<WarningOverlay>

Como en el ejemplo del octal, si queda una cifra binaria a la izquierda sin completar las tres necesarias se debe considerar como 001 (igual para hexa completando cuatro sifras con ceros)

</WarningOverlay>

---
class: text-2xl
---

# Pasaje entre distintos sistemas
## Pasaje directo de números enteros y positivos

## Ejemplo con 32bits
$53048=1100111100111000_{(2)} = CF38_{(16)} = 147470_{(8)}$

---
class: text-2xl
---

# Operaciones aritméticas con números binarios

<v-clicks>

## Suma

$0 + 0 = 0$

$1 + 0 = 1$

$0 + 1 = 1$

$1 + 1 = 0$ (pero hay acarreo), o sea _me llevo uno_

</v-clicks>

---
class: text-2xl
layout: two-cols-header
---

# Operaciones aritméticas con números binarios

## Suma

::left::

<v-clicks>

$$
\begin{array}{rr}
      &9\\
     +&4\\
\hline
     &13 \\
\end{array}
$$

</v-clicks>

::right::

<v-clicks>

$$ {1|1,2|1,2,3}
\begin{array}{ccccc}
     & 1 & 0 & 0 & 1 \\
    +& 0 & 1 & 0 & 0 \\
\hline
     & 1 & 1 & 0 & 1 \\
\end{array}
$$

</v-clicks>

<WarningOverlay>

Si las operaciones se hacen con un número determinado de bits el resultado debe tener la misma cantidad de bits. Si hay acarreo no se debería considerar.

</WarningOverlay>

---
class: text-2xl
---

# Operaciones aritméticas con números binarios

<v-clicks>

## Producto

$0 \times 0 = 0$

$1 \times 0 = 0$

$0 \times 1 = 0$

$1 \times 1 = 1$

</v-clicks>

---
class: text-2xl
layout: two-cols-header
---

# Operaciones aritméticas con números binarios

## Producto

::left::

<v-clicks>

$$
\begin{array}{rr}
&3\\
\times&5\\
\hline
&15 \\
\end{array}
$$

</v-clicks>

::right::

<v-clicks>

$$ {1|1,3|1,4|1,5|3,4,5,6}
\begin{array}{cccccc}
&  &  & 0 & 1 & 1 \\
& \times &  & 1 & 0 & 1 \\
\hline
&       &   & 0 & 1 & 1 \\
&       & 0 & 0 & 0 &  \\
&     0 & 1 & 1 &   & \\
\hline
&   & 1 & 1 & 1 & 1
\end{array}
$$

</v-clicks>

---
class: text-2xl
layout: two-cols-header
transition: none
---

# Operaciones aritméticas con números binarios

## Producto

::left::

<v-clicks>

$$
\begin{array}{rr}
      &7\\
     \times&5\\
\hline
     &35 \\
\end{array}
$$

</v-clicks>

::right::

<v-clicks>

$$
\begin{array}{cccccc}
      &  &  & 1 & 1 & 1 \\
& \times &  & 1 & 0 & 1 \\
\hline
&       &   & 1 & 1 & 1 \\
&       & 0 & 0 & 0 &  \\
&     1 & 1 & 1 &   & \\
\hline
 1  & 0 & 0 & 0 & 1 & 1
\end{array}
$$

</v-clicks>

---
class: text-2xl
layout: two-cols-header
---

# Operaciones aritméticas con números binarios

## Producto

::left::

$$
\begin{array}{rr}
      &7\\
     \times&5\\
\hline
     &35 \\
\end{array}
$$

::right::

$$
\begin{array}{cccccc}
      &  &  & 1 & 1 & 1 \\
& \times &  & 1 & 0 & 1 \\
\hline
&       &   & 1 & 1 & 1 \\
&       & 0 & 0 & 0 &  \\
&     1 & 1 & 1 &   & \\
\hline
 1  & 0 & 0 & 0 & 1 & 1
\end{array}
$$

<div class="absolute left-20 bottom-20">

Ojo con el acarreo!!

La representación binaria será posible dependiendo de la cantidad de bits usados

</div>

---
class: text-2xl
---

# Operaciones aritméticas con números binarios

<v-clicks>

## Resta


$0 - 0 = 0$

$1 - 0 = 1$

$1 - 1 = 0$

</v-clicks>

<WarningOverlay>

</WarningOverlay>

---
class: text-2xl
layout: two-cols-header
transition: none
---

# Operaciones aritméticas con números binarios

## Resta

::left::

<v-click>

$$
\begin{array}{rr}
 &13\\
 -&4\\
\hline
  &9 \\
\end{array}
$$

</v-click>

::right::

<v-clicks>

$${0|1|1,2|1,2,3}
\begin{array}{ccccc}
 & 1 & 1 & 0 & 1 \\
-& 0 & 1 & 0 & 0 \\
\hline
 & 1 & 0 & 0 & 1 \\
\end{array}
$$

</v-clicks>

---
class: text-2xl
layout: two-cols-header
transition: none
---

# Operaciones aritméticas con números binarios

## Resta

::left::

$$
\begin{array}{rr}
 &13\\
 -&4\\
\hline
  &9 \\
\end{array}
$$

::right::

$$
\begin{array}{ccccc}
 & 1 & 1 & 0 & {\color{orange}1} \\
-& 0 & 1 & 0 & {\color{orange}0} \\
\hline
 & 1 & 0 & 0 & 1 \\
\end{array}
$$

---
class: text-2xl
layout: two-cols-header
transition: none
---

# Operaciones aritméticas con números binarios

## Resta

::left::

$$
\begin{array}{rr}
 &13\\
 -&4\\
\hline
  &9 \\
\end{array}
$$

::right::

$$
\begin{array}{ccccc}
 & 1 & 1 & {\color{orange}0} & 1 \\
-& 0 & 1 & {\color{orange}0} & 0 \\
\hline
 & 1 & 0 & 0 & 1 \\
\end{array}
$$

---
class: text-2xl
layout: two-cols-header
transition: none
---

# Operaciones aritméticas con números binarios

## Resta

::left::

$$
\begin{array}{rr}
 &13\\
 -&4\\
\hline
  &9 \\
\end{array}
$$

::right::

$$
\begin{array}{ccccc}
 & 1 & {\color{orange}1} & 0 & 1 \\
-& 0 & {\color{orange}1} & 0 & 0 \\
\hline
 & 1 & 0 & 0 & 1 \\
\end{array}
$$

---
class: text-2xl
layout: two-cols-header
transition: none
---

# Operaciones aritméticas con números binarios

## Resta

::left::

$$
\begin{array}{rr}
 &13\\
 -&4\\
\hline
  &9 \\
\end{array}
$$

::right::

$$
\begin{array}{ccccc}
 & {\color{orange}1} & 1 & 0 & 1 \\
-& {\color{orange}0} & 1 & 0 & 0 \\
\hline
 & 1 & 0 & 0 & 1 \\
\end{array}
$$

---
class: text-2xl
layout: two-cols-header
---

# Operaciones aritméticas con números binarios

## Resta

::left::

$$
\begin{array}{rr}
 &13\\
 -&4\\
\hline
  &9 \\
\end{array}
$$

::right::

$$
\begin{array}{ccccc}
 & 1 & 1 & 0 & 1 \\
-& 0 & 1 & 0 & 0 \\
\hline
 & 1 & 0 & 0 & 1 \\
\end{array}
$$


---
class: text-2xl
---

# Operaciones aritméticas con números binarios

## Resta

<div class="space-y-8">

<v-clicks>

$0 - 1 = ?$

Problema: necesidad de representar números negativos

Soluciones: ?

</v-clicks>

</div>

---
class: text-2xl
---

# Convenio de signo y magnitud

<div class="space-y-8">

<v-clicks>

## Ejemplo con 8 bits

Usando el bit más significativo como bit de signo

+13 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{1} \\
 \hline
\end{array}
$$

-13 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{1} \\
 \hline
\end{array}
$$

</v-clicks>

</div>

---
class: text-2xl
transition: none
---

# Convenio de signo y magnitud

<div class="space-y-8">

<v-clicks>

## Ejemplo con 8 bits

El problema

+0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$

-0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$

</v-clicks>

</div>

<WarningOverlay>

El problema radica en que hay dos combinaciones de bits que significan un mismo número en decimal...  
Dicho más o menos formalmente: es un problema porque no hay una correspondencia biunívoca entre patrones y valores  
Esto hace más complicada la circuitería cuando se usan números con signo

</WarningOverlay>

---
class: text-2xl
---

# Convenio de signo y magnitud

<div class="space-y-8">

## Ejemplo con 8 bits

El problema <span v-mark.highlight.orange> doble representación del cero </span>

+0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$

-0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$

</div>

<WarningOverlay>

El problema radica en que hay dos combinaciones de bits que significan un mismo número en decimal...  
Dicho más o menos formalmente: es un problema porque no hay una correspondencia biunívoca entre patrones y valores  
Esto hace más complicada la circuitería cuando se usan números con signo

</WarningOverlay>

---
class: text-2xl
---

# Convenio de complemento a uno

<div class="space-y-8">

<v-clicks>

## Ejemplo con 8 bits

Para números negativos se complementa todo

+13 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{1} \\
 \hline
\end{array}
$$

-13 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{0} \\
 \hline
\end{array}
$$

</v-clicks>

</div>

---
class: text-2xl
---

# Convenio de complemento a uno

<div class="space-y-8">

<v-clicks>

## Ejemplo con 8 bits

El problema

+0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$

-0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} \\
 \hline
\end{array}
$$


Nuevamente, doble representación del 0

</v-clicks>

</div>


---
class: text-2xl
---

# Convenio de complemento a dos

<div class="space-y-8">

<v-clicks>

## Ejemplo con 8 bits

Para números negativos se complementa todo y luego se incrementa en 1

+13 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{1} \\
 \hline
\end{array}
$$

-13 en binario


$$ {none|1|1,2|1,2,3}
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{0} \\
            &            &            &            &            &            &            & \texttt{1} \\
 \hline\hline
 \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{1} \\
 \hline
\end{array}
$$

</v-clicks>

</div>

---
class: text-2xl
---

# Convenio de complemento a dos

<div class="space-y-8">

<v-clicks>

## Ejemplo con 8 bits

El problema, ahora resuelto

+0 en binario

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$

-0 en binario

$$ {none|1|1,2|1,2,3}
\begin{array}{|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} \\
            &            &            &            &            &            &            & \texttt{1} \\
 \hline
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 \hline
\end{array}
$$


</v-clicks>

</div>

---
class: text-2xl
---

$$
\begin{array}{|r|c|c|c|c|c|c|c|c|}
 \hline
 N &\mathtt{b_7} & \mathtt{b_6} & \mathtt{b_5} & \mathtt{b_4} & \mathtt{b_3} & \mathtt{b_2} & \mathtt{b_1} & \mathtt{b_0} \\
 \hline
 0&\texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 1&\texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} \\
 2&\texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{0} \\
 &\texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} \\
 126&\texttt{0} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{0} \\
 127&\texttt{0} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} \\
 -128&\texttt{1} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} \\
 -127&\texttt{1} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} \\
 &\texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} & \texttt{.} \\
 -3&\texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{0} & \texttt{1} \\
 -2&\texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{0} \\
 -1&\texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} & \texttt{1} \\
 \hline
\end{array}
$$

---
class: text-2xl
layout: two-cols-header
---

# Operaciones de adición y de sustracción utilizando el convenio de complemento a dos

::left::

<v-click>
$$
\begin{array}{rr}
  &4\\
  -&13\\
\hline
  &\phantom{-9} \\
\end{array}
$$

</v-click>

::right::

<v-click>

$$
\begin{array}{ccccccccc}
  & 0 & 0 & 0 & 0 & 0 & 1 & 0 & 0 \\
{\text{\textbf{\color{red}+}}}& 1 & 1 & 1 & 1 & 0 & 0 & 1 & 1 \\
\hline
  & 1 & 1 & 1 & 1 & 0 & 1 & 1 & 1 \\
\end{array}
$$

</v-click>

::bottom::

<div class="space-y-8">

<v-clicks>

Qué número es?

Si el bit más significativo es 1, sabemos que es un número negativo

Hay que _deshacer_ el complemento a 2 y se obtiene el valor absoluto del número negativo

</v-clicks>

</div>

<WarningOverlay>

Una vez que se pasa un número a _complemento a dos_ se suma directamente

Sería el equivalente a hacer
$$
\begin{array}{rr}
  &4\phantom{)}\\
 +&(-13)\\
\hline
  &-9\phantom{)} \\
\end{array}
$$

</WarningOverlay>

---
class: text-2xl
---

# Operaciones de adición y de sustracción utilizando el convenio de complemento a dos

$$ {1,2|1,2,3|1,2,3,4|1,2,3,4,5|all}
\begin{array}{ccccccccc}
  & 0 & 0 & 0 & 0 & 0 & 1 & 0 & 0 \\
 +& 1 & 1 & 1 & 1 & 0 & 0 & 1 & 1 \\
\hline
  & 1 & 1 & 1 & 1 & 0 & 1 & 1 & 1 \\
 -&   &   &   &   &   &   &   & 1 \\
\hline
  & 1 & 1 & 1 & 1 & 0 & 1 & 1 & 0 \\
\text{C1} & 0 & 0 & 0 & 0 & \color{red}{1} & \color{red}{0} & \color{red}{0} & \color{red}{1}
\end{array}
$$

---
class: text-2xl
---

# Operaciones de adición y de sustracción utilizando el convenio de complemento a dos

$$
\begin{array}{rr}
  &100\\
 -&36\\
\hline
  &64 \\
\end{array}
$$

 Primero: $-36$ a binario usando complemento a 2

$$
\begin{array}{ccccccccc}
  & 0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 \\
 \text{C1} & 1 & 1 & 0 & 1 & 1 & 0 & 1 & 1 \\
 + &   &   &   &   &   &   &   & 1 \\
\hline
 & 1 & 1 & 0 & 1 & 1 & 1 & 0 & 0
\end{array}
$$


---
class: text-2xl
---

# Operaciones de adición y de sustracción utilizando el convenio de complemento a dos


$$
\begin{array}{ccccccccc}
  & 0 & 1 & 1 & 0 & 0 & 1 & 0 & 0 \\
 +& 1 & 1 & 0 & 1 & 1 & 1 & 0 & 0 \\
\hline
  \mathbf{1} & 0 & 1 & 0 & 0 & 0 & 0 & 0 & 0 \\
\end{array}
$$

El acarreo se ignora

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

Para pasar un número fraccionario a binario, se van tomando las partes a la izquierda de la coma decimal como cifras binarias y se multiplica por 2 la parte a la derecha de la coma decimal.

Se repite el proceso continuamente hasta obtener cero en la parte decimal o llenar los bits requeridos

</div>

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

<v-clicks>


## Ejemplo 0.6875

$0.6875 \times 2 = {\color{red}1}.375$

$\phantom{5}0.375 \times 2 = {\color{red}0}.75$

$\phantom{55}0.75 \times 2 = {\color{red}1}.5$

$\phantom{555}0.5 \times 2 = {\color{red}1}.0$


$$
\begin{array}{|c|c|c|c|c|c|c|c|}
\hline
  0 & 0 & 0 & 0 & \color{red}{1} & \color{red}{0} & \color{red}{1} & \color{red}{1} \\
\hline
\end{array}
$$

</v-clicks>

</div>

<WarningOverlay>

Al comenzar el proceso de multiplicar por 2 los _bits_ que se van obteniendo se colocan en orden desde la coma decimal hacia la derecha

</WarningOverlay>

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

Supongamos que es un $7.6875$

La parte entera $(7)$ se pasa a binario como $111$

Entonces el número completo usando 4 bits para la parte entera y 4 bits para la parte fraccionaria queda

$$
\begin{array}{|c|c|c|c|c|c|c|c|}
\hline
  0 & 1 & 1 & 1 & \color{red}{1} & \color{red}{0} & \color{red}{1} & \color{red}{1} \\
\hline
\end{array}
$$

</div>

---
class: text-2xl
---

# Representación de números fraccionales

Para volver un número fraccionario en base 2 a un número fraccionario en base decimal...

$$
\begin{equation*}
  .M = b_{-1} 2^{-1} + b_{-2} 2^{-2} + b_{-3} 2^{-3} + \dots + b_{-m} 2^{-m}
\end{equation*}
$$

donde $m$ es la cantidad de bits que tenemos para representar la parte fraccional.

---
class: text-2xl
---

# Representación de números fraccionales

 Ejemplo: volviendo el $.1011$ a base decimal

$$
\begin{align*}
  1 \times 2^{-1} + 0 \times 2^{-2} + 1 \times 2^{-3} + 1 \times 2^{-4} &= \\
  1 \times \frac{1}{2} + 0 \times \frac{1}{4} + 1 \times \frac{1}{8} + 1 \times \frac{1}{16} &= \\
  \frac{1}{2} + \frac{1}{8} + \frac{1}{16} &= \frac{11}{16} = 0.6875
\end{align*}
$$

---
class: text-2xl
layout: two-cols-header
---

# Representación de números fraccionales

<v-click>
$$
\Large{42.195}
$$
</v-click>

::left::

<v-click>

&emsp;&emsp;&emsp;Tomando la parte entera
![una imagen](/img/pasaje-decimal-binario-division-corta-marathon.svg)
$$
101010
$$

</v-click>

::right::

<v-click>

&emsp;&emsp;&emsp;&emsp; y la parte fraccionaria

<br>

$$
\begin{align*}
0.195 \times 2 &= {\color{red}0}.39 \\
0.39 \times 2 &= {\color{red}0}.78 \\
0.78 \times 2 &= {\color{red}1}.56 \\
0.56 \times 2 &= {\color{red}1}.12
\end{align*}
$$


$$
\phantom{5}\\

.0011
$$
</v-click>

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

<v-clicks>

$$
101010.0011
$$

La parte entera:

$1 \times 2^5 + 0 \times 2^4 + 1 \times 2^3 + 0 \times 2^2 +  1 \times 2^1 + 0 \times 2^0 = 42$

La parte fraccionaria:

$$
\begin{align*}
0 \times 2^{-1} + 0 \times 2^{-2} + 1 \times 2^{-3} + 1 \times 2^{-4} &= \\
0 \times 1/2 + 0 \times 1/4 + 1 \times 1/8 + 1 \times 1/16 &= \\
0 \times 0.5 + 0 \times 0.25 + 1 \times 0.125 + 1 \times 0.0625 &= 0.1875
\end{align*}
$$

</v-clicks>

</div>

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

<v-clicks>

$$
\begin{align*}
  42.195 &\xrightarrow[]{\text{a binario}} 101010.0011 \\[10pt]
  101010.0011 &\xrightarrow[]{\text{a decimal}} 42.1875
\end{align*}
$$


Que pasó?

Respuesta corta:

$0.195$ tiene una expansión binaria infinita

</v-clicks>

</div>

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

<v-clicks>

En binario solo se pueden representar números fraccionarios de manera exacta si el denominador es potencia de 2

Por ejemplo: $0.625$ ($10/16$)

$$
  \begin{align}
0.625 \times 2 &= {\color{red}1}.25 \\
0.25 \times 2 &= {\color{red}0}.50 \\
0.50 \times 2 &= {\color{red}1}.00
  \end{align}
$$

$0.625 \xrightarrow[]{\text{a binario}} 0.101$

</v-clicks>

</div>

---
class: text-2xl
---

# Representación de números fraccionales

<div class="space-y-8">

<v-clicks>


 Ejemplo: $0.1$ ($1/10$)

$$
  \begin{align}
0.1 \times 2 &= {\color{red}0}.2 \\
0.2 \times 2 &= {\color{red}0}.4 \\
0.4 \times 2 &= {\color{red}0}.8 \\
0.8 \times 2 &= {\color{red}1}.6 \\
0.6 \times 2 &= {\color{red}1}.2 \\
0.2 \times 2 &= {\color{red}0}.4
  \end{align}
$$

$0.1 \xrightarrow[]{\text{a binario}} 0.0\overline{0011}$

</v-clicks>

</div>


---
class: text-2xl
---

# Errores en la representación

<div class="space-y-8">

<v-clicks>


La representación binaria de un número fraccionario siempre estará limitada por el número de bits disponibles...

...lo que limita también la precisión

 Ejemplo: si tenemos 4 bits para para representar un número fraccionario, el último bit puede estar _prendido_ o _apagado_, y eso significa agregar o no un 1/16 al número en base decimal

</v-clicks>

</div>

---
class: text-2xl
---

# Errores en la representación

con 4 bits

$$
\begin{array}{lllllllll}
.1111_{(2)} = & \cfrac{1}{2} &+ & \cfrac{1}{4} &+ & \cfrac{1}{8} &+ &\cfrac{1}{16} &= 0.9375_{(10)} \\
.1110_{(2)} = & \cfrac{1}{2} &+ & \cfrac{1}{4} &+ & \cfrac{1}{8} & & &= 0.875_{(10)}
\end{array}
$$

Entonces, todos los números entre $0.875$ y $0.9375$ tienen la misma representación para 4 bits

---
class: text-2xl
---

# Errores en la representación

El error absoluto $e_A$ será constante, igual a la mitad de la mínima representación hacia cada lado

$e_A = \pm \frac{1}{2} LSB = \pm \frac{1}{2} 2^{-4} = \pm 2^{-5}$

---
class: text-2xl
---

# Errores en la representación

El error relativo $e_r$ será el porcentaje del error absoluto respecto del valor representado.


$e_r \; [\%] = \cfrac{e_A}{N} \times 100$

---
class: text-2xl
---

# Notación punto fijo y punto flotante
## Punto fijo

<div class="space-y-8">

<v-clicks>


Las computadoras, y en particular los espacios en ellas destinados a almacenar números, tienen una capacidad finita.

Para almacenar un número real una opción es destinar una cantidad **fija** de bits para la parte fraccionaria y otra parte fija para la parte entera. Ej.: 12+4


$$
~\\
\begin{array}{|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|}
 \hline
 \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{0} & \texttt{1} & \texttt{0} & \texttt{1} & \texttt{0} & \texttt{1} & \texttt{0} & {\color{red}\texttt{0}} & {\color{red}\texttt{0}} & {\color{red}\texttt{1}} & {\color{red}\texttt{1}} \\
 \hline
\end{array}
$$

</v-clicks>

</div>

---



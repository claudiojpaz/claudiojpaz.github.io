---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 10
titleTemplate: '%s'
info: |
    Unidad 10  
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

# Unidad 10


# Uso del lenguaje C en aplicaciones de bajo nivel

</div>

<QrOverlay title=''>

<img src="/img/info1-u10.png" class="mx-auto w-3/4" />

</QrOverlay>

---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1
char b = 42;  // 0 0 1 0 1 0 1 0
```

---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:32]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:32]
```

---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:30]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:30]
```

---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:28]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:28]
```

---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:26]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:26]
```
---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:24]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:24]
```
---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:22]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:22]
```
---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:20]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:20]
```
---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1 [!code char:18]
char b = 42;  // 0 0 1 0 1 0 1 0 [!code char:18]
```
---
class: text-2xl
transition: none
---

# Operadores a nivel de bit


Como se vio en la primera unidad las computadoras representan toda la informacióṇ interna usando _bits_.


Los bits solo pueden tener dos valores, 0 y 1.


Los operadores a nivel de bit realizan las operaciones _bit a bit_ entre sus operandos


```c
char a = 77;  // 0 1 0 0 1 1 0 1
char b = 42;  // 0 0 1 0 1 0 1 0
```

---
class: text-2xl
---

# Operadores a nivel de bit. Operadores Lógicos

## Tablas de verdad: AND

<v-clicks>

$$
    \begin{array}{cc|c}
    \mathtt{a_i} & \mathtt{b_i} & \mathtt{\&} \\ \hline
    0 & 0 & 0 \\
    0 & 1 & 0 \\
    1 & 0 & 0 \\
    1 & 1 & 1
    \end{array}
$$

```c
a = 77;         // 0 1 0 0 1 1 0 1
b = 42;         // 0 0 1 0 1 0 1 0
c = a & b;      // 0 0 0 0 1 0 0 0
printf("%d\n", c);
```

```
8
```

</v-clicks>

---
class: text-2xl
---

# Operadores a nivel de bit. Operadores Lógicos
## Tablas de verdad: OR

<v-clicks>

$$
    \begin{array}{cc|c}
    \mathtt{a_i} & \mathtt{b_i} & \mathtt{|} \\ \hline
    0 & 0 & 0 \\
    0 & 1 & 1 \\
    1 & 0 & 1 \\
    1 & 1 & 1
    \end{array}
$$

```c
a = 77;         // 0 1 0 0 1 1 0 1
b = 42;         // 0 0 1 0 1 0 1 0
c = a | b;      // 0 1 1 0 1 1 1 1
printf("%d\n", c);
```

```
111
```

</v-clicks>

---
class: text-2xl
---

# Operadores a nivel de bit. Operadores Lógicos
## Tablas de verdad: OR exclusiva (XOR)

<v-clicks>

$$
    \begin{array}{cc|c}
    \mathtt{a_i} & \mathtt{b_i} & \mathtt{\land} \\ \hline
    0 & 0 & 0 \\
    0 & 1 & 1 \\
    1 & 0 & 1 \\
    1 & 1 & 0
    \end{array}
$$

```c
a = 77;         // 0 1 0 0 1 1 0 1
b = 42;         // 0 0 1 0 1 0 1 0
c = a ^ b;      // 0 1 1 0 0 1 1 1
printf("%d\n", c);
```

```
103
```

</v-clicks>

---
class: text-2xl
---

# Operadores a nivel de bit. Operadores Lógicos
## Tablas de verdad: Complemento

<v-clicks>

$$
    \begin{array}{c|c}
    \mathtt{a_i} & \sim \\ \hline
    0 & 1 \\
    1 & 0
    \end{array}
$$

```c
a = 77;         // 0 1 0 0 1 1 0 1
c = ~a;         // 1 0 1 1 0 0 1 0
printf("%d\n", c);
```

```
-78
```

</v-clicks>

---
class: text-2xl
---

# Operadores de desplazamiento

<v-clicks>

Los operadores `<<` y `>>` son operadores que generan un desplazamiento sobre los bits de un `int` o un `char`, con o sin signo.


El operando de la izq. es el que se ve afectado por el corrimiento.

El de la derecha indica cuantos bit de corrimiento.

```c
a = 5;         // 0 0 0 0 0 1 0 1
c = a<<1;      // 0 0 0 0 1 0 1 0
printf("%d\n", c);
```

```
10
```

</v-clicks>

---
class: text-2xl
---

# Operadores de desplazamiento

<v-clicks>

Cuando se usa el operador `<<` los bits se corren a la izquierda, agregando 0 (ceros) a la derecha.


Cuando se usa el operador `>>` los bits se corren a la derecha, agregando 0 (ceros) a la izquierda.

En caso de ser un número negativo pueden pasar dos cosas...Se agregan unos (el número sigue siendo negativo) o se agregan ceros (cambia el signo). Depende de la arquitectura.


</v-clicks>

---
class: text-2xl
---

# Operadores a nivel de bit. Asignación

<table class="text-2xl">
  <thead>
    <tr>
      <th>Operador</th>
      <th>Significado</th>
    </tr>
  </thead>
  <tbody>
    <tr><td><code>&amp;=</code></td><td>AND y asignación</td></tr>
    <tr><td><code>|=</code></td><td>OR y asignación</td></tr>
    <tr><td><code>^=</code></td><td>XOR y asignación</td></tr>
    <tr><td><code>&lt;&lt;=</code></td><td>Desplazamiento a izquierda y asignación</td></tr>
    <tr><td><code>&gt;&gt;=</code></td><td>Desplazamiento a derecha y asignación</td></tr>
  </tbody>
</table>

---
class: text-2xl
---

# Operadores. Precedencia

---

$$
    \begin{array}{llll}
    \textsf{Operador}                                           &   &  & \textsf{Asociatividad} \\\hline
    () \quad [] \quad \dot \quad\quad \texttt{->}                    &   &  & \textsf{Izq. a Der.} \\
    + \quad - \quad (\text{tipo}) \quad ++ \quad -- \quad ! \quad \sim \quad \& \quad *    &   &  & \textsf{Der. a Izq.} \\
    * \quad / \quad \%                                          &   &  & \textsf{Izq. a Der.} \\
    + \quad -                                                   &   &  & \textsf{Izq. a Der.} \\
    << \quad >>                                                 &   &  & \textsf{Izq. a Der.} \\
    < \quad <= \quad > \quad >=                                 &   &  & \textsf{Izq. a Der.} \\
    == \quad !=                                                 &   &  & \textsf{Izq. a Der.} \\
    \&                                                        &   &  & \textsf{Izq. a Der.} \\
    \land                                                        &   &  & \textsf{Izq. a Der.} \\
    |                                                        &   &  & \textsf{Izq. a Der.} \\
    \&\&                                                        &   &  & \textsf{Izq. a Der.} \\
    ||                                                          &   &  & \textsf{Izq. a Der.} \\
    ?:                                                          &   &  & \textsf{Der. a Izq.} \\
    = \quad += \quad -=  \quad /= \quad *= \quad \&= \quad |= \quad \land= \quad <<= \quad >>= \quad \%=            &   &  & \textsf{Der. a Izq.} \\
    ,                                                           &   &  & \textsf{Izq. a Der.} \\
    \end{array}
$$

---
class: text-2xl
---

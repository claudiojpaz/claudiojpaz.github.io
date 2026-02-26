---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Unidad 1
titleTemplate: '%s'
info: |
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
image: /img/cover1.jpg
---

<div class="absolute left-20 bottom-20">

# Unidad 1

## Estructura de una computadora

</div>

---
transition: none
---

![Computadora Moderna - Memoria](/img/computer-system-2011-pag8.svg){class="mx-auto"}

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.44

</div>

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Memoria principal

</div>

![Computadora Moderna - Memoria](/img/computer-system-2011-pag8.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Memoria principal

</div>

![Computadora Moderna - Memoria](/img/computer-system-2011-pag8-memory.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Unidad Central de Procesamiento

</div>

![Computadora Moderna - CPU](/img/computer-system-2011-pag8.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Unidad Central de Procesamiento

</div>

![Computadora Moderna - CPU](/img/computer-system-2011-pag8-cpu.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Dispositivos de Entrada/Salida

</div>

![Computadora Moderna - IO](/img/computer-system-2011-pag8.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Dispositivos de Entrada/Salida

</div>

![Computadora Moderna - IO](/img/computer-system-2011-pag8-io.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Buses

</div>

![Computadora Moderna - Buses](/img/computer-system-2011-pag8.svg){class="mx-auto"}

---
transition: none
---

<div class="absolute top-2 left-50 w-full text-gl">

# Buses

</div>

![Computadora Moderna - Buses](/img/computer-system-2011-pag8-bus.svg){class="mx-auto"}

---

![Computadora Moderna - Memoria](/img/computer-system-2011-pag8.svg){class="mx-auto"}

---
class: text-xl
---

# Unidades fundamentales

<style>
p {
  margin: 2em 0;
}
</style>


<span v-mark.highlight.orange>  **bit**  </span>  
Es el elemento más pequeño que reconoce la computadora. Tiene solo dos valores posibles, 0 y 1.

<span v-mark.highlight.orange>  **byte**  </span>  
Está formado por 8 bits. Todas las combinaciones posibles de 8 bits prendidos y apagados son 256. Si no se considera el signo todos los bits _apagados_ forman un 0 y todos los bits _prendidos_ forman un 255

<span v-mark.highlight.orange>  **palabra** o **word** </span>  
Está formada por 16, 32 o 64 bits (esto depende del sistema).
La palabra es la cantidad de bits que la CPU puede procesar, transmitir o almacenar simultáneamente, siendo común 32 o 64 bits.


<ExamOverlay>

El elemento más pequeño que reconoce la computadora es el ______ y tiene solo dos valores posibles, 0 y 1.

<v-click>

Respuesta: bit

</v-click>

</ExamOverlay>

---

# Múltiplos

<v-click>

<!--<div style="font-size: 70%; position: relative; left: -50px">-->
<div style="position: relative; left: -50px">
<p>

$$
\begin{array}{llll}
    \textbf{Unidad} & \textbf{Símbolo} & \textbf{Valor en Bytes} & \textbf{Expresión Matemática} \\
    \hline
    \text{Kilobyte} & \text{kB} & 1\,000 & 10^3 \\
    \text{Megabyte} & \text{MB} & 1\,000\,000 & 10^6 \\
    \text{Gigabyte} & \text{GB} & 1\,000\,000\,000 & 10^9 \\
    \text{Terabyte} & \text{TB} & 1\,000\,000\,000\,000 & 10^{12} \\
\end{array}
$$

</p>
</div>

</v-click>

<br>

<v-click>

<div style="position: relative; left: -50px">
<p>

$$
\begin{array}{llll}
    \textbf{Unidad} & \textbf{Símbolo} & \textbf{Valor en Bytes} & \textbf{Expresión Matemática} \\
    \hline
    \text{Kibibyte} & \text{KiB} & 1\,024 & 2^{10} \\
    \text{Mebibyte} & \text{MiB} & 1\,048\,576 & 2^{20} \\
    \text{Gibibyte} & \text{GiB} & 1\,073\,741\,824 & 2^{30} \\
    \text{Tebibyte} & \text{TiB} & 1\,099\,511\,627\,776 & 2^{40} \\
\end{array}
$$

</p>
</div>

</v-click>

---
transition: fade
---
<div class="absolute top-2 left-50 w-full text-gl">

# Memoria principal

</div>

---

<div class="absolute top-2 left-50 w-full text-gl">

# Memoria principal

</div>

![Computadora Moderna - Memoria](/img/computer-system-2011-pag8-memory.svg){class="mx-auto"}

---
class: text-2xl
---

# Memoria Principal

<br>

<div class="space-y-8">

<v-clicks>

Dispositivo que retiene o almacena datos informáticos durante algún periodo de tiempo.

Retiene datos provenientes de los dispositivos de entrada que serán utilizados por programas.

Retiene datos procesados hasta que puedan ser puestos en los dispositivos de salida.

Almacena los programas que están en ejecución.

</v-clicks>

</div>

---
transition: fade
---

# Registros

---
transition: none
---

# Registros

![Computadora Moderna - Registros ](/img/computer-system-2011-pag8.svg){class="mx-auto"}

---
transition: none
---

# Registros

![Computadora Moderna - Registros](/img/computer-system-2011-pag8-register.svg){class="mx-auto"}

---
class: text-2xl
---

# Registros

<br>

<div class="space-y-8">

<v-clicks>

Son pequeños espacios de almacenamiento del tamaño de una _palabra_

Cada registro tiene su propio nombre.

La colección de todos los registros se conoce como _Archivo de registros_

Dependiendo de la arquitectura, cuantos registros tendrá el CPU.

</v-clicks>

</div>

---
class: text-2xl
---

# Registros Vs. Memoria

<br>

<div class="space-y-8">

<v-clicks>

Los registros están dentro del _chip_ del procesador.

La memoria principal está en peines conectada al procesador mediante _buses_.

El acceso a memoria principal es aproximadamente 100 veces más lenta.

El tamaño del archivo de registros es muy pequeño, típicamente del orden del kB.

</v-clicks>

</div>

---
transition: fade
---

<div class="absolute top-2 left-20 w-full text-gl">

# Memoria caché

</div>

---

<div class="absolute top-2 left-20 w-full text-gl">

# Memoria caché

</div>

![Computadora Moderna - Registros](/img/computer-system-2011-pag45_.svg){class="mx-auto"}


<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.49

</div>

---
class: text-2xl
---

# Memoria caché

<br>

<div class="space-y-8">

<v-clicks>

Es un espacio de almacenamiento dentro del _chip_ donde está el procesador central.

Es más lento de accesar que los registros, pero mucho más rápido que la memoria RAM.

La idea es que en la memoria _caché_ se almacenen datos que el procesador _podría_ necesitar.

</v-clicks>

</div>

---
class: text-2xl
---

# Memoria caché

<br>

<div class="space-y-8">

<v-clicks>


Las computadoras modernas tienen 3 niveles de caché: L1, L2 y L3

La L1 tiene una capacidad del orden de los cientos de kB.  
(Ej. en mi laptop L1i 128kB, L1d 128kB)

La L2 tiene una capacidad del orden de los 100kB hasta los MB.  
(Ej. en mi laptop L2 1MB)

La caché L3 tiene una capacidad del orden de los MB.  
(Ej. en mi laptop L3 6MB)

</v-clicks>

</div>

<BashOverlay>

En una consola se puede ver información de la chaché y la arquitectura del microprocesador con el comando

<div class="big-code">

```bash
$ lscpu
```

</div>

(sin el signo peso)

</BashOverlay>

---

![Computadora Moderna - Registros](/img/computer-system-2015-pag61.svg){class="mx-auto"}

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.61

</div>

---

<div class="absolute top-2 left-10 w-full">

# Jerarquía de memoria.

</div>


![Computadora Moderna - Registros](/img/computer-system-2011-pag50.svg){class="mx-auto"}

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.50

</div>

<ExamOverlay>

Ordene de mayor a menor respecto al costo por unidad de almacenamiento: L1, Registros, L2, Disco, Memoria principal

<v-click>

Respuesta: Registros, L1, L2, Memoria principal, Disco

</v-click>


</ExamOverlay>


---

<div class="absolute top-2 left-10 w-full">

# Unidad Central de Procesamiento o CPU

</div>

![una imagen](/img/computer-system-2011-pag45-clean.svg)

<!--
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.49 ]]
-->

---
class: text-2xl
---

# Unidad Central de Procesamiento o CPU

<br>

<div class="space-y-8">

<v-clicks>

Ejecuta las instrucciones almacenadas en la memoria.

Un registro llamado PC (Program Counter) apunta a la dirección donde está almacenada la instrucción que debe ejecutarse a continuación.

El procesador lee la instrucción de la dirección de memoria _apuntada_ por el PC...

...interpreta la instrucción, realiza alguna operación sencilla indicada por la instrucción...

... y actualiza el PC

</v-clicks>

</div>

---
class: text-2xl
---

# Unidad Central de Procesamiento o CPU

<br>

<div class="space-y-8">

<v-clicks>

Las operaciones que se pueden realizar son reducidas en número y simples en complejidad.

Todas a cargo de la _Unidad Aritmética/Lógica_ o por sus siglas en inglés (ALU).

Alguna operaciones podrían ser: carga (_load_), almacenamiento (_store_), operación (_operate_), salto (_jump_), etc.

Todas las operaciones van de la memoria a los registros, la ALU y de vuelta, todo el tiempo.

</v-clicks>

</div>

<ExamOverlay>

La ________ es un circuito digital que se encarga de realizar las operaciones en el CPU.

<v-click>

Respuesta: ALU

</v-click>

</ExamOverlay>

---
class: text-2xl
---

# Sistemas Operativos

<div class="space-y-8">

<v-click>

Los programas no reciben directamente la información ingresada desde el teclado ni de la memoria, ni escriben la memoria o imprimen en pantalla...

</v-click>

<v-click>

...por el contrario, utilizan _servicios_ provistos por el _Sistema Operativo_

</v-click>

<v-click>

![una imagen](/img/computer-system-2015-pag51-so.svg)

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.51

</div>

</v-click>

</div>

---
class: text-2xl
---

# Sistemas Operativos

<div class="space-y-8">

<v-clicks>

El SO tiene dos objetivos principales:

Proteger el _hardware_ de uso indebido por parte de las aplicaciones

Proveer un mecanismo unificado para manipular diferentes tipos de _hardware_

</v-clicks>

</div>

---
class: text-2xl
---

# Sistemas Operativos

Para lograr estos objetivos el SO utiliza tres abstracciones: _procesos_, _memoria virtual_ y _archivos_

![una imagen](/img/computer-system-2015-pag51-so-tools.svg)

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.51

</div>

---
class: text-2xl
transition: none
---

# Sistemas Operativos

---
class: text-2xl
---

# Sistemas Operativos

<div class="space-y-8">

Un <span v-mark.highlight.orange>proceso</span> es la abstracción que hace el sistema operativo de un programa corriendo proveyendo la ilusión de que es el único


<v-clicks>

Muchos procesos pueden correr _concurrentemente_ en el mismo sistema...

...entendiéndose como concurrentes a los procesos que pueden ser interrumpidos momentáneamente por otros.

Normalmente, hay más procesos que núcleos.

</v-clicks>

</div>

---
transition: fade
---

# Sistemas Operativos

---

# Sistemas Operativos


![una imagen](/img/process.svg)

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.53

</div>

---
class: text-2xl
transition: none
---

# Sistemas Operativos

---
class: text-2xl
---

# Sistemas Operativos

<div class="space-y-8">

La <span v-mark.highlight.orange>memoria virtual</span> es una abstracción que provee a cada proceso la ilusión que tiene uso exclusivo de la memoria principal, conocida como _espacio virtual de memoria_

<v-clicks>

El espacio de memoria virtual tiene áreas bien definidas cada una con su propósito específico

</v-clicks>

</div>

---
transition: fade
---

# Sistemas Operativos

---

# Sistemas Operativos

![una imagen](/img/virtual-memory.svg)

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2016, Cap.1, pág.54

</div>

---
class: text-2xl
transition: none
---

# Sistemas Operativos

---
class: text-2xl
---

# Sistemas Operativos

<div class="space-y-8">

Todos los dispositivos de entrada/salida son modelados como <span v-mark.highlight.orange> archivos </span>

<v-clicks>

Un archivo es simplemente una secuencia de bits.

Desde el teclado, disco, pantalla, cámaras hasta las redes son modeladas como archivos.

Para realizar accesos a los distintos dispositivos se utilizan herramientas de acceso a archivos (apertura, lectura, escritura).

</v-clicks>

</div>

---
class: text-2xl
---

# Sistemas Operativos

<div class="space-y-8">

<v-clicks>

Windows

macOS (y derivados)

GNU/Linux (y derivados)

Android (derivado de Linux)

otros

</v-clicks>

</div>

---
class: text-2xl
---

# GNU

<div style="position: absolute; left: 600px; top: 200px; height: 200px; width: 250px; padding: 1em;">
<img src="/img/Heckert_GNU_white.svg" height="220">
<figcaption>GNU's Not Unix</figcaption>
</div>

<div class="space-y-8">

<v-clicks>

No solo un sistema operativo, es también una colección de programas

gcc (GNU Compiler Collection)

glibc

bash

GNU Core Utilities (cat, ls, rm, etc.)

GNOME desktop environment

etc.

</v-clicks>

</div>

---
class: text-2xl
---

# Linux

<div style="position: absolute; left: 650px; top: 220px; height: 200px; width: 250px; padding: 1em;">
<img src="/img/Tux.svg" height="220">
</div>

<div class="space-y-8">

<v-clicks>

Iniciado en 1991 por Linus Torvalds (~ 10000 líneas de código)

Escrito completamente en C (y algo de ASM)

Hoy tiene más de 30 millones de líneas de código

y miles de desarrolladores por todo el mundo

es el proyecto de sofware más grande de la historia

</v-clicks>

</div>

---
class: text-2xl
---

# Bibliografía

**Computer Systems** A Programmer’s Perspective

Randal E. Bryant and David R. O’Hallaron

_2016_ Third edition.

Cap. 1

---


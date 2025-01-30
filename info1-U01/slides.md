class: center, middle, inverse
<title>Unidad 1</title>

.title[Informática I]

Claudio Paz

<!-- .email[claudiojpaz@gmail.com] -->

Marzo 2024

![:scale 50%](assets/this.png)

<div style="position: absolute; left: 5%; top: 85%; height: 50%; width: 50%; padding: 1em; text-align: left;">
<input type="image" src="assets/fullscreen.png" onclick="openFullscreen()" style="height: 15%; width: 15%;">
<input type="image" src="assets/smallscreen.png" onclick="closeFullscreen()" style="height: 15%; width: 15%;">
</div>


---
class: middle, center, intermediate
.title-dark[Unidad 1]
# Estructura de una computadora
---
name: historia
# Antecedentes históricos

---
template: historia
count: false
.header[.title-color[En la antigüedad]]
<div style="position: absolute; left: 60px; top: 150px; height: 200px; width: 100px; padding: 1em; text-align: center;">
<img src="assets/abacus2.png" height="200">
<figcaption>Ábaco romano</figcaption>
</div>

--
count: false
<div style="position: absolute; left: 250px; top: 200px; height: 200px; width: 100px; padding: 1em;">
<img src="assets/pascaline.png" height="220">
<figcaption>Pascalina</figcaption>
</div>

--
count: false
<div style="position: absolute; left: 500px; top: 250px; height: 200px; width: 100px; padding: 1em;">
<img src="assets/Napiers.png" height="300">
<figcaption>Ábaco Neperiano</figcaption>
</div>

---
template: historia
.header[.title-color[Primer dispositivo de cómputo de propósitos generales (Teórico)]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/difference_engine_1853.png" height="400">
<figcaption>Difference Engine, <i>Charles Babbage</i>. 1822.</figcaption>
</figure>
</div>
---
template: historia
count: false
.header[.title-color[Primer dispositivo de cómputo de propósitos generales (teórico)]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/Difference_engine.JPG" height="400">
<figcaption>Difference Engine, <i>Charles Babbage</i>. 1822.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electromecánicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/1941.zusez3.jpg" height="400">
<figcaption> Z3, <i>Konrad Zuse</i>. 1941.</figcaption>
</figure>
</div>
---
template: historia
count: false
.header[.title-color[Computadoras electromecánicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/Z3_Deutsches_Museum.JPG" height="400">
<figcaption> Z3, <i>Konrad Zuse</i>. 1941.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electromecánicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/1941.bombe2.jpg" height="399">
<figcaption> Bombe, <i>Marian Rejewski y Alan Turing</i>. 1941.</figcaption>
</figure>
</div>
---
template: historia
count: false
.header[.title-color[Computadoras electromecánicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/Bletchley_Park_Bombe8.jpg" height="399">
<figcaption> Bombe, <i>Marian Rejewski y Alan Turing</i>. 1941.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/1942.abc.jpg" height="400">
<figcaption> ABC, <i>John Vincent Atanasoff y Clifford Berry</i>. 1942.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/1944.colossus.jpg" height="400">
<figcaption> Colossus, <i>Thomas Harold Flowers</i>. 1944.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/Eniac.jpg" height="400">
<figcaption> ENIAC, <i>Universidad de Pennsylvania y US Army</i>. 1944.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas (Primer programa almacenado en memoria)]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/SSEM_Manchester_museum_close_up.jpg" height="400">
<figcaption> Manchester Baby, <i>Universidad de Manchester</i>. 1948.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas (Primera computadora con transistores)]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/blanco.png" height="400">
<figcaption> Transistor Computer (prototype), <i>Universidad de Manchester</i>. 1953.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas (Primera computadora con transistores en América)]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/TRADIC_computer.jpg" height="400">
<figcaption> TRADIC, <i>Bell Labs</i>. 1954.</figcaption>
</figure>
</div>
---
template: historia
.header[.title-color[Computadoras electrónicas (Primera computadora totalmente transistorizada)]]
<div style="position: absolute; top: 100px; height: 400px; width: 750px; padding: 1em; text-align: center;">
<figure>
<img src="assets/HarwellCadetComputer.jpg" height="400">
<figcaption> Harwell CADET, <i>Harwell Laboratory</i>. 1955.</figcaption>
</figure>
</div>
---
template: historia
--
Hasta aquí los desarrollos eran principalmente llevados a cabo por universidades, laboratorios y entes gubernamentales de distintos países.

--
count:false

A partir de aquí comenzaron los desarrollos comerciales, que rápidamente llegaron a tener una arquitectura similar a las computadoras modernas.

---
name: computer-system
# Computadora moderna
---
template: computer-system
count: false

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Memoria Principal]]

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Memoria Principal]]

.center[![una imagen](assets/computer-system-2011-pag8-memory.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Dispositivos de Entrada/Salida]]

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Dispositivos de Entrada/Salida]]

.center[![una imagen](assets/computer-system-2011-pag8-io.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system

.header[.title-color[Unidad Central de Procesamiento]]

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Unidad Central de Procesamiento]]

.center[![una imagen](assets/computer-system-2011-pag8-cpu.svg)]

.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Buses]]

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
template: computer-system
count: false

.header[.title-color[Buses]]

.center[![una imagen](assets/computer-system-2011-pag8-bus.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

???
Que son los buses? Cables, un pedazo de cobre

Como se puede mandar señales? Niveles de tensión

Altos o bajos, 0 o 1

---
# Unidades fundamentales

<img src="assets/warning.svg" class="warning">

--
count: false
> El _bit_ es el elemento más pequeño que reconoce la computadora. Tiene solo dos valores posibles, 0 y 1.

--
count: false
> El _byte_ está formado por 8 bits. Todas las combinaciones posibles de 8 bits prendidos y apagados son 256.

--
count: false
> Una _palabra_ (o _word_ en inglés) está formada por 1, 2, 4 u 8 bytes (esto depende del sistema).

---
name: bit-byte-word
# Unidades fundamentales
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-00.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-01.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-02.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-03.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-04.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-05.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-06.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-07.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-08.svg)]
---
template: bit-byte-word
count: false
.center[![una imagen](assets/bit-byte-word-09.svg)]

---
# Múltiplos
--
count: false

<div style="font-size: 70%; position: relative; left: -50px">
<p>
\begin{array}{llll}
    \textbf{Unidad} & \textbf{Símbolo} & \textbf{Valor en Bytes} & \textbf{Expresión Matemática} \\
    \hline
    \text{Kilobyte} & \text{kB} & 1\,000 & 10^3 \\
    \text{Megabyte} & \text{MB} & 1\,000\,000 & 10^6 \\
    \text{Gigabyte} & \text{GB} & 1\,000\,000\,000 & 10^9 \\
    \text{Terabyte} & \text{TB} & 1\,000\,000\,000\,000 & 10^{12} \\
\end{array}
</p>
</div>
--
count: false

<div style="font-size: 70%; position: relative; left: -50px">
<p>
\[
\begin{array}{llll}
    \textbf{Unidad} & \textbf{Símbolo} & \textbf{Valor en Bytes} & \textbf{Expresión Matemática} \\
    \hline
    \text{Kibibyte} & \text{KiB} & 1\,024 & 2^{10} \\
    \text{Mebibyte} & \text{MiB} & 1\,048\,576 & 2^{20} \\
    \text{Gibibyte} & \text{GiB} & 1\,073\,741\,824 & 2^{30} \\
    \text{Tebibyte} & \text{TiB} & 1\,099\,511\,627\,776 & 2^{40} \\
\end{array}
\]

</p>
</div>

---
# Múltiplos
--
count: false

## Ejemplo

Compro un disco de 1TB, lo conecto, le instalo el Sistema Operativo y me fijo como quedaron las particiones
--
count: false

```sh
$ sudo parted /dev/sda print
```
---
count: false
# Múltiplos

## Ejemplo

Compro un disco de 1TB, lo conecto, le instalo el Sistema Operativo y me fijo como quedaron las particiones

```sh
$ sudo parted /dev/sda print
Model: ATA WDC WD10SPZX-60Z (scsi)
Disk /dev/sda: 1000GB
Sector size (logical/physical): 512B/4096B
Partition Table: msdos
Disk Flags: 

Number  Start   End     Size    Type     File system     Flags
 1      1049kB  281GB   281GB   primary  ext4            boot
 4      281GB   288GB   7956MB  primary  linux-swap(v1)  swap
 3      288GB   1000GB  712GB   primary  ext4

$
```

---
# Múltiplos
## Ejemplo
--
count: false

...busco otro comando para ver como es la jerarquía de las particiones...

--
count: false

```sh
$ lsblk
```

---
count: false
# Múltiplos
## Ejemplo

...busco otro comando para ver como es la jerarquía de las particiones...

```sh
$ lsblk
NAME   MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda      8:0    0 931,5G  0 disk
├─sda1   8:1    0 261,2G  0 part /
├─sda3   8:3    0 662,9G  0 part /home
└─sda4   8:4    0   7,4G  0 part [SWAP]
$
```
--
count: false

...faltan 68.5GB?

---
# Múltiplos
## Ejemplo
--
count: false

...busco otro comando para ver más información

--
count: false

```sh
$ sudo fdisk -l
```
---
count: false

# Múltiplos
## Ejemplo

...busco otro comando para ver más información

```sh
$ sudo fdisk -l
Disco /dev/sda: 931,51 GiB, 1000204886016 bytes, 1953525168 sectores
Modelo de disco: WDC WD10SPZX-60Z
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 4096 bytes
Tamaño de E/S (mínimo/óptimo): 4096 bytes / 4096 bytes
Tipo de etiqueta de disco: dos
Identificador del disco: 0x899f702e

Disposit.  Inicio  Comienzo      Final   Sectores Tamaño Id Tipo
/dev/sda1  *           2048  547874815  547872768 261,2G 83 Linux
/dev/sda3         563412992 1953523711 1390110720 662,9G 83 Linux
/dev/sda4         547874816  563412991   15538176   7,4G 82 Linux swap

Las entradas de la tabla de particiones no están en el orden del disco.

$
```

---
# Múltiplos
## Ejemplo
--
count: false

Cuando se compra un disco, lo venden (en realidad se fabrica) usando base 10, o sea para 1TB, aproximadamamente 1 000 000 000 000 bytes

--
count: false

Pero el sistema operativo presenta el tamaño en base 2
<div style="font-size: 70%; position: relative; left: -50px">
<p>
\[
\text{1 GiB} = 1\,073\,741\,824 \, \text{bytes}
\]
\[
\implies \text{1 TB} = \frac{1\,000\,000\,000\,000 \, \text{bytes}}{1\,073\,741\,824 \, \text{bytes/GiB}} \approx 931.3 \, \text{GiB}
\]
</p>
</div>


---
# Memoria Principal
--
count: false

.center[![una imagen](assets/computer-system-2011-pag8-memory.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
# Memoria Principal

<img src="assets/warning.svg" class="warning">

--
count: false

Dispositivo que retiene o almacena datos informáticos durante algún periodo de tiempo.

--
count: false

Retiene datos provenientes de los dispositivos de entrada que serán utilizados por programas.

--
count: false

Retiene datos procesados hasta que puedan ser puestos en los dispositivos de salida.

--
count: false

Almacena los programas que están en ejecución.

---
# Registros
--
count: false

.center[![una imagen](assets/computer-system-2011-pag8-register.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.44 ]]

---
# Registros

<img src="assets/warning.svg" class="warning">

--
count: false

Son pequeños espacios de almacenamiento del tamaño de una _palabra_

--
count: false

Cada registro tiene su propio nombre.

--
count: false

La colección de todos los registros se conoce como _Archivo de registros_

--
count: false

Dependiendo de la arquitectura, cuantos registros tendrá el CPU.

---
# Registros Vs. Memoria

<img src="assets/warning.svg" class="warning">

--
count: false

Los registros están dentro del _chip_ del procesador.

--
count: false

La memoria principal está en peines conectada al procesador mediante _buses_.

--
count: false

El acceso a memoria principal es aproximadamente 100 veces más lenta.

--
count: false

El tamaño del archivo de registros es muy pequeño, típicamente del orden del kB.


---
# Memoria caché (en inglés se dice _cash_)
--
count: false

.center[![una imagen](assets/computer-system-2011-pag45_.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.49 ]]

---
# Memoria caché

<img src="assets/warning.svg" class="warning">

--
count: false

Es un espacio de almacenamiento dentro del _chip_ donde está el procesador central.

--
count: false

Es más lento de accesar que los registros, pero mucho más rápido que la memoria RAM.

--
count: false

La idea es que en la memoria _caché_ se almacenen datos que el procesador _podría_ necesitar.

---
# Memoria caché
--
count: false

Las computadoras modernas tienen 3 niveles de caché: L1, L2 y L3

--
count: false

La L1 tiene una capacidad del orden de los cientos de kB. (Ej. en mi laptop L1i 128kB, L1d 128kB)

--
count: false

La L2 tiene una capacidad que puede ir del orden de los 100kB hasta los MB. (Ej. en mi laptop L2 1MB)

--
count: false

La caché L3 tiene una capacidad del orden de los MB. (Ej. en mi laptop L3 6MB)

---
# Memoria caché
--
count: false

.center[![una imagen](assets/computer-system-2015-pag61.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.61 ]]

---
# Jerarquía de memoria.

<img src="assets/warning.svg" class="warning">

--
count: false

.center[![una imagen](assets/computer-system-2011-pag50.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.50 ]]

---
# Unidad Central de Procesamiento o CPU
--
count: false

.center[![una imagen](assets/computer-system-2011-pag45-clean.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.49 ]]

---
# Unidad Central de Procesamiento o CPU

<img src="assets/warning.svg" class="warning">

--
count: false

Ejecuta las instrucciones almacenadas en la memoria.

--
count: false

Un registro llamado PC (Program Counter) apunta a la dirección donde está almacenada la instrucción que debe ejecutarse a continuación.

--
count: false

El procesador lee la instrucción de la dirección de memoria _apuntada_ por el PC...

--
count: false

...interpreta la instrucción, realiza alguna operación sencilla indicada por la instrucción...

--
count: false

... y actualiza el PC

---
# Unidad Central de Procesamiento o CPU

<img src="assets/warning.svg" class="warning">

--
count: false

Las operaciones que se pueden realizar son reducidas en número y simples en complejidad.

--
count: false

Todas a cargo de la _Unidad Aritmética/Lógica_ o por sus siglas en inglés (ALU).

--
count: false

Alguna operaciones podrían ser: carga (_load_), almacenamiento (_store_), operación (_operate_), salto (_jump_), etc.

--
count: false

Todas las operaciones van de la memoria a los registros, la ALU y de vuelta, todo el tiempo.

---
# Unidad Central de Procesamiento o CPU
## Ejemplo
--
count: false

Tenemos dos números almacenados en dos variables y queremos almacenar su suma en otra variable

--
count: false

Algo tan simple como

.bigger50[
```c
c = a + b
```
]

---
# Unidad Central de Procesamiento o CPU
## Ejemplo
--
count: false

Para que las instrucciones almacenadas en memoria puedan ejecutarse, deben tener una estructura determinada, definida por la arquitectura del procesador.

--
count: false

Por ejemplo, para un microprocesador ARMv7 cada instrucción en memoria se tendría que ver algo así

--
count: false

<div style="font-size: 70%; position: relative; left: -50px">
<p>
\begin{array}{|c|c|c|c|c|c|c|c|}
    \hline
    1110 & 00 & 0 & 0100 & 0 & 0000 & 0010 & 000000000001 \\
    \hline
\end{array}
</p>
</div>

--
count: false

¿Pero qué es esto?

---
# Unidad Central de Procesamiento o CPU
## Ejemplo
--
count: false

Para un microprocesador ARMv7 cada instrucción en memoria se tendría que ver algo así

<div style="font-size: 70%; position: relative; left: -50px">
<p>
\begin{array}{|c|c|c|c|c|c|c|c|}
    \hline
    \text{Cond} & 00 &\text{I} & \text{OPCODE} & \text{S} & \text{Rn} & \text{Rd} & \text{Operand2} \\
    \hline
    1110 & 00 & 0 & 0100 & 0 & 0000 & 0010 & 000000000001 \\
    \hline
\end{array}
</p>
</div>

--
count: false

estos son los bits correspondientes a una operación de suma entre dos registros (R0 y R1). Esta operación deja el resultado de la suma en otro registro (R2). Pero todavía falta más...

---
# Unidad Central de Procesamiento o CPU
## Ejemplo
--
count: false

para ARM las operaciones como la suma no pueden operar sobre las variables directamente, hay que cargar los valores en los registros, lo que sería algo así

--
count: false

<div style="font-size: 70%; position: relative; left: -200px">
<p>
\begin{array}{l}
11100101100111110000000000000000 \\
11100101100100000000000000000000 \\
11100101100111110001000000000100 \\
11100101100100010000000000000000 \\
11100000100000000010000000000001 \\
11100101100111110011000000001000 \\
11100101100000110010000000000000
\end{array}
</p>
</div>

---
# Unidad Central de Procesamiento o CPU
## Ejemplo
--
count: false

Mismo código con _Assembly_

--
count: false

<div style="font-size: 70%; position: relative; left: -150px">
<p>
\begin{array}{l|l}
11100101100111110000000000000000 & \text{LDR r0, =a}    \\
11100101100100000000000000000000 & \text{LDR r0, [r0]}  \\
11100101100111110001000000000100 & \text{LDR r1, =b}    \\
11100101100100010000000000000000 & \text{LDR r1, [r1]}  \\
11100000100000000010000000000001 & \text{ADD r2, r0, r1}\\
11100101100111110011000000001000 & \text{LDR r3, =c}    \\
11100101100000110010000000000000 & \text{STR r2, [r3]}
\end{array}
</p>
</div>

---
# Unidad Central de Procesamiento o CPU
## Ejemplo
--
count: false

Mismo código con _Lenguaje C_

--
count: false

<div style="font-size: 70%; position: relative; left: -50px">
<p>
\begin{array}{l|l|l}
11100101100111110000000000000000 & \text{LDR r0, =a}     & \\
11100101100100000000000000000000 & \text{LDR r0, [r0]}   & \\
11100101100111110001000000000100 & \text{LDR r1, =b}     & \\
11100101100100010000000000000000 & \text{LDR r1, [r1]}   & \\
11100000100000000010000000000001 & \text{ADD r2, r0, r1} & \texttt{c = a + b;} \\
11100101100111110011000000001000 & \text{LDR r3, =c}     & \\
11100101100000110010000000000000 & \text{STR r2, [r3]}   &
\end{array}
</p>
</div>

--
count: false

 Conclusión:
--
count: false
Por suerte, en Informática 1 vamos a aprender Lenguaje C

---
# Sistemas Operativos
--
count: false

.center[![una imagen](assets/computer-system-2015-pag51-so.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.51 ]]

--
count: false

Los programas no reciben directamente la información ingresada desde el teclado ni de la memoria, ni escriben la memoria o imprimen en pantalla...

---
# Sistemas Operativos

.center[![una imagen](assets/computer-system-2015-pag51-so.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.51 ]]

--
count: false

...por el contrario, utilizan _servicios_ provistos por el _Sistema Operativo_

---
# Sistemas Operativos
--
count: false

El SO tiene dos objetivos principales:
--
count: false

* Proteger el _hardware_ de uso indebido por parte de las aplicaciones
--
count: false
* Proveer un mecanismo unificado para manipular diferentes tipos de _hardware_

---
# Sistemas Operativos
--
count: false

Para lograr estos objetivos el SO utiliza tres abstracciones: _procesos_, _memoria virtual_ y _archivos_

--
count: false

.center[![una imagen](assets/computer-system-2015-pag51-so-tools.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.51 ]]

---
# Sistemas Operativos
--
count: false

Un **proceso** es la abstracción que hace el sistema operativo de un programa corriendo proveyendo la ilusión de que es el único

--
count: false

Muchos procesos pueden correr _concurrentemente_ en el mismo sistema...

--
count: false

...entendiéndose como concurrentes a los procesos que pueden ser interrumpidos momentáneamente por otros.

--
count: false

Normalmente, hay más procesos que CPUs.

---
# Sistemas Operativos
--
count: false

La **memoria virtual** es una abstracción que provee a cada proceso la ilusión que tiene uso exclusivo de la memoria principal, conocida como _espacio virtual de memoria_

--
count: false

El espacio de memoria virtual tiene áreas bien definidas cada una con su propósito específico


---
# Sistemas Operativos
--
count: false

Todos los dispositivos de entrada/salida son modelados como **archivos**.

--
count: false

Un archivo es simplemente una secuencia de bits.

--
count: false

Desde el teclado, disco, pantalla, cámaras hasta las redes son modeladas como archivos.

--
count: false

Para realizar accesos a los distintos dispositivos se utilizan herramientas de acceso a archivos (apertura, lectura, escritura).

---
# Sistemas Operativos
--
count: false

* Windows
--
count: false
* macOS (y derivados)
--
count: false
* GNU/Linux (y derivados)
--
count: false
* Android (pero es derivado de GNU/Linux)
--
count: false
* otros

???
pág de uso de SOs
---
# Sistemas Operativos

.header[.title-color[GNU/Linux]]
<div style="position: absolute; left: 600px; top: 200px; height: 200px; width: 200px; padding: 1em;">
<img src="assets/Heckert_GNU_white.svg" height="220">
<figcaption>.center[GNU's Not Unix]</figcaption>
</div>
--
count: false
* No solo un sistema operativo, es también una colección de programas
--
count: false
* gcc (GNU Compiler Collection)
--
count: false
* glibc
--
count: false
* bash
--
count: false
* GNU Core Utilities (cat, ls, rm, etc.)
--
count: false
* GNOME desktop environment
--
count: false
* etc.

---
# Sistemas Operativos

.header[.title-color[GNU/Linux]]

Los principales (por popularidad) en 2025:

1. Mint
2. MX Linux
3. EndeavourOS
4. Debian
5. CachyOS
6. Pop_OS
7. Manjaro
8. Ubuntu
9. Fedora
10. openSUSE

---
# Sistemas Operativos

.header[.title-color[GNU/Linux]]
<div style="position: absolute; left: 650px; top: 380px; height: 200px; width: 200px; padding: 1em;">
<img src="assets/Tux.svg" height="220">
<figcaption>.center[Linux]</figcaption>
</div>
--
count: false
* Iniciado en 1991 por Linus Torvalds (~ 10000 líneas de código)
--
count: false
* Escrito completamente en C (y algo de ASM)
--
count: false
* Hoy tiene más de 30 millones de líneas de código
--
count: false
* y miles de desarrolladores por todo el mundo
--
count: false
* es el proyecto de sofware más grande de la historia

---
template: computer-system
.header[.title-color[Corriendo un programa]]

.center[![una imagen](assets/computer-system-2011-pag8.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-000.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-001.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-002.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-003.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-004.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-005.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-006.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-007.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-008.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-009.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-010.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ingreso del programa solicitado]]

.center[![una imagen](assets/computer-system-2011-pag8-read-hello-011.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa.]]

.center[![una imagen](assets/computer-system-2011-pag8-000.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Carga a memoria del programa]]

.center[![una imagen](assets/computer-system-2011-pag8-load-hello-000.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Carga a memoria del programa]]

.center[![una imagen](assets/computer-system-2011-pag8-load-hello-001.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Carga a memoria del programa]]

.center[![una imagen](assets/computer-system-2011-pag8-load-hello-002.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Carga a memoria del programa]]

.center[![una imagen](assets/computer-system-2011-pag8-load-hello-003.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Carga a memoria del programa]]

.center[![una imagen](assets/computer-system-2011-pag8-load-hello-004.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa.]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-100.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-000.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-001.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-002.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-003.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-004.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-005.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-006.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-007.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-008.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-009.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-010.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]

---
template: computer-system
count: false
.header[.title-color[Corriendo un programa. Ejecución: Muestra en pantalla]]

.center[![una imagen](assets/computer-system-2011-pag8-display-hello-011.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2011, Cap.1, pág.8 ]]


---

class: middle, center, intermediate
.title[Extra: Se verá en detalle en la unidad 3]

---
# Fases de compilación
--
count: false

Suponga un programa que deje un saludo escrito en lenguaje C, llamado `hello.c`

--
count: false

```C
#include <stdio.h>

int main (void)
{
  printf("Hola, mundo!\n");

  return 0;
}

```
--
count: false

el cual se verá en detalle en la Unidad 3

---
# Fases de compilación
--
count: false

.center[![una imagen](assets/computer-system-2015-pag41.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.41 ]]

--
count: false

El **preprocesador** modifica el programa original agregando y quitando texto para dejar preparado el archivo `.i` para el compilador.

---
# Fases de compilación

.center[![una imagen](assets/computer-system-2015-pag41.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.41 ]]

--
count: false

El **compilador** traduce el programa del archivo `.i` a lenguaje _assembly_, dejando el archivo `.s`

---
# Fases de compilación

.center[![una imagen](assets/computer-system-2015-pag41.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.41 ]]

--
count: false

El **ensamblador** traduce el programa escrito en _assembly_ a código objeto, comprensible por la computadora.
Queda un archivo `.o`

---
# Fases de compilación

.center[![una imagen](assets/computer-system-2015-pag41.svg)]
.smaller50[.footnote[Ilustración tomada de _Computer Systems_, Bryant-O’Hallaron, Ed. 2015, Cap.1, pág.41 ]]

--
count: false

Finalmente, el **linqueador** transforma compone un único archivo ejecutable con el `.o` que se creo a partir del código del usuario, junto con los `.o` de las funciones de las bibliotecas elegidas

---
# Compilación y Ejecución
--
count: false

En la terminal de linux...

```shell
$

```

---
count: false
# Compilación y Ejecución

En la terminal de linux...

```shell
$ gcc hello.c -o hello

```
---
count: false
# Compilación y Ejecución

En la terminal de linux...

```shell
$ gcc hello.c -o hello
$

```

---
count: false
# Compilación y Ejecución

En la terminal de linux...

```shell
$ gcc hello.c -o hello
$ ./hello

```
---
count: false
# Compilación y Ejecución

En la terminal de linux...

```shell
$ gcc hello.c -o hello
$ ./hello
Hola, mundo!
$

```

--
count: false

Por suerte, todo el preprocesamiento, compilación, ensamblaje y linqueo se hace con el mismo comando, al mismo tiempo...
con `gcc`

--
count: false

...aunque se puede hacer paso por paso si se quiere

---
# Bibliografía

**Computer Systems** A Programmer’s Perspective

Randal E. Bryant and David R. O’Hallaron

_2015_ Third edition.

Cap. 1

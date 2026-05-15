---
theme: apple-basic
# some information about your slides (markdown enabled)
title: Control de Versiones
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
image: /img/front2.png
---

<div class="absolute left-20 bottom-20">

# Apendice A

## Introducción al Control de versiones

</div>

<!--<QrOverlay title=''>-->

<!--<img src="/img/info1-u01.png" class="mx-auto w-3/4" />-->

<!--</QrOverlay>-->

---
layout: center
class: text-4xl
---

¿Para qué sirve un control de versiones?

---
transition: none
---

# ¿Para qué sirve?

Para llevar registro de los cambios en archivos o proyectos

Para pasar de esto:

<img src="/img/carpetas-tesis.svg" width="500" style="position: relative; top: 0px" >

---

# ¿Para qué sirve?

Para llevar registro de los cambios en archivos o proyectos

a esto:

<img src="/img/carpetas-tesis-git.svg" width="500" style="position: relative; top: 0px" >


---

# Primer intento


![RCS](/img/git-intro-local-vcs.png){class="mx-auto"}

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

RCS (Revision Control System) cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>

---

# Trabajo en equipo, pero centralizado

![CVS](/img/git-intro-server-vcs.png){class="mx-auto h-85"}

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ej.: CVS, Subversion, etc.  cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>

---

# Trabajo en equipo distribuido

![CVS](/img/git-intro-distro-vcs.png){class="mx-auto h-95"}

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

Ej.: git, Bazaar, etc. cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>

---
layout: center
class: text-4xl
---

¿Se usa el control de versiones?

---

En 2023 el sitio Stackoverflow preguntó a 70mil programadores si usaban o no un control de versiones, y cuál...


<div style="position: absolute; left: 0px;">

![CVS](/img/git-otros.png){class="mx-auto h-95"}

</div>

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

https://stackoverflow.blog/2023/01/09/beyond-git-the-other-version-control-systems-developers-use/

</div>

---
layout: center
class: text-4xl
---

La diferencia de [git]{style="color: #F1502F"} frente a los otros

---

# Los otros...

<img src="/img/deltas.png" width="700">

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>

---

## Los deltas son algo así

![](/img/diff.svg){class="w-1/2"}

---

# Las fotos de [git]{style="color: #F1502F"}

<img src="/img/snapshots.png" width="700">

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>


---
class: text-2xl
---

# Los tres estados

Git tiene tres estados principales en los que se pueden encontrar los archivos:

**confirmado (committed)**: significa que los datos están almacenados de manera segura en la base de datos local


**preparado (staged)**: significa que se ha marcado un archivo modificado en su versión actual para que vaya en la próxima confirmación.

**modificado (modified)**: significa que el archivo fue modificado pero todavía no se ha confirmado a la base de datos

---
class: text-2xl
---

# Las tres secciones

<img src="/img/areas.png" width="700">

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>

---
class: text-2xl
---

# Iniciando

Hay tres opciones con las que se suele trabajar

* Creando un repositorio propio local

* Creando un repositorio propio local pero sincronizandolo con uno remoto

* Haciendo una copia de un repositorio remoto (propio o de otra persona)

---
class: text-2xl
---

# Iniciando

## Repositorio propio local


```bash
$ git init mi_proyecto
```

Esto crea una carpeta `mi_proyecto` y comienza el repo ahí (archivos de configuración, etc.)

...o lo mismo un poco más largo

```bash
$ mkdir otro_proyecto
$ cd otro_proyecto
$ git init
```

---
class: text-2xl
---

# Iniciando
## Repositorio propio local

En general esta opción no se usa tanto porque pierde la seguridad de tener todo en la nube

---
class: text-2xl
---

# Iniciando
## Repositorio propio local pero sincronizado en la nube

Creamos de la misma manera el repositorio local

```bash
$ git init mi_proyecto_remoto
- Inicializado repositorio Git vacío en mi_proyecto_remoto
$
```

y luego sincronizamos (el repositorio debe existir en la url)

```bash
$ git init mi_proyecto_remoto
$ git remote add origin <url>
```

---
class: text-2xl
---

# Iniciando

## Copia (clone) de repositorio (propio o no)


Un repositorio de un tercero

```bash
$ git clone https://github.com/git/git
```

O propio (armemos uno en gitlab)

---
class: text-2xl
---

# Paso 1

En el navegador visitar http://gitlab.com

y crear un usuario desde "Obtener una prueba gratuita"

![](/img/gitlab-init.svg){class="w"}

---
class: text-2xl
---

# Paso 2

Una vez creado el usuario ingresar y en la pantalla principal buscar el +

![](/img/gitlab-init-project.svg){class="w"}

---
class: text-2xl
---

# Paso 3

Seleccionar "Nuevo proyecto/repositorio" o "New project/repository"


![](/img/gitlab-init-project2.svg){class="w"}

---
class: text-2xl
---

# Paso 4

Elegir "Crear proyecto vacío" o "Create blank project"


![](/img/gitlab-init-project3.svg){class="w"}

---
class: text-2xl
---

# Paso 5

Escribir un nombre para el repositorio

![](/img/gitlab-init-project-name.svg){class="w"}

---
class: text-2xl
---

# Paso 6

Seleccionar el propio nombre de usuario (abajo de todo en la parte usuario)

![](/img/gitlab-init-project-user.svg){class="w"}

---
class: text-2xl
---

# Paso 7

Seleccionar "Público" o "Public"

![](/img/gitlab-init-project-public.svg){class="w"}

---
class: text-2xl
---

# Paso 8

Asegurarse de que esté seleccionado "README.md"

![](/img/gitlab-init-project-readme.svg){class="w"}

---
class: text-2xl
---

# Paso 9

Presionar "Crear Proyecto" o "Create Project"

![](/img/gitlab-init-project-create.svg){class="w"}

---
class: text-2xl
---

# Paso 10

Presionar "Código" o "Code" y copiar el link de "Clonar con HTTPS" o "Clone with HTTPS"

![](/img/gitlab-init-clone.svg){class="w"}

---
class: text-2xl
---

# Paso 11

Usar esa URL para clonar el repositorio

```bash
$ git clone https://gitlab.com/tu-usuario/tps-info1.git
```

En este momento se crea un directorio con el repositorio que se puede sincronizar

---
layout: center
class: text-4xl
---

Ahora si... usando [git]{style="color: #F1502F"}

---
class: text-4xl
---

# El ciclo de vida de los archivos de git

<img src="/img/lifecycle.png" width="700">

<div class="absolute bottom-2 left-0 w-full text-center text-sm">

cc by-nc-sa 3.0 Scott Chacon, Ben Straub

</div>

---
layout: center
class: text-4xl
---

Comandos útiles

---
class: text-2xl
---

# git status

* El comando `git status` sirve para conocer el estado exacto del repositorio.

* Informa en qué rama se encuentra y agrupa los archivos según si están modificados, listos para confirmar (staging) o si son nuevos y aún no son rastreados por el control de versiones.

---
class: text-2xl
---

# git add

* El comando `git add` sirve para agregar archivos al área de preparación (*staging area*).

* Permite seleccionar qué cambios formarán parte del próximo commit.

* Los archivos agregados quedan listos para ser confirmados mediante `git commit`.

```bash
$ git add hola.c
```

---
class: text-2xl
---

# git commit

* El comando `git commit` crea una confirmación (*commit*) con todos los cambios que se encuentran en el área de staging.

* Cada commit representa un punto de guardado en la historia del proyecto.

* La opción `-m` permite escribir un mensaje descriptivo directamente desde la terminal.

```bash
$ git commit -m "Agrega archivo hola.c"
```


---
class: text-2xl
---

# git push

* El comando `git push` envía los commits locales al repositorio remoto.

* Se utiliza para compartir cambios con otros integrantes del proyecto o para respaldarlos en plataformas como GitLab o GitHub.

* Generalmente se envían los cambios hacia una rama específica.

por ahora alcanza con:

```bash
$ git push
```


---
class: text-2xl
---

# git pull

* El comando `git pull` descarga y fusiona los cambios del repositorio remoto en el repositorio local.

* Permite actualizar el proyecto con los últimos cambios realizados por otros colaboradores.

* Internamente combina `git fetch` y `git merge`.

por ahora alcanza con:

```bash
$ git pull
```


---
class: text-2xl
---

# git restore

* El comando `git restore` sirve para descartar cambios realizados en archivos modificados.

* Permite recuperar la última versión confirmada de un archivo.

* También puede utilizarse para quitar archivos del área de staging.

```bash
$ git restore hola.c
```

---
class: text-2xl
---

# git checkout

* El comando `git checkout` permite cambiar de rama o moverse hacia un commit específico.

* También puede utilizarse para inspeccionar versiones anteriores del proyecto.

* Al moverse a un commit antiguo, Git entra en estado *detached HEAD*.

```bash
$ git checkout main
$ git checkout a1b2c3d
```

---
class: text-2xl
---

# quitar archivos del staging

* Si un archivo fue agregado al área de staging por error, puede quitarse sin perder los cambios realizados.

* Esto permite volver el archivo al estado "modificado" pero fuera del próximo commit.

```bash
$ git restore --staged hola.c
```

---
layout: center
class: text-4xl
---

Continuará...

![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección y reidentificación de caras en secuencias de imágenes o video

**Alumnos:**

* Camila Fredes (Programador)
* Rafael Munizaga (Programador)

## Resumen 

> La empresa ACME desea construir un sistema de vigilancia para contar personas en una zona determinada de un edificio mediante el procesado digital de imágenes o videos obtenidos a través de una cámara. El proyecto requiere entregar información respecto a la cantidad de personas que transitan dicho espacio durante la entrada y salida del edificio, además debe calcular los respectivos flujos de personar en un periodo de una hora para que el guardia pueda acceder a esta información. 

## 1. Introducción

Las aplicaciones del lenguaje C++ son muy extensas. Se habla de navegadores WEB, Sistemas Operativos, Bases de datos, Bibliotecas, aplicaciones gráficas, nubes, videojuegos, compiladores, etc estos estas escritos o tienen bastante de su estructura. 
La empresa ACME desea construir un sistema de vigilancia para contar personas en una zona determinada de un edificio mediante el procesado de material Digital visual y así facilitar la detección de personas y conteo.
La metodología de trabajo duran te el proyecto comienza interpretando los requisitos necesarios para su funcionamiento idóneo, un completo análisis de las posibles soluciones para completar el proyecto, diseño de  un diagrama de clases que presente sus atributos, métodos y relaciones entre los objetos, programación en el lenguaje requerido C++ que finaliza con pruebas de diagnóstico para le versión final del programa.


### 1.1 Descripción del problema

Se debe escribir un código en C++ orientado a objeto con listas enlazada que nos permita identificar y contar personas en un video para la obtención de información del flujo de salida y entrada de un edificio.

### 1.2 Objetivos 

**Objetivo General**

Desarrollar un sistema de identificación y contento de personas.

**Objetivos específicos**

1. Investigar sobre la intalacion de librerias y IDE 
2. Implemetar metodos necesarios para el conteo
3. implementar detectcion de personas en imagen o video


### 1.3 Solución propuesta

Esbozo de la solución propuesta, se espera que esta vaya evolucionando a medida que se avanza en el proyecto.

## 2. Materiales y métodos

Explicar brevemente como se espera desarrollar el trabajo de implementación.

### 2.1 Instalación

Opencv: Es una biblioteca libre de visión artificial originalmente desarrollada por Intel. OpenCV significa Open Computer Vision.
El instalador de esta biblioteca se obtiene desde su WEB a través de cualquier navegador y se selecciona el sistema operativo para su posterior instalacion en una carpeta de ruta accecible en la cual navegaremos opencv/build/x64/vc15 donde se encontrara las carpetas bin y liv a las que se le creara un Path respectivamente en las variables de entorno pegando las ruta de ambas carpetas.

Visual Studio comunidad: IDE completo para desarrolladores de .NET y C++ en Windows.
Se descarga a través del navegador la versión comunidad, ejecutamos el instalador para selección Desarrollo para el escritorio en C++.

CMake: Es una familia de herramientas diseñada para construir, probar y empaquetar software. CMake se utiliza para controlar el proceso de compilación del software usando ficheros de configuración sencillos e independientes de la plataforma.
Se descarga a través del navegador la versión de Windows installer y agregar a las variables de entorno.

Visual Studio Code: Es un editor de código fuente desarrollado por Microsoft para Windows, Linux, macOS y Web. Incluye soporte para la depuración, control integrado de Git, resaltado de sintaxis, finalización inteligente de código, fragmentos y refactorización de código.
Se descarga a través del navegador y al ejecutarse se instala C/C++ Extension Pack.

### 2.2 Diseño 

![imagen](images/p.png)

### 2.3 Implementación

Explicar brevemente algunos aspectos de implementación: Por ejemplo, detector de caras utilizado. Se pueden realizar pequeñas reseñas al código para indicar elementos importantes en el trabajo.

Por ejemplo, 

#### Detector de caras

El detector de caras utilizado fue xxx. Para utilizarlo se debe.... El código para detectar una cara en una imagen se muestra a continuación:

```c++
 1. faceCascadePath = "./haarcascade_frontalface_default.xml";
 2. faceCascade.load( faceCascadePath )
 3. std::vector<Rect> faces;
 4. faceCascade.detectMultiScale(frameGray, faces);

 5. for ( size_t i = 0; i < faces.size(); i++ )
 6. {
 7.  int x1 = faces[i].x;
 8.  int y1 = faces[i].y;
 9.  int x2 = faces[i].x + faces[i].width;
10.  int y2 = faces[i].y + faces[i].height;
11. }
```
La primera linea carga el archivo de entrenamiento... etc

## 3. Resultados obtenidos

## 4. Conclusiones

# Anexos

## Anexo A: Instalación librerías OpenCV

## Anexo B: Instalación de IDE y configuración librerías OpenCV

# Referecia

Indicar los libros, páginas web, documentos, etc. Utilizados en el trabajo. Por ejemplo:

1. Download. (s/f). Cmake.Org. Recuperado el 22 de junio de 2022, de https://cmake.org/download/

2. Download Visual Studio Code. (s/f). Visualstudio.Com. Recuperado el 22 de junio de 2022, de https://code.visualstudio.com/download

3. OpenCV Library. (2019, marzo 5). Releases. OpenCV. https://opencv.org/releases/

4. Meet Google Drive – One place for all your files. (s/f). Google.Com. Recuperado el 22 de junio de 2022, de https://drive.google.com/drive/u/1/folders/1MTik-UAPAi0MgkdM-O9t6s_wD9JSVolE



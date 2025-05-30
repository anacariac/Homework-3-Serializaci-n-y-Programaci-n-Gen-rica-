# Homework 3 Serializacion y Programacion Generica
## **Ejercicio 1 - Clases con Mediciones Base para posición y presión de un vuelo**
### **Descrpción**
Este ejericicio tiene en cuenta un diagrama UML, el cual contiene una interfaz de Medición, lo que luego nos permitirá guardar la información de un vuelo, mediante los métodos de serialización

## **Implementación**
- `IMediciones`: Interfaz con métodos de serialización virtuales puro.
- `MedicionBase`: Clase abstracta que permite guardar como atributo el tiempo de medición como un *unique_ptr*. En esta clase ya se empezó a trabajar sin `move`, de esta manera se sobreescribió el operador `=` y un constructor de deep copy.
- `Posicion`: Clase derivada de `MedicionBase`, la cual tiene como atributos la longitud, la latitud y la altitud; es construida con un tiempo que llama al constructor de `MedicionBase`. También opera de manera distinta para no utilizar `move`.
- `Presion`: Clase derivada de `MedicionBase`, la cual tiene como atributos una presión estática y otra dinámica; opera similarmente que la clase `Posicion` a la hora de no utilizar el `move`.
- `SaveFlightData`: Clase que tiene como atributos una posición y una presión, haciendo uso de la **Agregación**.

### **Cómo ejecutarlo**
- make ejercicio1
Corre con valgrind para asegurar que la memoria está siendo usada correctamente.
---
## **Ejercio 2 - Template Specialization con cálculo del área de distintas figuras**
### Descripción
Se implementa un procesador de figuras geométricas que permite calcular el área de diferectes formas (círculos, elipses y rectángulos) con especialización de plantillas.

## **Implementación**
- `Point`: Clase que representa un punto en un plano 2D con coordenadas (x, y).
    - Métodos implementados:
        - `get_X()`, `get_Y()`: Obtener coordenadas.
        - `set_X()`, `set_Y()`: Establecer coordenadas.
        - `showPoint()`: Mostrar coordenadas.
- `Circle`: Clase que representa un círculo con posición (`Point`) y raido
    - Métodos implementados:
        - `get_position()`, `get_ratio()`: Obtener posición y radio.
        - `set_position()`, `set_ratio()`: Establecen posición y radio.
        - `showPoint()`: Mostrar información del círculo.
- `Ellipse`: Representa una elipse con posición (Point) y semiejes mayor y menor.

    - Métodos principales:
        - `get_position()`, `get_SemiMajorAxis()`, `get_MinorSemiAxis()`.
        - Métodos set correspondientes
        - `showEllipse()`: Muestra información de la elipse
- `Rectangle`: Representa un rectángulo con vértice izquierdo (Point), ancho y largo.
    - Métodos principales:
    	- `get_LeftVertex()`, `get_width()`, `get_length()`
        - Métodos set correspondientes
        - `showRectangle()`: Muestra información del rectángulo

- `ProcesadorFigura` (Plantilla): Clase plantilla que calcula el área de diferentes figuras mediante especialización.
    - Implementaciones especializadas para:
        - Circle: Área = π × radio²
        - Ellipse: Área = π × semieje mayor × semieje menor
        - Rectangle: Área = ancho × largo

### **Cómo ejecutarlo**
- make ejercicio2
Corre con valgrind para asegurar que la memoria está siendo usada correctamente.
---
## **Ejercio 3 - Generación de JSON**
### Descripción
Se implementa un sistema para generar datos y convertirlos a formato `JSON` utilizando plantillas. Consta de dos componentes principales: `DataGenerator` para generar datos de diferentes tipos y `JSONbuilder` para construir documetos JSON.

## **Implementación**
- `DataGenerator`: Clase utilizando `template` que genera y convierte datos a formato JSON según el tipo especificado.
    - Tipos soportados:
        - `double`: Genera un vector de números decimales
        - `string`: Genera un vector de strings
        - `vector<int>`: Genera un vector de vector de números enteros
    - Métodos principales:
        - `addData(const T& data)`: Añade un elemento al generador
        - `toJSON()`: Convierte los datos almacenados a formato JSON según el tipo
- `JSONbuilder`: Clase que construye documentos JSON a partir de fragmentos de datos.
    - Métodos principales
        - `addInfo(const string& d)`: Añade un fragmento JSON al documento
        - `buildJSON(ostream& out)`: Construye el JSON completo y lo escribe en un stream
        - `showJSON()`: Muestra el JSON construido en la salida estándar

### **Cómo ejecutarlo**
- make ejercicio3
Corre con valgrind para asegurar que la memoria está siendo usada correctamente.
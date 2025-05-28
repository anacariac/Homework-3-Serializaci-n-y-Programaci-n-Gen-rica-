# Homework 3 Serializacion y Programacion Generica
## **Ejercicio 1 - Clases con Mediciones Base para posición y presión de un vuelo**
### **Descrpción**
Este ejericicio tiene en cuenta un diagrama UML, el cual contiene una interfaz de Medición, lo que luego nos permitirá guardar la información de un vuelo, mediante los métodos de serialización

## **Implementación**
- `IMediciones`: Interfaz con métodos de serialización virtuales puro.
- `MedicionBase`: Clase abstracta que permite guardar como atributo el tiempo ed medición como un *unique_ptr*. En esta clase ya se empezó a trabajar sin `move`, de esta manera se sobreescribió el operador `=` y un constructor de deep copy.
- `Posicion`: Clase derivada de `MedicionBase`, la cual tiene como atributos la longitud, la latitud y la altitud; es construida con un tiempo que llama al constructor de `MedicionBase`. También opera de manera distinta para no utilizar `move`.
- `Presion`: Clase derivada de `MedicionBase`, la cual tiene como atributos una presión estática y otra dinámica; opera similarmente que la clase `Posicion` a la hora de no utilizar el `move`.
- `SaveFlightData`: Clase que tiene como atributos una posición y una presión, haciendo uso de la **Agregación**.

### **Cómo ejecutarlo**
- make ejercicio1
Corre con valgrind para asegurar que la memoria esta siendo usada correctamente.
---
## **Ejercio 2 - Template Specialization con cálculo del área de distintas figuras**
### Descripción


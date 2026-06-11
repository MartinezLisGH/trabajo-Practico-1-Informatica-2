# Resolución del Trabajo Práctico 1 de Lisandro Martínez - Informática 2

**Institución:** Universidad Tecnológica Nacional - Facultad Regional Avellaneda (UTN FRA)
**Carrera:** Ingeniería Electrónica

---

## 1. Descripción del Proyecto
Este repositorio contiene la refactorización del ejercicio propuesto por la cátedra ("Resolucion_Final_Informatica_1"). El código original ha sido rediseñado siguiendo las indicaciones listadas en el archivo "08_Trabajo_Practico_1" perteneciente al repositorio de la cátedra de informática 2.
## 2. Arquitectura de la Solución
Se implementó una separación lógica en múltiples archivos para mejorar la mantenibilidad, escalabilidad y legibilidad del código fuente:

* **`funciones.h` (Interfaz):** Archivo de cabecera que contiene las guardas de inclusión, macros de configuración física (límites de arreglos, identificadores de sucursales), la definición de la estructura principal (`articulos_t`) y los prototipos de las subrutinas.
* **`funciones.c` (Implementación):** Encapsula la lógica de negocio. Utiliza paso de parámetros por referencia (punteros y arreglos) y funciones de la biblioteca estándar (`string.h`) para el control de datos. 
* **`main.c` (Orquestador):** Contiene el hilo de ejecución principal, limitándose a inicializar la memoria e invocar secuencialmente los módulos de carga, ordenamiento e impresión.

## 3. Conceptos Técnicos Aplicados
Durante el desarrollo se aplicaron estrictamente los siguientes conceptos:
* **Estructuras de Datos (`struct`, `typedef`):** Agrupación lógica de variables heterogéneas.
* **Punteros y Funciones por Referencia:** Modificación directa de la memoria base del arreglo de estructuras sin realizar duplicaciones ineficientes en la memoria RAM.
* **Manejo de Strings:** Uso de `strcpy` y `strcmp` para la asignación y validación de cadenas de caracteres.
* **Algoritmos de Ordenamiento:** Implementación del Método de la Burbuja (Bubble Sort), optimizado mediante el intercambio directo de bloques de memoria (Swap de Estructuras completas) en lugar del intercambio individual de campos.

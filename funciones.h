#ifndef FUNCIONES_H
#define FUNCIONES_H

/* Configuración de Artículos */
#define CANT_ARTICULOS 60
#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

/* Estructura de datos */
typedef struct {
    char descripcion[90];
    int cantidad_sucursal[3]; 
    int total;
} articulos_t;

/* Prototipos de funciones */

void cargar_articulos(articulos_t articulos[]);
void mostrar_articulos(const articulos_t articulos[]);
void ordenar_articulos(articulos_t articulos[]);

#endif
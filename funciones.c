#include <stdio.h>
#include <string.h>
#include "funciones.h"

/* Carga de Artículos */

void cargar_articulos(articulos_t *articulos){

    int opc = 0, i, articulo_index, sucursal;
    char articulo[90];

    do {
        printf("Ingrese la descripcion del articulo: ");
        scanf("%s", articulo);
        i = 0;
        while (i < CANT_ARTICULOS && (articulos + i)->descripcion[0] != '\0' && strcmp(articulo, (articulos + i)->descripcion) != 0) {
            i++;
        }
        
        articulo_index = i;
        
        strcpy((articulos + articulo_index)->descripcion, articulo);

        printf("Registrado: %s, Indice: %d\n", (articulos + articulo_index)->descripcion, articulo_index);

        printf("Para que sucursal va a realizar la carga? (1, 2 o 3): ");
        scanf("%d", &sucursal);

        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &((articulos + articulo_index)->cantidad_sucursal[sucursal - 1]));

        (articulos + articulo_index)->total = 0; 
        for(i = 0; i < 3; i++) {
            (articulos + articulo_index)->total += (articulos + articulo_index)->cantidad_sucursal[i];        
        }

        printf("Desea ingresar otro articulo? 1-Si, 2-No: ");
        scanf("%d", &opc);

    } while (opc == 1);
}

/* Impresión de Fichas Cargadas */

void mostrar_articulos(const articulos_t *articulos) {
    int i = 0;
    
    printf("\n\n--- Listado de Artículos ---\n");
    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    
    while (i < CANT_ARTICULOS && (articulos + i)->descripcion[0] != '\0') {
        printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\n", 
               (articulos + i)->descripcion, 
               (articulos + i)->cantidad_sucursal[SUCURSAL_1], 
               (articulos + i)->cantidad_sucursal[SUCURSAL_2], 
               (articulos + i)->cantidad_sucursal[SUCURSAL_3], 
               (articulos + i)->total);
        i++;
    }
}

/* Ordenamiento de Artículos */

void ordenar_articulos(articulos_t *articulos) {
    int i, j;
    articulos_t aux;

    for (i = 0; i < CANT_ARTICULOS - 1; i++) {
        for (j = 0; j < CANT_ARTICULOS - 1 - i; j++) {
            if ((articulos + j)->total < (articulos + j + 1)->total) {
                aux = *(articulos + j);
                *(articulos + j) = *(articulos + j + 1);
                *(articulos + j + 1) = aux;
            }
        }
    }
    printf("\n\n###################################");
    printf("\n##############ORDENADO################");
    printf("\n################################### \n");
}
#include <stdio.h>
#include "funciones.h"

int main(void) {

    articulos_t articulos[CANT_ARTICULOS] = {0};

    printf("Bienvenidx al final de info 1\n\n");

    cargar_articulos(articulos);

    mostrar_articulos(articulos);

    ordenar_articulos(articulos);

    mostrar_articulos(articulos);

    return 0;
}
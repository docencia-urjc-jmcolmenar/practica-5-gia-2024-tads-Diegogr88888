//
// Created by Diego on 12/04/2024.
//

#include "arrayplustad.h"
#include <stdlib.h>
#include <stdio.h>

ArrayPlusTAD *creaArrayPlus(int tamanio){
    ArrayPlusTAD *miArrayPlus = (ArrayPlusTAD *)malloc(sizeof(ArrayPlusTAD));
    //Por si no hay memoria suficiente
    if (miArrayPlus == NULL) {
        printf("No se pudo asignar memoria para el ArrayPlusTAD.\n");
        return NULL;
    }
    miArrayPlus->array = (int *)malloc(tamanio * sizeof(int));
    //Por si no hay memoria suficiente
    if (miArrayPlus->array == NULL) {
        printf("No se pudo asignar memoria para el array interno del ArrayPlusTAD.\n");
        free(miArrayPlus);
        return NULL;
    }

    miArrayPlus->numNuevosElementos = 0;
    miArrayPlus->tamanio = tamanio;
    return miArrayPlus;
}


int anyadeElemento(ArrayPlusTAD *miArrayPlus, int elemento){
    if (miArrayPlus->numNuevosElementos >= miArrayPlus->tamanio) {
        printf("No hay espacio suficiente para añadir más elementos.\n");
        return -1;
    }
    miArrayPlus->array[miArrayPlus->numNuevosElementos] = elemento;
    miArrayPlus->numNuevosElementos++;
    return 0;
}


void anyadeArray(ArrayPlusTAD *miArrayPlus, int *arrayElementos, int numNuevosElementos){
    for (int i = 0; i < numNuevosElementos; i++) {
        if (miArrayPlus->numNuevosElementos >= miArrayPlus->tamanio) {
            printf("No hay espacio suficiente para añadir más elementos.\n");
        }
        miArrayPlus->array[miArrayPlus->numNuevosElementos] = arrayElementos[i];
        miArrayPlus->numNuevosElementos++;
    }
}

void imprimeArrayPlus(ArrayPlusTAD *miArrayPlus){
    for (int i = 0; i < miArrayPlus -> numNuevosElementos; ++i) {
        printf("%i ", miArrayPlus->array[i]);
    }
    printf("\n");
}


void vaciaArrayPlus(ArrayPlusTAD *miArrayPlus){
    miArrayPlus -> numNuevosElementos = 0;
}


void liberaArrayPlus(ArrayPlusTAD *miArrayPlus){
    free(miArrayPlus);
    
}


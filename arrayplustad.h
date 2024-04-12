//
// Created by Diego on 12/04/2024.
//

#ifndef PRACTICA_5_GIA_2024_TADS_DIEGOGR88888_ARRAYPLUSTAD_H
#define PRACTICA_5_GIA_2024_TADS_DIEGOGR88888_ARRAYPLUSTAD_H

typedef struct {
    int tamanio;
    int *array;
    int numNuevosElementos;
}ArrayPlusTAD;

ArrayPlusTAD *creaArrayPlus(int tamanio);

int anyadeElemento(ArrayPlusTAD *miArrayPlus, int elemento);

void anyadeArray(ArrayPlusTAD *miArrayPlus, int *arrayElementos, int numNuevosElementos);

void imprimeArrayPlus(ArrayPlusTAD *miArrayPlus);

void vaciaArrayPlus(ArrayPlusTAD *miArrayPlus);

void liberaArrayPlus(ArrayPlusTAD *miArrayPlus);


#endif //PRACTICA_5_GIA_2024_TADS_DIEGOGR88888_ARRAYPLUSTAD_H

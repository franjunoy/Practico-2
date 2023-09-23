#include <stdio.h>
#include <stdlib.h>
#include "pilaLista.h"

void apila(pila **pilaNuevo, int a){
    pila *pila1=(pila*) malloc(sizeof(pila));
        pila1->dato = *pilaNuevo;
        pila1->sgte = a;
        *pilaNuevo=pila1;
}
int desapila(pila **pilaNuevo){
    a=(*pilaNuevo)->dato;
    pila *pilaAux;
    if(estaVacia(pilaNuevo)==1){
        pilaAux=*pilaNuevo;
        *pilaNuevo=(*pilaNuevo)->sgte;
        free(pilaAux);
    }
    return a;
}






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
void vaciaPila(pila **pilaNuevo){
    pila *pilaAux;
    pilaAux=*pilaNuevo;
    while(pilaAux!=NULL){
        *pilaNuevo=(*pilaNuevo)->sgte;
        free(pilaAux);
        pilaAux=*pilaNuevo;
    }
}
int ntamao(pila *pilaNuevo){
    b=0;
    pila *pilaAux=pilaNuevo;
    while(pilaAux!=NULL){
        pilaAux=pilaAux->sgte;
        b++;
    }
    return b;
}
int estaVacia(pila **pilaNuevo){
   if(*pilaNuevo==NULL){
        return 0;
   }
   return 1;

}
int cima1(pila *pilaNuevo){
    return pilaNuevo->dato;
}



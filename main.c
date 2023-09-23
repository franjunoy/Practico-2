#include <stdio.h>
#include <stdlib.h>
#include "pilaLista.h"

void apila(pila **pilaNuevo, int a)
{
    pila *pila1 = (pila *)malloc(sizeof(pila));
    pila1->dato = *pilaNuevo;
    pila1->sgte = a;
    *pilaNuevo = pila1;
}
int desapila(pila **pilaNuevo)
{
    a = (*pilaNuevo)->dato;
    pila *pilaAux;
    if (estaVacia(pilaNuevo) == 1)
    {
        pilaAux = *pilaNuevo;
        *pilaNuevo = (*pilaNuevo)->sgte;
        free(pilaAux);
    }
    return a;
}
void vaciaPila(pila **pilaNuevo)
{
    pila *pilaAux;
    pilaAux = *pilaNuevo;
    while (pilaAux != NULL)
    {
        *pilaNuevo = (*pilaNuevo)->sgte;
        free(pilaAux);
        pilaAux = *pilaNuevo;
    }
}
int ntamao(pila *pilaNuevo)
{
    b = 0;
    pila *pilaAux = pilaNuevo;
    while (pilaAux != NULL)
    {
        pilaAux = pilaAux->sgte;
        b++;
    }
    return b;
}
int estaVacia(pila **pilaNuevo)
{
    if (*pilaNuevo == NULL)
    {
        return 0;
    }
    return 1;
}
int cima1(pila *pilaNuevo)
{
    return pilaNuevo->dato;
}
int main()
{
    pila *cima;
    cima = NULL;
    do
    {
        printf("Menu\n");
        printf("1) Agregar un elemento a la pila\n");
        printf("2) Eliminar y retornar el primer elemento\n");
        printf("3) Retornar el primer elemento sin eliminarlo\n");
        printf("4) Vaciar la pila\n");
        printf("5) Cantidad de elementos de la pila\n");
        printf("6) Saber si la pila tiene o no elementos\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese un elemento\n");
            scanf("%d", &ele);
            apila(&cima, ele);
            break;
        case 2:
            printf("Se elimino elemento: %d\n", desapila(&cima));
            break;
        case 3:
            printf("El primer elemento es: %d\n", cima1(&cima));
            break;
        case 4:
            vaciaPila(&cima);
            break;
        case 5:
            printf("Cantidad de elementos: %d\n", ntamao(cima));
        case 6:
            y = estaVacia(&cima);
            if (y == 0)
            {
                printf("La pila esta vacia\n");
            }
            else
            {
                printf("La pila tiene elementos\n");
            }
            break;
        default:
            printf("Opcion incorrecta\n");
        }
    } while (opcion != 0);
    return 0;
}
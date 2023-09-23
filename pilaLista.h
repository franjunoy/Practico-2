typedef struct nodo{
    int dato;
    struct nodo *sgte;
}pila;
void apila(pila **, int);
int desapila(pila **);
void vaciaPila(pila **);
int ntamao(pila *);
int estaVacia(pila **);
int cima1(pila *);
int opcion, a, b, ele, e, p, t, y;

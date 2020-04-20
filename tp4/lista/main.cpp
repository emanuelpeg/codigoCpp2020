#include <iostream>

using namespace std;

struct node {
    int nro;
    node* sig;
};

node * agregar(node * lista, int nroNuevo) {
    if (lista == NULL) {
        lista = new node;
        lista->nro = nroNuevo;
        lista->sig = NULL;
    } else {
        node * aux = lista;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = new node;
        aux->sig->nro = nroNuevo;
        aux->sig->sig = NULL;
    }
    return lista;
}

node * agregarPrincipio(node * lista, int nroNuevo) {
    if (lista == NULL) {
        lista = new node;
        lista->nro = nroNuevo;
        lista->sig = NULL;
    } else {
        node * aux = lista;
        lista = new node;
        lista->nro = nroNuevo;
        lista->sig = aux;
    }
    return lista;
}

node * remover(node * lista, int nro) {

        node * aux = lista;
        node * ant = NULL;
        while (aux != NULL) {
            if (aux->nro == nro) {
                if (ant ==NULL) {
                    lista = aux->sig;
                    delete aux;
                    aux = lista;
                } else {
                    ant->sig = aux->sig;
                    delete aux;
                    aux = ant->sig;
                }
            } else {
                ant = aux;
                aux = ant->sig;
            }
        }

    return lista;
}

int main()
{
    node * lista = agregar(NULL, 0);
    lista = agregar(lista, 1);
    lista = agregar(lista, 2);
    lista = agregar(lista, 3);
    lista = agregar(lista, 4);

    node * aux = lista;
    while (aux != NULL) {
        cout << aux->nro  <<  " ";
        aux = aux->sig;
    }

    cout << endl;

    lista = agregarPrincipio(lista, -1);

    aux = lista;
    while (aux != NULL) {
        cout << aux->nro  <<  " ";
        aux = aux->sig;
    }

    cout << endl;

    lista = remover(lista, -1);
    aux = lista;
    while (aux != NULL) {
        cout << aux->nro  <<  " ";
        aux = aux->sig;
    }

    cout << endl;

    lista = remover(lista, 3);
    aux = lista;
    while (aux != NULL) {
        cout << aux->nro  <<  " ";
        aux = aux->sig;
    }

    return 0;
}

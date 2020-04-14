#include <iostream>

using namespace std;

int * add(int * vec, int cant, int elemento) {
    int * vecAux = new int[cant+1];
    vecAux[cant] = elemento;

    for(int i = 0; i<cant; i++) {
        vecAux[i] = vec[i];
    }
    return vecAux;
}

int ocurrencia(int * vec, int cant, int elemento) {
    int j = 0;
    for(int i = 0; i < cant; i++) {
        if (vec[i] == elemento) {
            j++;
        }
    }
    return j;
}

int * remove(int * vec, int cant, int elemento, int &cantFinal) {
    int ocu = ocurrencia(vec, cant, elemento);
    int * vecAux = new int[cant-ocu];
    int j = 0;
    for(int i = 0; i < cant; i++) {
        if (vec[i] != elemento) {
            vecAux[j] = vec[i];
            j++;
        }
    }
    cantFinal = cant-ocu;
    return vecAux;
}

int main()
{
    int cant = 5;
    int * vec = new int[cant];
    vec[0] = 0;
    vec[1] = 4;
    vec[2] = 2;
    vec[3] = 3;
    vec[4] = 4;
    int * vec2 = add(vec, cant, 4);

    for (int i = 0; i<cant +1 ; i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;
    int cantFinal = 0;
    int * vec3 = remove(vec2, 6, 4, cantFinal);
    for (int i = 0; i<cantFinal ; i++) {
        cout << vec3[i] << " ";
    }

    return 0;
}

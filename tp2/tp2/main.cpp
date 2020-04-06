#include <iostream>

using namespace std;

// Función para dividir el array y hacer los intercambios
int divide(int *array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;

    pivot = array[start];
    left = start;
    right = end;

    // Mientras no se cruzen los índices
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }

        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }

        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }

    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;

    // La nueva posición del pivot
    return right;
}

// Función recursiva para hacer el ordenamiento
void quicksort(int *array, int start, int end)
{
    int pivot;

    if (start < end) {
        pivot = divide(array, start, end);

        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);

        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
}

int mayorAux(int * vector, int indice , int cantidad, int mayor) {
    if (indice == cantidad) {
        return mayor;
    } else {
        if (vector[indice] > mayor) {
            return mayorAux(vector, indice +  1, cantidad,  vector[indice]);
        } else {
            return mayorAux(vector, indice +  1, cantidad,  mayor);
        }
    }
}

int mayor(int * vector, int cantidad) {
    return mayorAux(vector,0,cantidad,0);
}

int mayorOtraVersion(int * vector, int cantidad) {
    if (cantidad == 1) {
        return vector[0];
    } else {
        int mayorDelResto = mayorOtraVersion(vector, cantidad - 1);
        if (vector[cantidad -1] > mayorDelResto) {
            return vector[cantidad -1];
        } else {
            return mayorDelResto;
        }
    }
}

int acumularAux(int * vector, int indice , int cantidad, int acumulado) {
    if (indice == cantidad) {
        return acumulado;
    } else {
         return acumularAux(vector, indice +  1, cantidad,  acumulado + vector[indice]);
    }
}

int acumular(int * vector, int cantidad) {
    return acumularAux(vector, 0 , cantidad, 0);
}

int trianguloDePascal(int fila, int columna) {
    if (fila <= 0 || columna <= 0 || columna > fila) {
        return 0;
    } else {
        if (fila == 1 && columna == 1) {
            return 1;
        } else {
            return trianguloDePascal(fila-1, columna) + trianguloDePascal(fila-1, columna-1);
        }
    }
}

void trasponerAux(int * vector, int indice, int cantidad) {
    if (indice == cantidad / 2) {
        return;
    } else {
        int aux = vector[indice];
        vector[indice] = vector[(cantidad - 1) - indice];
        vector[(cantidad - 1) - indice] = aux;
        trasponerAux(vector, indice + 1, cantidad);
    }
}

void trasponer(int * vector, int cantidad) {
    trasponerAux(vector, 0 , cantidad);
}

bool palindromoAux(int * vector, int indice, int cantidad) {
    if (indice == cantidad / 2) {
        return true;
    } else {
        if (vector[indice] == vector[(cantidad - 1) - indice]) {
            return palindromoAux(vector, indice + 1, cantidad);
        } else {
            return false;
        }
    }
}

bool palindromo(int * vector, int cantidad) {
    return palindromoAux(vector, 0, cantidad);
}

int * concatenarAux(int * vector, int cantidad, int* vector2, int cantidad2, int* vector3, int indice) {
    if (indice == cantidad + cantidad2) {
        return vector3;
    } else {
        if (indice < cantidad) {
            vector3[indice] = vector[indice];
        } else {
            vector3[indice] = vector2[indice-cantidad];
        }
        return concatenarAux (vector, cantidad, vector2, cantidad2, vector3, indice+1);
    }
}

int * concatenar(int * vector, int cantidad, int* vector2, int cantidad2) {
    int * vector3 = new int[cantidad +cantidad2];
    return concatenarAux (vector, cantidad, vector2, cantidad2, vector3, 0);
}

int main(int argc, char *argv[])
{
    int vector[] = { 4, 10, 12, 5, 6, 7, 8, 11, 2, 3 };
    quicksort(vector, 0, 9);

    cout << endl << "Vector Ordenado :";
    for (int i = 0; i < 10; i++) {
        cout << vector[i] << " ";
    }

    trasponer(vector, 10);
    cout << endl << "Vector Ordenado alrreves :";
    for (int i = 0; i < 10; i++) {
        cout << vector[i] << " ";
    }

    int vector2[] = { 4, 10, 12, 5, 6, 7, 11, 2, 3 };
    trasponer(vector2, 9);
    cout << endl << "Vector Ordenado alrreves :";
    for (int i = 0; i < 9; i++) {
        cout << vector2[i] << " ";
    }

    cout << endl << "mayor :" << mayor(vector, 10) << endl;
    cout << endl << "mayor :" << mayorOtraVersion(vector, 10) << endl;
    cout << endl << "acumulado :" << acumular(vector, 10) << endl;

    cout << endl << "----------------------------------------------" ;
    cout << endl << "Triangulo de Pascal :" << endl;

    for (int i = 1; i < 10; i ++) {
        for (int j = 1; j <= i; j++) {
            cout << trianguloDePascal(i, j) << " ";
        }
        cout << endl;
    }
    int vector3[] = { 1,2,3,2,1 };
    cout << endl << "vector2 es palindromo? :" << palindromo(vector2, 9);
    cout << endl << "vector3 es palindromo? :" << palindromo(vector3, 5);
    cout << endl << "concatenar vector2 + vector3 :";
    int * vector4 = concatenar(vector2, 9, vector3, 5);
    for (int i = 0; i < 14; i++) {
        cout << vector4[i] <<  " , ";
    }
    cout << endl << "concatenar vector + vector2 :";
    int * vector5 = concatenar(vector, 10, vector2, 9);
    for (int i = 0; i < 19; i++) {
        cout << vector5[i] <<  " , ";
    }
    cout << endl;
    return 0;
}

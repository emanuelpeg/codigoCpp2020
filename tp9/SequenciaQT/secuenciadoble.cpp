#include "secuenciadoble.h"
#include <stdlib.h>
#include <time.h>


secuenciadoble::secuenciadoble(): Secuencia()
{

}

void secuenciadoble::generar() {
    srand(time(NULL));
    int numero = (rand() % 60)*4;
    for (int i = 0; i < 4; i++) {
        this->nros[i] = numero * 2;
    }
}

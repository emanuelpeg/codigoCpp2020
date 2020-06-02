#include <stdlib.h>
#include <time.h>
#include "secuenciaimpar.h"

SecuenciaImpar::SecuenciaImpar(): Secuencia()
{
}

void SecuenciaImpar::generar() {
    srand(time(NULL));
    int impar = ((rand() % 50) * 2) + 1 ;
    for (int i = 0; i < 4; i++) {
        this->nros[i] = impar + (i * 2);
    }
}

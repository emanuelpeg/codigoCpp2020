#include <stdlib.h>
#include <time.h>
#include "secuencialoca.h"

SecuenciaLoca::SecuenciaLoca(): Secuencia()
{
}

void SecuenciaLoca::generar() {
    srand(time(NULL));
    int loca = ((rand() % 50) * 1.5);
    for (int i = 0; i < 4; i++) {
        this->nros[i] = loca + (i * -8);
    }
}

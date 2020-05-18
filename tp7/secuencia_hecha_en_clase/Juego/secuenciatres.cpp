#include <stdlib.h>
#include <time.h>
#include "secuenciatres.h"

Secuenciatres::Secuenciatres() : Secuencia()
{
}

void Secuenciatres::generar() {
    srand(time(NULL));
    int tres = (rand() % 50) * 3;
    for (int i = 0; i < 4; i++) {
        this->nros[i] = tres + (i * 3);
    }
}

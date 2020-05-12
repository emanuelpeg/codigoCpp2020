#include <stdlib.h>
#include <time.h>
#include "secuenciapar.h"

SecuenciaPar::SecuenciaPar() : Secuencia()
{
}

void SecuenciaPar::generar() {
    srand(time(NULL));
    int par = (rand() % 50) * 2;
    for (int i = 0; i < 4; i++) {
        this->nros[i] = par + (i * 2);
    }
}

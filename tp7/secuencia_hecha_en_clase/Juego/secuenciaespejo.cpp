#include <stdlib.h>
#include <time.h>
#include "secuenciaespejo.h"

secuenciaespejo::secuenciaespejo() : Secuencia()
{
}

void secuenciaespejo::generar() {
    this->nros[0] = 68;
    this->nros[1] = 88;
    this->nros[2] = 78;
    this->nros[3] = 98;
}

#include <stdlib.h>
#include <time.h>
#include "nuevasecuencia.h"

nuevaSecuencia::nuevaSecuencia()
{

}

void nuevaSecuencia::generar()
{
    //x*x + 2*x + 1
    //By ExeMarichal
    srand(time(NULL));
    int sec = (rand() % 20);
    for (int i = 0; i < 4; i++) {
        this->nros[i] = (sec*sec) + (2 * sec) + 1;
        sec ++;
    }

}

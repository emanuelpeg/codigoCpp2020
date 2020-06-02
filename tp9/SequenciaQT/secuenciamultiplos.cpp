#include "secuenciamultiplos.h"
#include "secuencia.h"
#include "time.h"
#include "stdlib.h"
#include "math.h"

secuenciamultiplos::secuenciamultiplos()
{

}

void secuenciamultiplos::generar(){
    srand(time(NULL));
       int val = (rand() % 100);
       for(int i = 0; i<4; i++){
           nros[i] = (val+i)*8;
       }
}

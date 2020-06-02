#include "multiplode3.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

MultiploDe3::MultiploDe3()
{

}
//Multiplo de 3 elevado al cuadrado
void MultiploDe3::generar(){
    srand(time(NULL));
    int par = (rand() % 100);

    for(int i = 0; i<4; i++){
        nros[i] = par + (pow(i*3,2));
    }
}


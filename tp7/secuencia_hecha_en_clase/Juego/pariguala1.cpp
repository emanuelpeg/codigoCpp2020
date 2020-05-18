#include "pariguala1.h"
#include <stdlib.h>
#include <time.h>

ParIgualA1::ParIgualA1()
{

}

void ParIgualA1::generar(){
    srand(time(NULL));
    int sec = (rand() % 100);

    for(int i = 0; i<4; i++){

        //Si es posicion par el valor es = 1 sino el valor es igual
        //al valor aleatorio
        if(i % 2 == 0){
            nros[i] = 1;
        }else{
            nros[i] = sec;
        }
    }

}

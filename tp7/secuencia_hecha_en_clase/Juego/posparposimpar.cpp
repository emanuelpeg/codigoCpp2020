#include "posparposimpar.h"
#include <stdlib.h>
#include <time.h>

PosParPosImpar::PosParPosImpar()
{

}

void PosParPosImpar::generar(){
    srand(time(NULL));
    int sec = (rand() % 100);
    int num;

    for(int i = 0; i<4; i++){
        num = sec*i;
        //Si es par multiplica el numero random
        //por 2 sino lo multiplica por 3
        if(num % 2 == 0){
            nros[i] = sec + i*2;
        }else{
            nros[i] = sec + i*3;
        }
    }
}

#include "decrementoen3.h"
#include <stdlib.h>
#include <time.h>

DecrementoEn3::DecrementoEn3()
{

}

void DecrementoEn3::generar(){
    srand(time(NULL));
    int sec = (rand() % 100);

    for(int i = 0; i<4; i++){
        //Decremento de 3
        nros[i] = sec;
        sec += -3;
    }

}

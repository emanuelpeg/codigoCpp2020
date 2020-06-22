#ifndef LUGARCONTENEDOR_H
#define LUGARCONTENEDOR_H
#include "lugar.h"
#include <iostream>

class LugarContenedor : public Lugar
{
private:
    int cantidad = 0;
    int cantMaxima = 0;
    Lugar ** lugares = NULL;
public:
    LugarContenedor(char * nombre, int cantMaxima);
    int getHabitantes();
    bool addLugar(Lugar * lugar);
};

#endif // LUGARCONTENEDOR_H

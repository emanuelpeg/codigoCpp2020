#ifndef LUGARSIMPLE_H
#define LUGARSIMPLE_H
#include "lugar.h"
#include <iostream>

class LugarSimple: public Lugar
{
private:
    int habitantes = 0;
public:
    LugarSimple(char * nombre, int habitantes);
    int getHabitantes();
    void setHabitantes(int habitantes);
    friend std::ostream& operator << (std::ostream& out, const LugarSimple &ls);
};

#endif // LUGARSIMPLE_H

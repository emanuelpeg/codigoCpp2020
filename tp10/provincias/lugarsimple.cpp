#include "lugarsimple.h"

LugarSimple::LugarSimple(char * nombre, int habitantes) : Lugar(nombre)
{
    this->habitantes = habitantes;
}

int LugarSimple::getHabitantes() {
    return this->habitantes;
}

void LugarSimple::setHabitantes(int habitantes) {
    this->habitantes = habitantes;
}

std::ostream& operator << (std::ostream& out, const LugarSimple &ls) {
    out << (char)toupper(ls.nombre[0]);
    out << (char)toupper(ls.nombre[1]);
    out << (char)toupper(ls.nombre[2]);
    return out;
}

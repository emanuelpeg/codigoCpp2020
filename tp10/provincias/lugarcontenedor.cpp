#include "lugarcontenedor.h"

LugarContenedor::LugarContenedor(char * nombre, int cantMaxima) : Lugar(nombre)
{
    this->cantMaxima = cantMaxima;
}

int LugarContenedor::getHabitantes() {
    int acu = 0;
    for (int i = 0; i < this->cantidad; i++) {
        acu = acu + this->lugares[i]->getHabitantes();
    }
    return acu;
}

bool LugarContenedor::addLugar(Lugar * lugar) {
    if (this->cantidad < this->cantMaxima) {

        Lugar ** aux = new Lugar*[this->cantidad + 1];

        for (int i = 0; i < cantidad; i++) {
            aux[i] = this->lugares[i];
        }

        aux[cantidad] = lugar;
        delete [] this->lugares;
        this->lugares = aux;
        this->cantidad++;

        return true;
    }
    return false;
}

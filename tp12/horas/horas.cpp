#include "horas.h"

Horas::Horas(long dni, int cantidadHs)
{
    this->dni = dni;
    this->cantidadHs = cantidadHs;
}

long Horas::getDNI(){
    return this->dni;
}

int Horas::getCantHs() {
    return this->cantidadHs;
}

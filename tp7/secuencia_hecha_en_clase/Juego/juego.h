#ifndef JUEGO_H
#define JUEGO_H
#include "secuencia.h"
#include <iostream>

class Juego
{
private:
    int puntaje = 0;
    Secuencia * s = NULL;
public:
    Juego();
    void crearSecuencia();
    int getPrimero();
    int getSegundo();
    int getCuarto();
    int getPuntaje();
    bool isOk(int valor);
};

#endif // JUEGO_H

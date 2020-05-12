#include <stdlib.h>
#include <time.h>
#include "juego.h"
#include "secuenciapar.h"
#include "secuenciaimpar.h"


Juego::Juego()
{

}

void Juego::crearSecuencia(){
    if (this->s != NULL) delete this->s;

    srand(time(NULL));
    int semilla = (rand() % 2);
    switch (semilla) {
    case 0 :
            this->s = new SecuenciaPar();
            break;
    case 1 :
        this->s = new SecuenciaImpar();
        break;
    }
    s->generar();
}

int Juego::getPrimero() {
    return this->s->getNros()[0];
}

int Juego::getSegundo(){
    return this->s->getNros()[1];
}

int Juego::getCuarto(){
    return this->s->getNros()[3];
}

int Juego::getPuntaje(){
    return this->puntaje;
}

bool Juego::isOk(int valor) {
    int v3 = this->s->getNros()[2];
    if (v3 == valor) {
        this->puntaje++;
        return true;
    } else {
        this->puntaje--;
        return false;
    }
}

#include <stdlib.h>
#include <time.h>
#include "juego.h"
#include "secuenciapar.h"
#include "secuenciaimpar.h"
#include "nuevasecuencia.h"
#include "secuencialoca.h"
#include "secuenciamultiplos.h"
#include "secuenciadoble.h"
#include "posparposimpar.h"
#include "pariguala1.h"
#include "decrementoen3.h"
#include "multiplode3.h"
#include "secuenciaespejo.h"
#include "secuenciatres.h"


Juego::Juego()
{

}

void Juego::crearSecuencia(){
    if (this->s != NULL) delete this->s;

    srand(time(NULL));
    int semilla = (rand() % 13);
    switch (semilla) {
    case 0 :
            this->s = new SecuenciaPar();
            break;
    case 1 :
        this->s = new SecuenciaImpar();
        break;
    case 2 :
        this->s = new Secuenciatres();
        break;
    case 3 :
        this->s = new secuenciamultiplos();
        break;
    case 4 :
        this->s = new secuenciadoble();
        break;
    case 5 :
        this->s = new PosParPosImpar();
        break;
    case 6 :
        this->s = new ParIgualA1();
        break;
    case 7 :
        this->s = new DecrementoEn3();
        break;
    case 8 :
        this->s = new MultiploDe3();
        break;
    case 9 :
        this->s = new secuenciaespejo();
        break;
    case 10 :
        this->s = new Secuenciatres();
        break;
    case 11 :
        this->s = new SecuenciaLoca();
        break;
    default:
        this->s = new nuevaSecuencia();
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

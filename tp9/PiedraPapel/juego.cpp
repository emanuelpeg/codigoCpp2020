#include "juego.h"
#include <stdlib.h>
#include <time.h>

Juego::Juego()
{

}

/**
 * Parametro:
 * 0.Piedra
 * 1.Papel
 * 2.Tijera
 *
 * Resultado:
 * 0. Empate
 * 1. Gano
 * 2. Perdio
 */
int Juego::verificar(int valor) {
    srand(time(NULL));
    int valorCompu = rand() % 3;
    int resultado = 0;
    if (valor != valorCompu) {
        if (valor == 0 && valorCompu == 1){
            resultado = -1;
        } else {
            if (valor == 0 && valorCompu == 2) {
                resultado = 1;
            } else {
                if (valor == 1 && valorCompu == 2) {
                    resultado = -1;
                } else {
                    if (valor == 1 && valorCompu == 0) {
                        resultado = 1;
                    } else {
                        if (valor == 2 && valorCompu == 0) {
                            resultado = -1;
                        } else {
                            if (valor == 2 && valorCompu == 1) {
                                resultado = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    this->puntaje = this->puntaje + resultado;
    return resultado;
}

int Juego::getPuntaje(){
    return this->puntaje;
}

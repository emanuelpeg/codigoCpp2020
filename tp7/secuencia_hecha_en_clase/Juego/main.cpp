#include <iostream>
#include "juego.h"

using namespace std;

int main()
{
    Juego j;
    j.crearSecuencia();
    while (true) {
        cout << j.getPrimero() << "  " << j.getSegundo() << " ___ " << j.getCuarto() << endl;
        int valor = 0;
        cin >> valor;

        if (j.isOk(valor)) {
            cout << "Ganaste! Puntaje : "<< j.getPuntaje() << endl;
        } else {
            cout << "Perdiste! Puntaje : "<< j.getPuntaje() << endl;
        }
        cout << "Queres jugar denuevo ? S/N " << endl;
        char v;
        cin >> v;
        if (v == 'n') { break; }
        else {
            j.crearSecuencia();
        }
    }

    return 0;
}

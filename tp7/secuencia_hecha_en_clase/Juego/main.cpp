#include <iostream>
#include "juego.h"

using namespace std;

int main()
{   char v;
    Juego j;
    j.crearSecuencia();
    do  {
        cout << j.getPrimero() << "  " << j.getSegundo() << " ___ " << j.getCuarto() << endl;
        int valor = 0;
        cin >> valor;

        if (j.isOk(valor)) {
            cout << "Ganaste! Puntaje : "<< j.getPuntaje() << endl;
        } else {
            cout << "Perdiste! Puntaje : "<< j.getPuntaje() << endl;
        }
        cout << "Queres jugar denuevo ? S/N " << endl;

        cin >> v;
        if (v == 'n') j.crearSecuencia();
    } while (v != 'n');


    return 0;
}

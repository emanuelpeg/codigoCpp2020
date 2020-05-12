#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f = Fraccion(55, 10);
    double d = f.mostrarFraccion();
    cout << d << endl;
    cout << f.suma(Fraccion(3)) << endl;
    cout << f.resta(Fraccion(3)) << endl;
    cout << f.suma(Fraccion(1,2)) << endl;
    if (f == (Fraccion(55, 10))) cout << "Igual" << endl;
    else cout << "Diferente" << endl;
    return 0;
}


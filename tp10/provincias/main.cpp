#include <iostream>
#include "lugarsimple.h"
#include "lugar.h"
#include "lugarcontenedor.h"


using namespace std;

int main()
{
    LugarContenedor * pais = new LugarContenedor("Arg", 23);
    LugarContenedor * entreRios = new LugarContenedor("Entre Ríos", 50);
    LugarContenedor * parana = new LugarContenedor("Parana", 30);

    LugarSimple * crespo = new LugarSimple("Crespo", 500000);
    parana->addLugar(crespo);
    parana->addLugar(new LugarSimple("Oro verde", 100000));
    parana->addLugar(new LugarSimple("Parana", 1000000));

    entreRios->addLugar(parana);

    LugarContenedor * diamante = new LugarContenedor("Diamante", 30);
    diamante->addLugar(new LugarSimple("Diamante", 400000));
    diamante->addLugar(new LugarSimple("Ramirez", 300000));
    entreRios->addLugar(diamante);

    pais->addLugar(entreRios);

    cout << "Habitantes totales : " << pais->getHabitantes() << endl;
    cout << *crespo << endl;
    return 0;
}

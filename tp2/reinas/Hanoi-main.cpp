#include <QCoreApplication>
#include <iostream>

using namespace std;

//Algoritmo
/* void jugarHanoi(nDiscos,Origen,Destino,Auxiliar)
 * Si (nDiscos>0)
 *      jugarHanoi(nDiscos-1,Origen,Auxiliar,Destino)
 *      cout << "Llevar el disco " << nDiscos << " desde ";
 *      cout << Origen << " a " << Destino;
 *      jugarHanoi(nDiscos-1,Auxiliar,Destino,Origen)
 */

void jugarHanoi(int nDiscos,int Origen,int Destino,int Auxiliar)
{if (nDiscos>0){
       jugarHanoi(nDiscos-1,Origen,Auxiliar,Destino);
       cout << "Llevar el disco " << nDiscos << " desde ";
       cout << Origen << " a " << Destino<<endl;
       jugarHanoi(nDiscos-1,Auxiliar,Destino,Origen);}
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    jugarHanoi(4,1,3,2);
    return a.exec();
}




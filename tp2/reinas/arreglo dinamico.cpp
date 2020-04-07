#include <QCoreApplication>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*Crear un arreglo dinamico
 * Crear un puntero del tipo de la futura estructura
 * Tomar un área de memoria
 * Guardar la dirección en una variable puntero
 * Usar
 * Destruir */


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int *pInt; int tamanio;

    cout<<"Ingrese el tamaño del arreglo:";
    cin>>tamanio;
    cout << endl;

    pInt=new int[tamanio];

    for(int i=0;i<tamanio;i++)
        pInt[i]=rand()%901+100;
    //*(pInt+i)=rand(900)+100;

    for(int i=0;i<tamanio;i++)
        cout << pInt[i] << "-";

    delete []pInt;


    return a.exec();
}

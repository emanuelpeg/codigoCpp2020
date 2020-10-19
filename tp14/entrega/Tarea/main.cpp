#include <iostream>
#include <fstream>
#include "gestor.h"

using namespace std;
int main(){
    Gestor g;

    cout<<"Listado de Tweets por Hashtag\n";
    g.ordenar();

    cout<< endl;

    g.listarUsuarios();


    string t, info;
    cout<<"Ingrese tweet: "; getline(cin, t);
    cout<<"Ingrese una imagen, url o tweet: "; getline(cin, info);

    g.agregarInfo(t, info);

    cout<< "\nTweets: \n";
    for(auto i= g.ListadoTweets.begin(); i!= g.ListadoTweets.end(); ++i){
        cout<< i->getTexto()<< endl;
    }

    system("pause");
    system("cls");
    cout<<"PROGRAMA FINALIZADO\n";
    return 0;
}

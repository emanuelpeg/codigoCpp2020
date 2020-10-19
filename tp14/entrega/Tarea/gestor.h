#ifndef GESTOR_H
#define GESTOR_H

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include "tweet.h"

using namespace std;

map <string,int>Tweet::hashtahR;
map <string,string> Tweet::TodosLosTweets;

struct Registro{
    int id;
    char nombre_usuario[100];
    char tweet[140];
    char hashtag[100];
};

class Gestor{

private:

    vector <string> usuariosR;
    string hashtagmasR;
    vector <pair<string,int>> hashtagsOrd;

public:

    vector<Tweet>ListadoTweets;

    Gestor(){ /// EJERCICIO 1)
        ifstream archivo;
        archivo.open("tweet.dat", ios::binary);

        if((archivo.is_open())){
            Registro *p= (Registro *) malloc(sizeof (Registro));
            while(archivo.read((char *)p, sizeof(Registro))){

                Tweet t(p->id,p->nombre_usuario, p->tweet, p->hashtag);


                p= (Registro *) malloc(sizeof (Registro));

                ListadoTweets.push_back(t);

            }
            archivo.close();
        }

    }
    void ordenar(){ /// EJERCICIO 2)
        vector <pair<string,int>>v(Tweet::hashtahR.begin(),Tweet::hashtahR.end());
        sort(v.begin(),v.end(),[](pair<string,int>j,pair<string,int>k)->bool{return j.second>k.second;});

        for(auto i=v.begin();i!=v.end();++i){
            hashtagsOrd.push_back(*i);
            cout<<i->first<<" "<<i->second<<endl;
        }
    }
    void listarUsuarios(){ /// EJERCICIO 3)
        string masR;
        masR=hashtagsOrd.front().first;
        string auxiliar1;
        int auxiliar2;
        for(auto i=Tweet::TodosLosTweets.begin();i!=Tweet::TodosLosTweets.end();++i){
            if((auxiliar2=i->second.find(masR))!=-1){
                auxiliar1=i->first.substr(1,i->first.size());
                usuariosR.push_back(auxiliar1);
            }
        }
        ofstream archivo;
        archivo.open("usuarios.txt");
        for(auto j=usuariosR.begin();j!=usuariosR.end();++j){
            archivo<<*j<<endl;
        }
    }


    void agregarInfo(string tweet, string  info){ /// EJERCICIO 4)

        for(auto i= ListadoTweets.begin(); i!= ListadoTweets.end(); ++i){
            if(i->getTexto() == tweet){
                i->setInfo(info);
                return;
            }

        }

    }

};
#endif // GESTOR_H

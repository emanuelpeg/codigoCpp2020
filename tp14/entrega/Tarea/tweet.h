#ifndef TWEET_H
#define TWEET_H

#include <iostream>
#include <map>
#include <string.h>
#include <vector>
#include <string.h>

using namespace std;


class Tweet{
private:
    int id;
    char* usuario;
    char *texto;
    char *hashtag;



public:


    static map<string, string> TodosLosTweets;
    static map<string,int> hashtahR;

    Tweet(int _id, char *_usuario, char *_texto, char *_hashtag){
        id= _id;
        usuario= _usuario;
        texto= _texto;
        hashtag= _hashtag;
        TodosLosTweets.insert(pair<string, string>(usuario,hashtag));
        char *prtToken;
        string auxiliar;
        prtToken=strtok(_hashtag,",");
        while(prtToken!=NULL){
            ++hashtahR[prtToken];
            prtToken=strtok(NULL,",");
        }
    }


    string getTexto(){
        return texto;
    }

    void setInfo(string info){
        strcat(texto, " / ");
        strcat(texto, info.c_str());
    }

};
#endif // TWEET_H

#ifndef ACOES_H
#define ACOES_H

#include "libraries.h"
#include "base.h"

//Os com (string) são os nomes dos personagens 
static bool flag = false;

void flags(){
    if (!flag) {cout<<endl; flag=true;}
}

void dialogo(string falou, string para, string mensagem, string modo){
    flags();
    cout<<"$"<<falou<<">>"<<para<<" ["<<modo<<"]: "<<'"'<<mensagem<<'"';
    cin.get();
}

void descricao(string fez, string paragrafo){
    flags();
    cout<<"$"<< fez <<">> "<< paragrafo;
    cin.get();
}

void paragrafo(string descricao){
    if (flag) {cout<<endl; flag=false;}
    cout<<"\t"<<descricao;
    cin.get();
}

void pensamento(string pessoa, string pensou){
    flags();
    cout<<"$"<<pessoa<<"<< \""<<pensou<<"\"";
    cin.get();
}

#endif
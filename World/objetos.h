#ifndef OBJETOS_H
#define OBJETOS_H

#include "libraries.h"
#include "base.h"

using namespace std;


struct assento{
    bool vazia;
    pessoa* sentada;

    assento(){
        vazia=true;
        sentada=NULL;
    }

    bool sentar(bool forcar, pessoa* ocupante){
        if (vazia) {vazia=false;  return true;}
        else if (forcar) {sentada = ocupante; return true;}
        else return false;
    }

    void sair(pessoa* ocupante){
        if (!vazia && ocupante==sentada){
            sentada=NULL;
            vazia=true;
        }
    }
};

struct cigarro{
    bool aceso;

    cigarro(){
        aceso=false;
    }

    void acender(char* modo, string nome){
        printf("%s acendeu o cigarro com %s\n", nome, modo);
    }
};

struct porta{
    bool trancado;

    porta(){
        trancado=true;
    }

    bool abrir(bool chave, string pessoa){
        if (chave || trancado) {printf("%s abriu a porta", pessoa); return true;}
        else printf("A passagem esta trancada.");
        return false;
    }

    void trancar(){
        trancado=true;
    }
};

struct cardapio{
    int quantidade;
    vector <string> comida;

    cardapio(){
        quantidade=0;
    }

    cardapio(int q, string itens[]){
        quantidade=q;
        for (int i=0;i<q;i++){
            comida.push_back(itens[i]);
        }
    }
};

struct colher{
    objetos propriedades;

    colher(){
        propriedades.resistencia=13;
        propriedades.tamanho=0.15;
    }

    void comer(pessoa* a, char* comida){
        
    }
};


#endif
#ifndef DROIDE_H
#define DROIDE_H

#include "libraries.h"
#include "base.h"
#include "acoes.h"
#include "agents.h"

class droide{
    public: pessoa identidade;
    vector<pessoa> lista;

    public:
    droide(int v, string s){
        identidade.change(v,s);
    }

    void uptade(vector<pessoa> newl){
        lista=newl;
    }

    bool apreehend(int a){
        for (int i=0; i<lista.size();i++){
            if (lista[i].ridade()==a) return true;
        }
        descricao(identidade.rnome(),"NAO ENCONTRADO NINGUEM EM FACHA ETARIA");
        return false;
    }

    bool apreehend(string a){
        for (int i=0; i<lista.size();i++){
            if (lista[i].rnome()==a) return true;
        }
        descricao(identidade.rnome(),"NAO ENCONTRADO NINGUEM COM ESSE NOME");
        return false;
    }
};

#endif
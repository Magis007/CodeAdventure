#ifndef PLACE_H
#define PLACE_H

#include "libraries.h"
#include "base.h"
#include "objetos.h"


class dinner{
    int pessoas;
    bool aberto;
    bool iluminado;
    cardapio menu;
    pessoa* dono;
    
    public:
        dinner(pessoa* alguem, string lista[], int quantidade){
            pessoas=int(random()%13+3);
            aberto=true;
            iluminado=true;
            dono=alguem;

            menu.quantidade=quantidade;
            for(int i=0;i<quantidade;i++){
                menu.comida.push_back(lista[i]);
            }
        }

        void apagar(pessoa* alguem){
            if (alguem==dono) iluminado=false;
        }

        bool pedido(string ordem){
            bool erro=true;
            bool flag=true;
            for(int j=0; j<menu.quantidade; j++){
                if (ordem==menu.comida[j]) {
                    cout<<"Foi feito um pedido de "<<menu.comida[j]<<".\n"; 
                    flag=false; 
                    break;
                }
            }
            if (flag) erro=false;
            return erro;
        }

        int inside(){return pessoas;}
};


#endif
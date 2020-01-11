#ifndef BASE_H
#define BASE_H

#include "libraries.h"



class pessoa{
    string nome;
    int idade;
    bool viva;

    public:
        pessoa(){
            nome =  string("");
            idade = 0;
            viva=true;
        }

        pessoa(int valor, string identidade){
            nome =  string(identidade);
            idade=  valor;
            viva = true;
        }

        void change(int valor, string identidade){
            nome =  string(identidade);
            idade=  valor;
            viva = true;
        }

        bool kill(int damage){
            if (damage>=random()%100){
                viva=false;
                return true;
            }
            return false;
        }

        void mensagem(string mensagem){
            cout<<mensagem;
            getchar();
        }

        string rnome(){
            return this->nome;
        }

        int ridade(){
            return this->idade;
        }
};

struct objetos{
    string name;
    int resistencia;
    float tamanho;

    objetos(int r, float t, string s){
        tamanho=t;
        resistencia=r;
        name="";
    }

    objetos(){
        tamanho=0;
        resistencia=0;
    }

    void change(int r, float t, string s){
        tamanho=t;
        resistencia=r;
        name=s;
    }
};

#endif
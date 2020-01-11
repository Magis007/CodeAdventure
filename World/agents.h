#ifndef AGENTS_H
#define AGENTS_H

#include "libraries.h"
#include "base.h"
#include "acoes.h"

struct pointers{
    int* I;
    float* F;
    double* D;
    string S;
    char* C;

    ~pointers(){
        if (I!=NULL) delete I;
        if (F!=NULL) delete F;
        if (D!=NULL) delete D;
        if (C!=NULL) delete C; 
    }
};

struct bitcorder{
    fstream conversa;
    string escuta;
    string reprodutor;
    string lugar;    
};

class agents{
    public: pessoa identidade;
    vector <objetos> memoria;
    map <string,int> armazenamento;
    bitcorder stream;
    bool drivers[3];
    public: pointers gem;

    public:
    agents(int idade, string nome, bool gl[3]){
        identidade.change(idade, nome);
        memset(drivers,false,3);
        drive(gl);
    }

    void drive(bool gl[3]){
        drivers[0]=gl[0];
        drivers[1]=gl[1];
        drivers[2]=gl[2];
    }

    void roubar(int,string);
    int acesso(string);
    void wiretap(string, string,string);
    void type(string);
    void absorb(string, objetos[], int);

    string tocar(){return stream.lugar;}

    void point_s(string s){
        descricao(identidade.rnome(),"De seu bolso, tirou-se uma bola metalica que comecou a brilhar.");
        cout<<gem.S<<">> Gerou uma seta do seu interior apontando para "<<s;
        cin.get();
    }

    void pop(){
        descricao(identidade.rnome(), "Um buraco abriu da palma de sua mao e de la saiu um objeto em alta velocidade");
        cout<<memoria.back().name<<" foi lançado.";
        memoria.pop_back();
    }
};

void agents::roubar(int valor, string lugar){
    armazenamento[lugar]=valor;
    descricao(identidade.rnome(),"Sabe agora que: ");
    cout<<"\t"<<valor<<" "<<lugar<<endl;
    cin.get();
}

int agents::acesso(string s){
    return armazenamento[s];
}

void agents::wiretap(string a, string b, string c){
    cout<<"Uma escuta foi criada em/na/no "<<a<<endl;
    string s="flavor/";
    s.append(c);
    stream.conversa.open(s, ios_base::out);
    stream.lugar=s;
    cout<<"A conversa esta sendo gravada em/na/no "<<b;
    stream.escuta=a;
    stream.reprodutor=b;
    stream.conversa.close();
    cin.get();
}

void read(string local){
    char c;
    fstream file;
    cout<<endl;
    file.open(local,fstream::in);
    while(file.get(c)) cout<<c;
    file.close();
    cin.get();
    cout<<endl;
}

void agents::type(string s){
    stream.conversa.open(stream.lugar, ios_base::app);
    for(int i=0;i<s.size();i++){
        stream.conversa.put(s[i]);
    }
    stream.conversa.close();
}

void agents::absorb(string s, objetos a[], int amount){
    cout<<"Tocando nos "<<s<<" eles entram em buracos na sua mao espaguetificando-se\n";
    for(i=0;i<amount;i++) memoria.push_back(a[i]);
    cout<<"O corpo de "<<identidade.rnome()<<" se sente mais pesado";
    cin.get();
}

#endif
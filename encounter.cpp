#include "World/libraries.h"
#include "World/agents.h"
#include "World/acoes.h"
#include "World/base.h"
#include "World/place.h"
#include "World/objetos.h"
#include "World/droide.h"


#include "Unicos/First.h"

#define death 0;

void sinopse();
void setup();
void read(string);
bool YN(string);

void testes(){

}

int main(){ 
    setup();
    
    testes();
    sinopse();

    read("Unicos/art.txt"); 
    cout<<endl;

    //Historia 
    cout<<asctime(&relogio)<<endl;
    paragrafo("Disco estava ficando muito quente ultimamente, pelo horario seria normal estar com o sol assando sua pele, contudo nao havia sol para se queixar. Uma cupula que cobre dos arredores da cidade, num limite de 3km das casas mais externas, e 10 metros da torre mais alta.");
    paragrafo("O ceu, artificial, nao pintado, mas apenas uma tela de luzes para simular a parte externa. Nao se chove dentro da cidade, nem da para saber quando se esta chovendo ate uma tempestade. O visor e desligado para nao da curto. Isso nao e o suficiente para parar as goteiras, alguns lugares no domo mais externos ja tem algumas permanentes.");
    descricao(agente.identidade.rnome(), "Entra no Salt_Rock (Lanchonete)");
    pensamento(agente.identidade.rnome(), "Consigo ver 5 pessoas; preciso checar tem alguem me esperando.");
    descricao(agente.identidade.rnome(),"Rastejou ate uma mesa vazia perto do banheiro, com seu rosto no chao o cheiro de gordura e fritura subia ate suas narinas, dava pra ver seu reflexo de tanta banha que escorregava pelo chao. Seu chapeu surrado com um 'C' quase desbotando, suas olheiras por nao sair de casa, e seus cabelos saindo emaranhados do boné. Quando sentou na mesa sussurrou em outra lingua");

    descricao(agente.identidade.rnome(), "[Salt_Rock.inside()]");
    agente.roubar(salt_rock.inside(),"[pessoas no lugar]");

    paragrafo("Ou o que consideram ser uma, da para ver um droid no canto de seu olho. Os olhos nao disfarcam, sao apenas cameras, ainda assim esse e o maior alivio para \'C\', saber o que esta ou nao na sua cola. Ele sabe se algo tem uma camera esta gravando, se tem um microfone esta ouvindo, e se tem uma conexao esta aprendendo.");
    descricao(agente.identidade.rnome(), "Pega um menu e repete em voz o seu pedido");
    cardapio menu; string ordem[3]={"Hamburguer","Cola","Bolo"};
    
    while(i<3) {
        dialogo(agente.identidade.rnome(),"menu",ordem[i],""); 
        salt_rock.pedido(ordem[i]);
        i++;
    }
    pensamento(agente.identidade.rnome(), "Posso ficar sem bolo...");
    
    paragrafo("Um pouco da atencao foi desviada de si, um dos droides foi ao banheiro. 'C' o seguiu, nao havia mais ninguem dentro. Ele parou na frente do espelho e retirou o chapeu para lavar o rosto, 'C' tentou ficar calmo ao chegar perto. Fingiu que estava olhando alguma coisa na sua jaqueta, que possuia dois '+', um de cada lado.");
    paragrafo("Retirou o seu chapeu para jogar agua em seu rosto, depois colocou, intencionalmente, o chapeu do droide em si.");
    descricao(agente.identidade.rnome(),"Sussurrou na mesma lingua desconhecida [IN-STR]");
    agente.wiretap("Chapeu_droide","chapeu_'C'", "droide.txt");
    descricao(droide_1.identidade.rnome(), "Pegou na mao de 'C' abruptamente");
    dialogo(droide_1.identidade.rnome(),agente.identidade.rnome(),"Passe o seu nome, na lingua", "Imperativamente");

    pensamento(agente.identidade.rnome(), "Mais uma vez");

    dialogo(agente.identidade.rnome(),droide_1.identidade.rnome(), "[identidade.idade()]", "Nervoso");
    pensamento(droide_1.identidade.rnome(), "Valor de idade recebido");
    
    if(droide_1.apreehend(agente.identidade.ridade())) {return death;}
    else{
        descricao(droide_1.identidade.rnome(),"Largou o braco sem muito estresse");
        dialogo(droide_1.identidade.rnome(), agente.identidade.rnome(), "Voce esta livre de suspeitas.", "automaticamente");
    }

    paragrafo("Seguiu o droide para fora do banheiro, e sentou para escutar o que estava sendo gravado.");
    if(YN("Deseja escutar os droides?")){
        agente.type(">>Demorou pra alguem que so queria acordar.\n");
        agente.type(">>Programador, pegou meu chapeu por engano.\n");
        agente.type(">>Alguma coisa sobre ele?\n");
        agente.type(">>Nao esta nos registros, deve ser um freelancer...\n");
        read(agente.tocar());
        cout<<endl;
        paragrafo("A comida chegou, e 'C' continuou a ouvir comendo...");
    }
    else {paragrafo("A comida chegou, 'C' comeu sem muita animacao.");} //estetica
    
   paragrafo("No meio da refeicao, o motivo de ter vindo chegara. A porta abriu e uma mulher entrou um pouco ofegante, suas mechas tinham cores azuis e amarelas, e trajava uma jaqueta com duas serpentes do lado.");
   dialogo(alvo.identidade.rnome(), agente.identidade.rnome(), "E seguro conversa?", "Apontando para os droides");
   dialogo(agente.identidade.rnome(), alvo.identidade.rnome(), "Sim, estou com eles em escuta.", "Oferece o chapeu");
   descricao(alvo.identidade.rnome(), "Para o chapeu com a mao em rejeicao.");
   dialogo(alvo.identidade.rnome(), agente.identidade.rnome(), "Primeiro prove que e voce...", "");
   descricao(agente.identidade.rnome(),"identidade.idade()");
   alvo.roubar(agente.identidade.ridade(), "[idade de 'C']");

   dialogo(alvo.identidade.rnome(),agente.identidade.rnome(),"Como conseguiu fazer isso? Achei que era uma constante.","");
   dialogo(agente.identidade.rnome(),alvo.identidade.rnome(),"Mas e, nao sei como ainda existo.","");
   dialogo(alvo.identidade.rnome(), agente.identidade.rnome(), "Alguma teoria?", "");
   
   pensamento(agente.identidade.rnome(), "'C' tinha algumas sobre como havia uma idade maxima, e a idade tinha algum sistema de mod para dizer as propriedades do corpo. Entretanto, ele estava mais preocupado com o que aconteceria se chegasse no seu aniversario, sua idade incrementaria e se zero e a idade base ele nasceria de novo? Mas com a sua mae morta de onde ele sairia?");

    dialogo(agente.identidade.rnome(),alvo.identidade.rnome(), "Nao importante. So quero que me ajude a achar uma das joias para reverter isso antes que eu descubra qual o erro", "Tentava ao maximo esconder sua preocupacao");
    dialogo(alvo.identidade.rnome(),agente.identidade.rnome(),"Se eu ficar com ela depois eu aceito.","Sugeriu despreocupadamente");
    
    pensamento("droide", "  >>Python, conversando com civil no fundo.  ");
    agente.type(">>Python, conversando com civil no fundo.");
    paragrafo("'C' estava  se poderia usar isso para sua vantagem, e comecou a se preparar para as negociacoes.");
    descricao(agente.identidade.rnome(),"Se armou com os talheres.");
    agente.absorb("talheres", talheres, 3);
    dialogo(alvo.identidade.rnome(), agente.identidade.rnome(), "So quero confirmar, tinha 38 pessoas nesse restaurante mesmo antes de eu chegar?", "");
    dialogo(agente.identidade.rnome(),alvo.identidade.rnome(), "Nao, mais pessoas chegaram. Estao atras de voce.", "Apontando novamente para o chapeu.");
    dialogo(alvo.identidade.rnome(),agente.identidade.rnome(), "Esta com ele ai? O ponteiro...", "");

    agente.point_s("Noroeste");
    dialogo(alvo.identidade.rnome(), agente.identidade.rnome(), "Entao vamos. So precisa me tirar daqui...","");

    paragrafo("Um policial aproximou-se dos dois. Python sinalizou para 'C' agir, ele apontou seu braco para o sujeito e murmurou na lingua: pop()");
    agente.pop();
    paragrafo("Quando o droide caiu no chao com a cabeca perfurada eles aproveitaram para correr, python aproveitou e falou para porta: porta.lock(); que prontamente impediu a passagem. Ambos foram em direcao ao noroeste, onde como a gema apontava, estaria a primeira joia.");

    read("Unicos/final.txt");
}

bool YN(string a){
    cout<<a<<" [Y/N]?";
    string s;
    cin>>s;
    cin.get();
    if (tolower(s[0])=='y') return true;
    else return false;
}

void sinopse(){
    cout<<"\tPor favor, leia em tela cheia.";
    if(YN(" Voce deseja ler a sinopse")){
        cout<<endl;
        read("flavor/prologo.txt");
        cin.get();
    } 
    
    cout<<"---------------------------------\n";
}


void setup(){
    agente.gem.S = string("NEW gem");
    i=j=k=0;
    
    relogio.tm_sec=42;   // seconds after the minute - [0, 60] including leap second
    relogio.tm_min=30;   // minutes after the hour - [0, 59]
    relogio.tm_hour=12;  // hours since midnight - [0, 23]
    relogio.tm_mday=14;  // day of the month - [1, 31]
    relogio.tm_mon=11;   // months since January - [0, 11]
    relogio.tm_year=2193-1900;  // years since 1900
    relogio.tm_wday=0;  // days since Sunday - [0, 6]
    relogio.tm_isdst=false; // daylight savings time flag

    vector <pessoa> s;
    s.push_back(alvo.identidade);
    droide_1.uptade(s);
    for(int i=0;i<3;i++)
    talheres[i].change(20,0.15,"talher");
}
#include "../World/libraries.h"
#include "../World/agents.h"
#include "../World/acoes.h"
#include "../World/base.h"
#include "../World/place.h"
#include "../World/objetos.h"


bool agentgem[3]={true,false,false};

agents agente(-1,"C", agentgem);
agents alvo(21, "Python", agentgem);
pessoa dono(38, "Claus"); 


string Primeiro_menu[3]={"Hamburguer","Cola","Pizza"};
dinner salt_rock(&dono, Primeiro_menu, 3);

struct tm relogio;

droide droide_1(31,"DROIDE-S14");

objetos talheres[3];

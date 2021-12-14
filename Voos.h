#ifndef COMPANHIAAERIA_VOOS_H
#define COMPANHIAAERIA_VOOS_H
#include "Aeroporto.h"
#include "Passageiros.h"
#include <string>
using namespace std;


class Voos {
    unsigned int numeroDeVoo;
    string dataDePartida;
    unsigned int duracaoDoVoo;
    Aeroporto origem;
    Aeroporto destino;
    Avioes aviao;
    vector<Passageiros> passageiros;
public:
    Voos(unsigned int numero, string data, unsigned int duracao, Aeroporto o, Aeroporto d, Avioes av);
    bool operator==(Voos &voo2);
    vector<Passageiros> getPassageiros();
    bool adicionarPassageiro(Passageiros passageiro);
};


#endif //COMPANHIAAERIA_VOOS_H

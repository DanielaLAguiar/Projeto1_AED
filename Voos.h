#ifndef COMPANHIAAERIA_VOOS_H
#define COMPANHIAAERIA_VOOS_H
#include "Aeroporto.h"
#include <string>
using namespace std;


class Voos {
    unsigned int numeroDeVoo;
    string dataDePartida;
    unsigned int duracaoDoVoo;
    Aeroporto origem;
    Aeroporto destino;
public:
    Voos(unsigned int numero, string data, unsigned int duracao, Aeroporto o, Aeroporto d);
};


#endif //COMPANHIAAERIA_VOOS_H

#ifndef COMPANHIAAERIA_PASSAGEIROS_H
#define COMPANHIAAERIA_PASSAGEIROS_H
#include "Voos.h"
using namespace std;

class Passageiros {
    Voos voo;
    unsigned int nBilhetes;
    bool bagagem;
public:
    Passageiros(Voos v, unsigned int n, bool bag);
};


#endif //COMPANHIAAERIA_PASSAGEIROS_H

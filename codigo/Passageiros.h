#ifndef COMPANHIAAERIA_PASSAGEIROS_H
#define COMPANHIAAERIA_PASSAGEIROS_H
using namespace std;

class Passageiros {
    unsigned int nBilhetes;
    bool bagagem;
public:
    Passageiros(unsigned int n, bool bag);
    bool getBagagem();
};


#endif //COMPANHIAAERIA_PASSAGEIROS_H

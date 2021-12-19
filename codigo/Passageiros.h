#ifndef COMPANHIAAERIA_PASSAGEIROS_H
#define COMPANHIAAERIA_PASSAGEIROS_H
using namespace std;

class Passageiros {
    unsigned int nBilhetes;
    bool bagagem;
public:
    /**
    * @param n Número de passageiros para quem está a ser comprado bilhete.
    * @param bag Indica se os passageiros em questão irão levar bagagem ou não.
    */
    Passageiros(unsigned int n, bool bag);
    /**
    * @return Retorna se o passageiro pretende levar bagagem ou não.
    */
    bool getBagagem();
};


#endif //COMPANHIAAERIA_PASSAGEIROS_H

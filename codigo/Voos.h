#ifndef COMPANHIAAERIA_VOOS_H
#define COMPANHIAAERIA_VOOS_H
#include "Passageiros.h"
#include "CarrinhoDeTransporte.h"
#include <string>
#include <vector>
using namespace std;


class Voos {
    unsigned int numeroDeVoo;
    string dataDePartida;
    unsigned int duracaoDoVoo;
    vector<Passageiros> passageiros;
    CarrinhoDeTransporte carrinho;
    unsigned int capacidade;
public:
    Voos(unsigned int numero, string data, unsigned int duracao, unsigned int cap, CarrinhoDeTransporte carro);
    bool operator==(Voos &voo2);
    vector<Passageiros> getPassageiros();
    bool adicionarPassageiro(Passageiros passageiro);
    void comprarBilhete(int nBilhetes, bool bagagem);
    void checkIn(Bagagem bagagem);
};

class vooLotadoException {
private:
    unsigned int numero;
public:
    vooLotadoException(unsigned int n);
    unsigned int getN() const {
        return numero; }
};


#endif //COMPANHIAAERIA_VOOS_H

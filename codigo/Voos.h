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
    /**
    * @param numero Número identificador do voo.
    * @param data Data do voo.
    * @param duracao Duração do voo.
    * @param cap Capacidade total do voo.
    * @param carro Carrinho de transporte alocado ao voo.
    */
    bool operator==(Voos &voo2);
    /**
    * @return Verificamos se dois voos são iguais através do seu número.
    */
    vector<Passageiros> getPassageiros();
    /**
    * @return Retorna todos os passageiros que compraram bilhete para o voo.
    */
    bool adicionarPassageiro(Passageiros passageiro);
    /**
    * @param passageiro Adiciona um passageiro ao voo.
    */
    void comprarBilhete(int nBilhetes, bool bagagem);
    /**
    * @param nBilhetes Número de bilhetes que o passageiro quer comprar.
    * @param bagagem Indica se o passageiro deseja levar bagagem ou não.
    */
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

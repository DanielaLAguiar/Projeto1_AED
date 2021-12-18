#include "Voos.h"

Voos::Voos(unsigned int numero, string data, unsigned int duracao, unsigned int cap, CarrinhoDeTransporte carro):
numeroDeVoo(numero), dataDePartida(data), duracaoDoVoo(duracao), capacidade(cap), carrinho(carro) {}

bool Voos::operator==(Voos &voo2) {
    if(numeroDeVoo==voo2.numeroDeVoo)
        return true;
    return false;
}

vector<Passageiros> Voos::getPassageiros() {
    return passageiros;
}

bool Voos::adicionarPassageiro(Passageiros passageiro) {
    if(passageiros.size()>=capacidade)
        return false;
    passageiros.push_back(passageiro);
    return true;
}

void Voos::comprarBilhete(int nBilhetes, bool bagagem) {
    Passageiros passageiro(nBilhetes, bagagem);
    for(int i=0; i<nBilhetes; i++) {
        if(!adicionarPassageiro(passageiro))
            throw vooLotadoException(numeroDeVoo);
    }
}

//Por enquanto o check in é sempre automático
void Voos::checkIn(Bagagem bagagem) {
    for(int i=0; i<passageiros.size(); i++) {
        if(passageiros[i].getBagagem()) {
            carrinho.adicionarBagagem(bagagem);
        }
    }
}

vooLotadoException::vooLotadoException(unsigned int n): numero(n) {}
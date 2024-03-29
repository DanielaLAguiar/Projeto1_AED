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

void Voos::comprarBilhete(int nBilhetes, bool bagagem, bool checkIn) {
    Passageiros passageiro(nBilhetes, bagagem, checkIn);
    for(int i=0; i<nBilhetes; i++) {
        if(!adicionarPassageiro(passageiro))
            throw vooLotadoException(numeroDeVoo);
    }
}

void Voos::checkIn(Bagagem bagagem) {
    for(int i=0; i<passageiros.size(); i++) {
        if(passageiros[i].getBagagem() && passageiros[i].getCheckIn()) {
            carrinho.adicionarBagagem(bagagem);
        }
    }
}

void Voos::getNumVoo(){
    cout << this.numeroDeVoo;
};

void Voos::getDuracao(){
    cout << this.duracaoDoVoo;
};

void Voos::getDataPartida() {
    cout << this.dataDePartida;
}

void Voos::printCapacidade() {
    cout << this.capacidade;
}

void Voos::printPassageiros() {
    cout << "N.º de Passageiros: " << this.passageiros.size();
}

vooLotadoException::vooLotadoException(unsigned int n): numero(n) {}

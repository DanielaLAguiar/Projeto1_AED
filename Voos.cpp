#include "Voos.h"

Voos::Voos(unsigned int numero, string data, unsigned int duracao, Aeroporto o, Aeroporto d, Avioes av):
numeroDeVoo(numero), dataDePartida(data), duracaoDoVoo(duracao), origem(o), destino(d), aviao(av) {}

bool Voos::operator==(Voos &voo2) {
    if(numeroDeVoo==voo2.numeroDeVoo)
        return true;
    return false;
}

vector<Passageiros> Voos::getPassageiros() {
    return passageiros;
}

bool Voos::adicionarPassageiro(Passageiros passageiro) {
    if(passageiros.size()>=aviao.capacidade)
        return false;
    passageiros.push_back(passageiro);
    return true;
}






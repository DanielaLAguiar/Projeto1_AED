#include "Aeroporto.h"

Aeroporto::Aeroporto(string cd): cidade(cd) {}

void Aeroporto::adicionarAviao(Avioes aviao) {
    avioes.push_back(aviao);
}

bool Aeroporto::removerAviao(Avioes aviao) {
    vector<Avioes>::iterator it;
    for(it=avioes.begin(); it!=avioes.end(); it++) {
        Avioes avioes1=*it;
        if(avioes1==aviao) {
            avioes.erase(it);
            return true;
        }
    }
    return false;
}

void Aeroporto::setAvioes(vector<Avioes> avioes) {
    this->avioes=avioes;
}

vector<Avioes> Aeroporto::getAvioes() {
    return avioes;
}

void Aeroporto::setCidade(string cidade) {
    this->cidade=cidade;
}

string Aeroporto::getCidade() {
    return cidade;
}


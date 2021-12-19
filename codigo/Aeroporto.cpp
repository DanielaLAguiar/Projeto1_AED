#include "Aeroporto.h"

Aeroporto::Aeroporto(string cd): cidade(cd), transportes(TransporteTerrestre("",0,list<string>())) {}

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

string Aeroporto::getCidade() {
    return cidade;
}

BST<TransporteTerrestre> Aeroporto::getTransportes() const {
    return transportes;
}

void Aeroporto::setTransportes(vector<TransporteTerrestre> &vetorTransportes) {
    for(int i=0; i<vetorTransportes.size();i++) {
        transportes.insert(vetorTransportes[i]);
    }
}

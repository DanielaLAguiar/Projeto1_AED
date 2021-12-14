#ifndef COMPANHIAAERIA_AEROPORTO_H
#define COMPANHIAAERIA_AEROPORTO_H
#include "Avioes.h"
#include <string>

using namespace std;


class Aeroporto {
    string cidade;
    vector<Avioes> avioes;
    //BST<TransporteTerrestre> transportes;
public:
    Aeroporto(string cd);
    void adicionarAviao(Avioes aviao);
    bool removerAviao(Avioes aviao);
    void setAvioes(vector<Avioes> avioes);
    vector<Avioes> getAvioes();
    void setCidade(string cidade);
    string getCidade();
};


#endif //COMPANHIAAERIA_AEROPORTO_H

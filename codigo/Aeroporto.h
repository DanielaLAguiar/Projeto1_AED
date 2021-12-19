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
    /**
    * @param cd Cidade onde o aeroporto se situa.
    */
    Aeroporto(string cd);
    /**
    * @param aviao Adiciona o avião ao vetor de aviões que existem no aeroporto.
    */
    void adicionarAviao(Avioes aviao);
    /**
    * @param aviao Remove o avião do vetor de aviões que existem no aeroporto.
    */
    bool removerAviao(Avioes aviao);
    /**
    * @param avioes Adiciona todos os aviões que existem no aeroporto naquele momento.
    */
    void setAvioes(vector<Avioes> avioes);
    /**
    * @return Retorna todos os aviões que existem no aeroporto naquele momento.
    */
    vector<Avioes> getAvioes();
    /**
    * @return Retorna a cidade em que o aeroporto se situa.
    */
    string getCidade();
};


#endif //COMPANHIAAERIA_AEROPORTO_H

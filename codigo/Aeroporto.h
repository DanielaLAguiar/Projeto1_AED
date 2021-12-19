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
    /**
    * @param cd Cidade onde o aeroporto se situa.
    */
    void adicionarAviao(Avioes aviao);
    /**
    * @param aviao Adiciona o avião ao vetor de aviões que existem no aeroporto.
    */
    bool removerAviao(Avioes aviao);
    /**
    * @param aviao Remove o avião do vetor de aviões que existem no aeroporto.
    */
    void setAvioes(vector<Avioes> avioes);
    /**
    * @param avioes Adiciona todos os aviões que existem no aeroporto naquele momento.
    */
    vector<Avioes> getAvioes();
    /**
    * @return Retorna todos os aviões que existem no aeroporto naquele momento.
    */
    string getCidade();
    /**
    * @return Retorna a cidade em que o aeroporto se situa.
    */
};


#endif //COMPANHIAAERIA_AEROPORTO_H

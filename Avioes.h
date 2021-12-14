#ifndef COMPANHIAAERIA_AVIOES_H
#define COMPANHIAAERIA_AVIOES_H
#include "Voos.h"
#include "Servicos.h"
#include <string>
#include <list>
#include <queue>
using namespace std;


class Avioes {
    string matricula;
    string tipo;
    unsigned int capacidade;
    list<Voos> planoDeVoo;
    queue<Servicos> servicos;
    list<Servicos> servicosJaRealizados;
public:
    Avioes(string mat, string tp, unsigned int cap);
    bool operator==(Avioes &aviao2);
    void setVoos(list<Voos> planoDeVoo);
    list<Voos> getVoos();
    void adicionarVoo(Voos voo);
    bool removerVoo(Voos voo);
    void setServicos(queue<Servicos> servicos);
    queue<Servicos> getServicos();
    void adicionarServico(Servicos servico);
    void terminarServico();
};


#endif //COMPANHIAAERIA_AVIOES_H
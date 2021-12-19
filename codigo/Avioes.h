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
    /**
    * @param mat Matricula do avião.
    * @param tp Tipo de avião.
    * @param cap Capacidade total do avião.
    */
    Avioes(string mat, string tp, unsigned int cap);
    /**
    * @return Verificamos se dois aviões são iguais através da sua matricula.
    */
    bool operator==(Avioes &aviao2);
    /**
    * @param planoDeVoo Adiciona todos os voos em que o avião irá participar.
    */
    void setVoos(list<Voos> planoDeVoo);
    /**
    * @return Retorna o plano de voos do avião.
    */
    list<Voos> getVoos();
    /**
    * @param voo Adiciona um voo ao plano de voos do avião.
    */
    void adicionarVoo(Voos voo);
    /**
    * @param voo Remove o voo do plano de voos do avião.
    */
    bool removerVoo(Voos voo);
    /**
    * @param servicos Remove o voo do plano de voos do avião.
    */
    void setServicos(queue<Servicos> servicos);
    /**
    * @return Retorna a fila de serviços designados para o avião.
    */
    queue<Servicos> getServicos();
    /**
    * @param servico Adiciona um serviço à fila de servicos.
    */
    void adicionarServico(Servicos servico);
    /**
    * Retira o serviço da fila de serviços e coloca-o na lista de serviços completados.
    */
    void terminarServico();
};


#endif //COMPANHIAAERIA_AVIOES_H
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
    /**
    * @param mat Matricula do avião.
    * @param tp Tipo de avião.
    * @param cap Capacidade total do avião.
    */
    bool operator==(Avioes &aviao2);
    /**
    * @return Verificamos se dois aviões são iguais através da sua matricula.
    */
    void setVoos(list<Voos> planoDeVoo);
    /**
    * @param planoDeVoo Adiciona todos os voos em que o avião irá participar.
    */
    list<Voos> getVoos();
    /**
    * @return Retorna o plano de voos do avião.
    */
    void adicionarVoo(Voos voo);
    /**
    * @param voo Adiciona um voo ao plano de voos do avião.
    */
    bool removerVoo(Voos voo);
    /**
    * @param voo Remove o voo do plano de voos do avião.
    */
    void setServicos(queue<Servicos> servicos);
    /**
    * @param servicos Remove o voo do plano de voos do avião.
    */
    queue<Servicos> getServicos();
    /**
    * @return Retorna a fila de serviços designados para o avião.
    */
    void adicionarServico(Servicos servico);
    /**
    * @param servico Adiciona um serviço à fila de servicos.
    */
    void terminarServico();
    /**
    * Retira o serviço da fila de serviços e coloca-o na lista de serviços completados.
    */
};


#endif //COMPANHIAAERIA_AVIOES_H
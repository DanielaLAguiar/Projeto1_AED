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
};


#endif //COMPANHIAAERIA_AVIOES_H

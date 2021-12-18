#ifndef COMPANHIAAERIA_SERVICOS_H
#define COMPANHIAAERIA_SERVICOS_H
#include <string>
using namespace std;


class Servicos {
    string tipoDeServico;
    string data;
    string funcionarioResponsavel;
public:
    Servicos(string tipo, string dt, string func);
};


#endif //COMPANHIAAERIA_SERVICOS_H

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
    /**
    * @param tipo Indica se o serviço é para limpeza ou para manutenção.
    * @param dt Data marcada para a realização do serviço.
    * @param func Indica qual o funcionário responsável pelo serviço.
    */
};


#endif //COMPANHIAAERIA_SERVICOS_H

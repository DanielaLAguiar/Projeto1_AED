#include "Servicos.h"

Servicos::Servicos(string tipo, string dt, string func):
tipoDeServico(tipo), data(dt), funcionarioResponsavel(func) {}

void Servicos::alterarData(Servicos servico, string novaData) {
    if(this->tipoDeServico==servico.tipoDeServico && this->funcionarioResponsavel==servico.funcionarioResponsavel && this->data==servico.data) {
        this->data=novaData;
    }
}

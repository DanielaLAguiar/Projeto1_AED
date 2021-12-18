#include "Avioes.h"

Avioes::Avioes(string mat, string tp, unsigned int cap):
matricula(mat), tipo(tp), capacidade(cap) {}

bool Avioes::operator==(Avioes &aviao2) {
    return matricula==aviao2.matricula;
}

void Avioes::setVoos(list<Voos> planoDeVoo) {
    this->planoDeVoo=planoDeVoo;
}

list<Voos> Avioes::getVoos() {
    return planoDeVoo;
}

void Avioes::adicionarVoo(Voos voo) {
    planoDeVoo.push_back(voo);
}

bool Avioes::removerVoo(Voos voo) {
    list<Voos>::iterator it;
    for(it=planoDeVoo.begin(); it!=planoDeVoo.end(); it++) {
        Voos voo1=*it;
        if(voo==voo1) {
            planoDeVoo.erase(it);
            return true;
        }
    }
    return false;
}

void Avioes::setServicos(queue<Servicos> servicos) {
    this->servicos=servicos;
}

queue<Servicos> Avioes::getServicos() {
    return servicos;
}

void Avioes::adicionarServico(Servicos servico) {
    servicos.push(servico);
}

void Avioes::terminarServico() {
    Servicos servico = servicos.front();
    servicos.pop();
    servicosJaRealizados.push_back(servico);
}







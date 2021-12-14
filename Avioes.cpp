#include "Avioes.h"

Avioes::Avioes(string mat, string tp, unsigned int cap):
matricula(mat), tipo(tp), capacidade(cap) {}

bool Avioes::operator==(Avioes &aviao2) {
    return matricula==aviao2.matricula;
}

#include "Passageiros.h"

Passageiros::Passageiros(unsigned int n, bool bag):
nBilhetes(n), bagagem(bag) {}

bool Passageiros::getBagagem() {
    return bagagem;
}

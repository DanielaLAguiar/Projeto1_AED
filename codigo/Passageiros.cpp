#include "Passageiros.h"

Passageiros::Passageiros(unsigned int n, bool bag, bool check):
nBilhetes(n), bagagem(bag), checkIn(check) {}

bool Passageiros::getBagagem() {
    return bagagem;
}

bool Passageiros::getCheckIn() {
    return checkIn;
}

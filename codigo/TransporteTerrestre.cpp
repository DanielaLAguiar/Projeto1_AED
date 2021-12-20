#include "TransporteTerrestre.h"

TransporteTerrestre::TransporteTerrestre(string tipo, unsigned int distancia, list<string> hora):
tipoDeTransporte(tipo), distanciaAoAeroporto(distancia), horario(hora){}

bool TransporteTerrestre::operator<(const TransporteTerrestre& rhs) const {
        return (this->distanciaAoAeroporto < rhs.distanciaAoAeroporto);
}

bool TransporteTerrestre::operator>(const TransporteTerrestre& rhs) const {
    return (this->distanciaAoAeroporto > rhs.distanciaAoAeroporto);
}

bool TransporteTerrestre::operator==(const TransporteTerrestre& rhs) const {
    return (this->distanciaAoAeroporto == rhs.distanciaAoAeroporto);
}

list<string> TransporteTerrestre::getHorario() {
    return horario;
}

void TransporteTerrestre::setHorario(list<string> horario) {
    this->horario=horario;
}

unsigned int TransporteTerrestre::getDistancia() {
    return distanciaAoAeroporto;
}

string TransporteTerrestre::getTipo() {
    return tipoDeTransporte;
}

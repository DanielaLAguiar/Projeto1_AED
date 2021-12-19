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

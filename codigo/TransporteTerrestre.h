#ifndef COMPANHIAAERIA_TRANSPORTETERRESTRE_H
#define COMPANHIAAERIA_TRANSPORTETERRESTRE_H
#include<string>
#include<list>
using namespace std;


class TransporteTerrestre {
    string tipoDeTransporte;
    unsigned int distanciaAoAeroporto;
    list<string> horario;
public:
    TransporteTerrestre(string tipo, unsigned int distancia, list<string> hora);
};


#endif //COMPANHIAAERIA_TRANSPORTETERRESTRE_H

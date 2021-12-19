#ifndef COMPANHIAAERIA_TRANSPORTETERRESTRE_H
#define COMPANHIAAERIA_TRANSPORTETERRESTRE_H
#include<string>
#include<list>
#include <system_error>

using namespace std;


class TransporteTerrestre : public error_code {
    string tipoDeTransporte;
    unsigned int distanciaAoAeroporto;
    list<string> horario;
public:
    /**
    * @param tipo Indica se o transporte em questão é autocarro, metro, ou comboio.
    * @param distancia Distância do transporte ao aeroporto.
    * @param hora Horário do transporte.
    */
    TransporteTerrestre(string tipo, unsigned int distancia, list<string> hora);
    bool operator<(const TransporteTerrestre& rhs) const;
    bool operator>(const TransporteTerrestre& rhs) const;
    bool operator==(const TransporteTerrestre& rhs) const;
};


#endif //COMPANHIAAERIA_TRANSPORTETERRESTRE_H

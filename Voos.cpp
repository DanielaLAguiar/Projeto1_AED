#include "Voos.h"

Voos::Voos(unsigned int numero, string data, unsigned int duracao, Aeroporto o, Aeroporto d):
numeroDeVoo(numero), dataDePartida(data), duracaoDoVoo(duracao), origem(o), destino(d) {}

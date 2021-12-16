#ifndef COMPANHIAAERIA_CARRINHODETRANSPORTE_H
#define COMPANHIAAERIA_CARRINHODETRANSPORTE_H
#include "Bagagem.h"
#include <stack>
#include <list>
using namespace std;


class CarrinhoDeTransporte {
    list<list<stack<Bagagem>>> carruagens;
public:
    CarrinhoDeTransporte();
    void adicionarBagagem();
};


#endif //COMPANHIAAERIA_CARRINHODETRANSPORTE_H

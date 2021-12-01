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
};


#endif //COMPANHIAAERIA_CARRINHODETRANSPORTE_H

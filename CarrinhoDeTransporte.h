#ifndef COMPANHIAAERIA_CARRINHODETRANSPORTE_H
#define COMPANHIAAERIA_CARRINHODETRANSPORTE_H
#include "Bagagem.h"
#include <stack>
#include <list>
#include <queue>
using namespace std;


class CarrinhoDeTransporte {
    deque<stack<Bagagem>> carrinho;
    int pilhas, malas;
public:
    CarrinhoDeTransporte(int c, int n, int m);
    void adicionarBagagem(Bagagem bagagem);
};


#endif //COMPANHIAAERIA_CARRINHODETRANSPORTE_H

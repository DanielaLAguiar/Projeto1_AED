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
    /**
    * @param c Número de carruagens do carrinho de transporte.
    * @param n Número de pilhas em cada carruagem.
    * @param m Número de malas que cabem em cada pilha.
    */
    void adicionarBagagem(Bagagem bagagem);
    /**
    * @param bagagem É adicionada ao carrinho de tranporte a bagagem de determinado passageiro.
    */
};


#endif //COMPANHIAAERIA_CARRINHODETRANSPORTE_H

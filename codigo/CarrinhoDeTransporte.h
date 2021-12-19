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
    /**
    * @param c Número de carruagens do carrinho de transporte.
    * @param n Número de pilhas em cada carruagem.
    * @param m Número de malas que cabem em cada pilha.
    */
    CarrinhoDeTransporte(int c, int n, int m);
    /**
    * @param bagagem É adicionada ao carrinho de tranporte a bagagem de determinado passageiro.
    */
    void adicionarBagagem(Bagagem bagagem);
};


#endif //COMPANHIAAERIA_CARRINHODETRANSPORTE_H

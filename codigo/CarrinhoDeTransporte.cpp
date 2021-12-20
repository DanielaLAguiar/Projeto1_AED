#include "CarrinhoDeTransporte.h"

CarrinhoDeTransporte::CarrinhoDeTransporte(int c, int n, int m) : malas(m){
    pilhas=c*n;
}

void CarrinhoDeTransporte::adicionarBagagem(Bagagem bagagem) {
    for(int i=0; i<pilhas; i++) {
        if(carrinho[i].size()>=malas)
            continue;
        carrinho[i].push(bagagem);
    }
}

void CarrinhoDeTransporte::retirarBagagem() {
    carrinho.front().pop();
}



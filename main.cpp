#include <iostream>
#include <fstream>
#include "Aeroporto.h"
using namespace std;

int main() {
    string dados;
    list<Aeroporto> aeroportos;
    ifstream DadosCompanhia("ficheiro.txt");
    if (!DadosCompanhia.is_open())
        cout << "Falha ao abrir o ficheiro.\n";
    cout<<"Let's go";
    while (getline (DadosCompanhia, dados)) {
        Aeroporto aeroporto(dados);
        aeroportos.push_back(aeroporto);
    }
    DadosCompanhia.close();
    return 0;
}

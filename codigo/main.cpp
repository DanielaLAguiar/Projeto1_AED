#include <iostream>
#include <fstream>
#include "Aeroporto.h"
#include "Passageiros.h"
#include "Voos.h"
#include "Avioes.h"
#include "Bagagem.h"
#include "Servicos.h"

using namespace std;

int main() {

    cout << "Companhia Aérea 1.0" << endl
         << "Grupo G6" << endl << endl;

    string dados;
    list<Aeroporto> aeroportos;
    ifstream DadosCompanhia("../codigo/ficheiro.txt");
    if (!DadosCompanhia.is_open())
        cout << "Falha ao abrir o ficheiro.\n";
    while (getline (DadosCompanhia, dados)) {
        Aeroporto aeroporto(dados);
        aeroportos.push_back(aeroporto);
    }
    DadosCompanhia.close();

    while(1){
        unsigned int menuOption;
        cout << "Menu:" << endl
             << "1) Listagens várias" << endl
             << "2) Comprar bilhete"  << endl
             << "0) Sair" << endl;

        while(!cin){
            cin >> menuOption;
            switch(menuOption){
                case 1:
                    unsigned int listOption;
                    cout << "1) Listar Voos" << endl
                         << "2) Listar Aviões" << endl
                         << "3) Listar Passageiros" << endl
                         << "4) Listar Bagagens" << endl;
                    while(!cin) cin >> listOption;

                    switch(listOption){
                        case 1:
                            cout << "N.º Voo" << "\t" << "Duração" << "\t" << "Partida" << "\t" << "N.º Passageiros"
                                 << "\t" << "Capacidade" << endl;
                            for(auto i : aeroportos){
                                for(auto j : i.getAvioes()){
                                    for(auto k : j.getVoos()){
                                        for (auto e : k){
                                            cout << e.getNumVoo() << "\t" << e.getDuracao() << "\t" << e.getDataPartida() << "\t"
                                                 << e.printPassageiros() << "\t" << e.printCapacidade() << endl;
                                        }
                                    }
                                }
                            }
                    }

            }
        }
    }



    return 0;
}

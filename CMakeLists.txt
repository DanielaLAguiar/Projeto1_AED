cmake_minimum_required(VERSION 3.20)
project(CompanhiaAeria)

set(CMAKE_CXX_STANDARD 14)

add_executable(CompanhiaAeria codigo/main.cpp codigo/Aeroporto.cpp codigo/Aeroporto.h codigo/Avioes.cpp codigo/Avioes.h codigo/Voos.cpp codigo/Voos.h codigo/Passageiros.cpp codigo/Passageiros.h codigo/Bagagem.cpp codigo/Bagagem.h codigo/Servicos.cpp codigo/Servicos.h codigo/CarrinhoDeTransporte.cpp codigo/CarrinhoDeTransporte.h codigo/TransporteTerrestre.cpp codigo/TransporteTerrestre.h)


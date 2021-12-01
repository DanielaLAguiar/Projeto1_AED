cmake_minimum_required(VERSION 3.20)
project(CompanhiaAeria)

set(CMAKE_CXX_STANDARD 14)

add_executable(CompanhiaAeria main.cpp Aeroporto.cpp Aeroporto.h Avioes.cpp Avioes.h Voos.cpp Voos.h Passageiros.cpp Passageiros.h Bagagem.cpp Bagagem.h Servicos.cpp Servicos.h CarrinhoDeTransporte.cpp CarrinhoDeTransporte.h TransporteTerrestre.cpp TransporteTerrestre.h)

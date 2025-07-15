#/************************************************************
# CRC: Juego - Controla la lógica principal del juego, el estado, puntaje y condiciones de victoria o derrota.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Coordina el tablero, los personajes y la lógica de movimiento. Evalúa el estado del juego, gestiona el puntaje y determina el resultado final de la partida.
#************************************************************/
#include "Juego.h"
#include <iostream>

Juego::Juego(ITablero* board, std::vector<IPersonaje*> players, LogicaDeMovimiento* movementLogic, bool state)
    : board(board), players(players), movementLogic(movementLogic), state(state), score(0) {}

Juego::~Juego() {
}

void Juego::moverAvatar(char direction) {
    // Cambia el estado del personaje de acuerdo a la casilla donde se mueva
    if (!players.empty()) {
        movementLogic->mover(*players[0], direction);
        Ficha* ficha = board->getFicha(players[0]->getPosicionFila(), players[0]->getPosicionColumna());
        if(ficha->getTipo() == '1') {
            state = true;
        } else if (ficha->getTipo() == '0') {
            state = false;
        } else {
            std::cout << "Ganaste" << std::endl;
        }
    }
}
void Juego::mover() {
    // Verificar colisiones y estado del juego para todos los personajes
    for (auto character : players) {
        Ficha* ficha = board->getFicha(character->getPosicionFila(), character->getPosicionColumna());
        if (ficha->getTipo() == '0') {
            state = false;
            std::cout << "Juego terminado. Un personaje cayo en el abismo." << std::endl;
            break;
        } else if (ficha->getTipo() == 'S') {
            std::cout << "Un personaje llego a la salida." << std::endl;
        }
    }
}
void Juego::iniciar() {
    std::cout << "El juego ha comenzado." << std::endl;
    score = 100;
}
bool Juego::getEstado(){
    return state;
}
bool Juego::getWin() {
    if (!players.empty()) {
        Ficha* ficha = board->getFicha(players[0]->getPosicionFila(), players[0]->getPosicionColumna());
        return ficha->getTipo() == 'S';
    }
    return false;
}
void Juego::puntuar(){
     score = score - 2;
}
int Juego::getPuntaje(){
    return score;
}
void Juego::play(char movimiento){
    this->moverAvatar(movimiento);
    puntuar();
}
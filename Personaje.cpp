#/************************************************************
# CRC: Personaje - Clase base para los personajes del juego, define posición y movimiento.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Proporciona la interfaz y funcionalidad básica para los personajes, incluyendo la gestión de posición y el método de movimiento.
#************************************************************/
// Personaje.cpp
#include "Personaje.h"

Personaje::Personaje() : rowPosition(0), colPosition(0) {}

int Personaje::getPosicionFila() const {
    return rowPosition;
}

int Personaje::getPosicionColumna() const {
    return colPosition;
}

void Personaje::mover(char direction) {
    // Implementación del movimiento (puedes agregar lógica)
}

void Personaje::setPosicionFila(int row) {
    rowPosition = row;
}

void Personaje::setPosicionColumna(int col) {
    colPosition = col;
}

#/************************************************************
# CRC: Ficha - Clase base para las casillas del tablero (camino, abismo, salida).
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la estructura y métodos básicos de una casilla del tablero, incluyendo tipo y posición.
#************************************************************/
#include "Ficha.h"

Ficha::Ficha(int row, int col, char type) : row(row), col(col), type(type){}

int Ficha::getFila() const {
    return row;
}

int Ficha::getColumna() const {
    return col;
}

char Ficha::getTipo() const {
    return type;
}

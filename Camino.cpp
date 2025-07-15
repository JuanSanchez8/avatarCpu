#/************************************************************
# CRC: Camino - Representa una casilla transitable del tablero.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Hereda de Ficha y define el comportamiento de las casillas por donde pueden moverse los personajes.
#************************************************************/
#include "Camino.h"

Camino::Camino(int row, int col, char type) : Ficha(row, col, type) {}

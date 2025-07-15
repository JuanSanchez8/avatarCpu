#/************************************************************
# CRC: Abismo - Representa una casilla de abismo en el tablero.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Hereda de Ficha y define el comportamiento de las casillas que provocan la derrota al caer en ellas.
#************************************************************/
#include "Abismo.h"

Abismo::Abismo(int row, int col, char type) : Ficha(row, col, type) {}

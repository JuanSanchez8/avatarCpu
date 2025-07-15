#/************************************************************
# CRC: Salida - Representa la casilla de salida del tablero.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Hereda de Ficha y define la casilla que permite ganar la partida al alcanzarla.
#************************************************************/
#include "Salida.h"

Salida::Salida(int row, int col, char type) : Ficha(row, col, type) {}

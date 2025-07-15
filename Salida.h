#/************************************************************
# CRC: Salida (header) - Declaración de la clase Salida, casilla de victoria.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz y métodos para la casilla Salida, que permite ganar la partida al alcanzarla.
#************************************************************/
#ifndef SALIDA_H
#define SALIDA_H

#include "Ficha.h"

class Salida : public Ficha {
public:
    Salida(int row, int col, char type);
};

#endif // SALIDA_H

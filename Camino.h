#/************************************************************
# CRC: Camino (header) - Declaración de la clase Camino, casilla transitable.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz y métodos para la casilla Camino, por donde pueden moverse los personajes.
#************************************************************/
#ifndef CAMINO_H
#define CAMINO_H

#include "Ficha.h"

class Camino : public Ficha {
public:
    Camino(int row, int col, char type);
};

#endif // CAMINO_H

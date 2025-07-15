#/************************************************************
# CRC: Abismo (header) - Declaración de la clase Abismo, casilla de derrota.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz y métodos para la casilla Abismo, que provoca derrota al caer en ella.
#************************************************************/
#ifndef ABISMO_H
#define ABISMO_H

#include "Ficha.h"

class Abismo : public Ficha {
public:
    Abismo(int row, int col, char type);
};

#endif // ABISMO_H

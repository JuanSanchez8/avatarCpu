#/************************************************************
# CRC: LogicaDeMovimiento (header) - Declaración de la clase de lógica de movimiento.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define los métodos para mover personajes en el tablero, tanto individuales como múltiples.
#************************************************************/
#ifndef LOGICA_DE_MOVIMIENTO_H
#define LOGICA_DE_MOVIMIENTO_H

#include "IPersonaje.h"
#include <vector>

class LogicaDeMovimiento {
public:
    void mover(IPersonaje &character, char direction);
    void mover(std::vector<IPersonaje*> &characters, char direction);
};

#endif // LOGICA_DE_MOVIMIENTO_H

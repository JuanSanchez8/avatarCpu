#/************************************************************
# CRC: LogicaDeMovimiento - Gestiona y valida los movimientos de los personajes en el tablero.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Implementa la lógica para mover personajes individuales o múltiples, asegurando que los desplazamientos sean válidos según las reglas del juego.
#************************************************************/
#include "LogicaDeMovimiento.h"
#include <iostream>

void LogicaDeMovimiento::mover(IPersonaje &character, char direction) {
    character.mover(direction);
}

void LogicaDeMovimiento::mover(std::vector<IPersonaje*> &characters, char direction) {
    for (auto character : characters) {
        character->mover(direction);
    }
}
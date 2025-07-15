#/************************************************************
# CRC: Avatar - Personaje controlado por el usuario, permite movimientos según entrada.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Implementa el movimiento del avatar humano, respondiendo a las teclas de dirección ingresadas por el usuario.
#************************************************************/
// Avatar.cpp
#include "Avatar.h"
#include <iostream>

Avatar::Avatar() {
    // Puedes inicializar algo si es necesario
}

void Avatar::mover(char direction) {
    int newRow = getPosicionFila();
    int newCol = getPosicionColumna();
    
    switch (direction) {
        case 'W': case 'w': 
            newRow--; 
            std::cout << "Avatar se mueve hacia arriba." << std::endl;
            break;
        case 'S': case 's': 
            newRow++; 
            std::cout << "Avatar se mueve hacia abajo." << std::endl;
            break;
        case 'A': case 'a': 
            newCol--; 
            std::cout << "Avatar se mueve hacia la izquierda." << std::endl;
            break;
        case 'D': case 'd': 
            newCol++; 
            std::cout << "Avatar se mueve hacia la derecha." << std::endl;
            break;
        default: 
            return;
    }
    
    setPosicionFila(newRow);
    setPosicionColumna(newCol);
}
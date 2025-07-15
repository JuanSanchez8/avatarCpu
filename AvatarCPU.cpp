#/************************************************************
# CRC: AvatarCPU - Personaje controlado por la máquina, realiza movimientos aleatorios.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Implementa la lógica de movimiento automático para el avatar CPU, eligiendo direcciones al azar en cada turno.
#************************************************************/
#include "AvatarCPU.h"
#include <iostream>

AvatarCPU::AvatarCPU() {
    // Inicializar la semilla para números aleatorios
    std::srand(std::time(nullptr));
}

void AvatarCPU::mover(char direction) {
    // El AvatarCPU ignora la dirección recibida y se mueve aleatoriamente
    char randomDirection = getRandomDirection();

    int newRow = getPosicionFila();
    int newCol = getPosicionColumna();

    switch (randomDirection) {
        case 'w':
            newRow--;
            std::cout << "AvatarCPU se mueve hacia arriba." << std::endl;
            break;
        case 's':
            newRow++;
            std::cout << "AvatarCPU se mueve hacia abajo." << std::endl;
            break;
        case 'a':
            newCol--;
            std::cout << "AvatarCPU se mueve hacia la izquierda." << std::endl;
            break;
        case 'd':
            newCol++;
            std::cout << "AvatarCPU se mueve hacia la derecha." << std::endl;
            break;
        default:
            return;
    }

    setPosicionFila(newRow);
    setPosicionColumna(newCol);
}

char AvatarCPU::getRandomDirection() {
    int direction = std::rand() % 4;

    switch (direction) {
        case 0: return 'w';
        case 1: return 's';
        case 2: return 'a';
        case 3: return 'd';
        default: return 'w';
    }
}
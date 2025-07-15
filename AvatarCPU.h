/************************************************************
CRC: AvatarCPU (header) - Declaración de la clase AvatarCPU controlada por la máquina.
Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
Descripción: Define la interfaz y métodos para el personaje AvatarCPU, que realiza movimientos automáticos.
************************************************************/

#ifndef AVATARCPU_H
#define AVATARCPU_H

#include "Avatar.h"
#include <cstdlib>
#include <ctime>

class AvatarCPU : public Avatar {
public:
    AvatarCPU();
    void mover(char direction) override;

private:
    char getRandomDirection();
};

#endif // AVATARCPU_H
#ifndef AVATARCPU_H
#define AVATARCPU_H

#include "Avatar.h"
#include <cstdlib>
#include <ctime>

class AvatarCPU : public Avatar {
public:
    AvatarCPU();
    void mover(char direction) override;

private:
    char getRandomDirection();
};

#endif // AVATARCPU_H
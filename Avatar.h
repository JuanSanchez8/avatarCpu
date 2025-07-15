#/************************************************************
# CRC: Avatar (header) - Declaración de la clase Avatar controlada por el usuario.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz y métodos para el personaje Avatar, controlado por el usuario.
#************************************************************/
// Avatar.h
#ifndef AVATAR_H
#define AVATAR_H

#include "Personaje.h"

class Avatar : public Personaje {
public:
    Avatar();
    void mover(char direction) override;
};

#endif // AVATAR_H

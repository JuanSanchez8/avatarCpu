#/************************************************************
# CRC: Personaje (header) - Declaración de la clase base para personajes.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz y atributos para la gestión de posición y movimiento de los personajes.
#************************************************************/
// Personaje.h
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "IPersonaje.h"

class Personaje : public IPersonaje {
protected:
    int rowPosition;
    int colPosition;

public:
    Personaje();
    virtual ~Personaje() = default;

    virtual int getPosicionFila() const override;
    virtual int getPosicionColumna() const override;
    virtual void mover(char direction) override;

    virtual void setPosicionFila(int row) override;
    virtual void setPosicionColumna(int col) override;
};

#endif // PERSONAJE_H

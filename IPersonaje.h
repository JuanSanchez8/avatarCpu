#/************************************************************
# CRC: IPersonaje (header) - Interfaz abstracta para personajes del juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define los métodos esenciales para la gestión de posición y movimiento de los personajes.
#************************************************************/
// IPersonaje.h
#ifndef IPERSONAJE_H
#define IPERSONAJE_H

class IPersonaje {
public:
    virtual int getPosicionFila() const = 0;
    virtual int getPosicionColumna() const = 0;
    virtual void mover(char direction) = 0;
    virtual void setPosicionFila(int row) = 0;
    virtual void setPosicionColumna(int col) = 0;
    virtual ~IPersonaje() = default;
};

#endif // IPERSONAJE_H

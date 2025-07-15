#/************************************************************
# CRC: Ficha (header) - Declaración de la clase base para casillas del tablero.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la estructura y métodos para las casillas del tablero, como camino, abismo y salida.
#************************************************************/

#ifndef FICHA_H
#define FICHA_H

class Ficha {
protected:
    int row;
    int col;
    char type;

public:
    Ficha(int row, int col, char type);
    virtual ~Ficha() = default;

    int getFila() const;
    int getColumna() const;
    char getTipo() const;
};

#endif // FICHA_H

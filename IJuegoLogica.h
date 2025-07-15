#/************************************************************
# CRC: IJuegoLogica (header) - Interfaz abstracta para la lógica principal del juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define los métodos esenciales para controlar el flujo, estado y puntaje del juego.
#************************************************************/
#ifndef IJUEGOLOGICA_H
#define IJUEGOLOGICA_H

class IJuegoLogica {
public:
    virtual ~IJuegoLogica() = default;
    virtual void moverAvatar(char direction) = 0;
    virtual void iniciar() = 0;
    virtual void puntuar() = 0;
    virtual int getPuntaje() = 0;
    virtual void play(char move) = 0;
};

#endif // IJUEGOLOGICA_H

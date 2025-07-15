#/************************************************************
# CRC: Juego (header) - Declaración de la clase principal de lógica del juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz, atributos y métodos para controlar el flujo, estado y puntaje del juego.
#************************************************************/
#ifndef JUEGO_H
#define JUEGO_H

#include "IJuegoLogica.h"
#include "ITablero.h"
#include "IPersonaje.h"
#include "LogicaDeMovimiento.h"

#include <vector>

class Juego : public IJuegoLogica {
protected:
    ITablero* board;
    std::vector<IPersonaje*> players;
    LogicaDeMovimiento* movementLogic;
    bool state;
    int score;

public:
    Juego(ITablero* board, std::vector<IPersonaje*> players, LogicaDeMovimiento* movementLogic, bool state);
    ~Juego();

    void moverAvatar(char direction) override;
    void mover();
    void iniciar() override;
    bool getEstado();
    bool getWin();
    void puntuar() override;
    int getPuntaje() override;
    void play(char move) override;
};

#endif // JUEGO_H

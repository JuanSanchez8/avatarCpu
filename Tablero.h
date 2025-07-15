#/************************************************************
# CRC: Tablero (header) - Declaración de la clase que representa el tablero de juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la estructura, métodos y atributos para la gestión y acceso al tablero de juego.
#************************************************************/
#ifndef TABLERO_H
#define TABLERO_H

#include <vector>
#include <string>
#include "ITablero.h"

class Tablero : public ITablero {
private:
    std::vector<std::vector<Ficha*>> boardMatrix;
    void clearBoard();
public:
    void cargarDesdeArchivo(const std::string& file) override;
    Ficha* getFicha(int row, int col) const override;
    int getSize() const override;
    ~Tablero();
};

#endif

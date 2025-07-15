#/************************************************************
# CRC: ITablero (header) - Interfaz abstracta para el tablero de juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define los métodos esenciales para la gestión y acceso al tablero de juego.
#************************************************************/
#ifndef ITABLERO_H
#define ITABLERO_H

#include <string>
#include "Ficha.h"

class ITablero {
public:
    virtual ~ITablero() = default;
    virtual void cargarDesdeArchivo(const std::string& file) = 0;
    virtual Ficha* getFicha(int row, int col) const = 0;
    virtual int getSize() const = 0;
};

#endif // ITABLERO_H

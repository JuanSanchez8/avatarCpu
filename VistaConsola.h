#/************************************************************
# CRC: VistaConsola (header) - Declaración de la clase de vista por consola.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Define la interfaz y atributos para la visualización y entrada por consola del juego.
#************************************************************/
#ifndef VISTA_CONSOLA_H
#define VISTA_CONSOLA_H

#include "IVistaJuego.h"
#include "Tablero.h"
#include "Avatar.h"
#include <vector>
#include <string>

// Implementación concreta de IVistaJuego
class VistaConsola : public IVistaJuego {
private:
    ITablero* board;
    std::vector<IPersonaje*> players;
public:
    VistaConsola(ITablero* board, std::vector<IPersonaje*> players);
    ~VistaConsola() override = default;

    void mostrarTablero() override;
    void mostrarJuego() override;
    void limpiarPantalla() override;
    void mostrarMensaje(const std::string& message) override;
    char getEntradaConsola() override;
};

#endif // VISTA_CONSOLA_H
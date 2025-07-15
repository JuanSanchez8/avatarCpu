#include <iostream>
#include <vector>
#include <cstdlib>
#include "Tablero.h"
#include "Camino.h"
#include "Abismo.h"
#include "Salida.h"
#include "Juego.h"
#include "LogicaDeMovimiento.h"
#/************************************************************
# CRC: Clase principal que inicializa y ejecuta el juego de tablero.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Este archivo contiene la función principal que crea el tablero, los personajes, la lógica de movimiento, la vista y controla el ciclo principal del juego, gestionando la interacción con el usuario y el flujo general del programa.
#************************************************************/
#include "VistaConsola.h"
#include "Avatar.h"
#include "AvatarCPU.h"

int main() {
    // Crear un tablero de juego, que será la estructura principal donde se desarrollará la partida.
    Tablero board;
    
    // Cargar la configuración del tablero desde un archivo externo. Esto permite definir la disposición inicial de las casillas, caminos, abismos y la salida.
    board.cargarDesdeArchivo("dataTablero.txt");
    
    // Crear los personajes principales del juego: el jugador humano y el jugador controlado por la CPU.
    IPersonaje* player1 = new Avatar(); // Representa al usuario humano
    IPersonaje* player2 = new AvatarCPU(); // Representa al oponente controlado por la máquina
    
    // Establecer las posiciones iniciales de ambos personajes en el tablero, definiendo sus coordenadas de inicio.
    player1->setPosicionFila(2);
    player1->setPosicionColumna(2);
    player2->setPosicionFila(10);
    player2->setPosicionColumna(5);
    
    // Crear un vector que almacena a todos los jugadores, facilitando la gestión de turnos y movimientos.
    std::vector<IPersonaje*> players = {player1, player2};
    
    // Instanciar la lógica de movimiento, que se encargará de procesar y validar los desplazamientos de los personajes.
    LogicaDeMovimiento movementLogic;
    
    // Crear el objeto principal del juego, que coordina el tablero, los jugadores y la lógica de movimiento.
    Juego game(&board, players, &movementLogic, true);
    
    // Crear la vista de consola, responsable de mostrar el estado del juego y recibir la entrada del usuario.
    VistaConsola view(&board, players);
    
    // Iniciar el juego, inicializando variables y mostrando el mensaje de bienvenida.
    game.iniciar();
    
    // Bucle principal del juego: se repite mientras el juego esté activo y no se haya alcanzado la condición de victoria.
    while(game.getEstado() && !game.getWin()) {
        // Mostrar el estado actual del tablero y los personajes en la consola.
        view.mostrarJuego();
        // Solicitar al usuario que ingrese su movimiento (por ejemplo, W/A/S/D).
        view.mostrarMensaje("Digite su movimiento:");
        
        // Leer la entrada del usuario desde la consola.
        char move = view.getEntradaConsola();
        
        // Mover a los personajes según la entrada recibida, aplicando la lógica de movimiento.
        movementLogic.mover(players, move);
        
        // Actualizar el estado del juego, verificando condiciones de victoria o derrota.
        game.mover();
        
        // Mostrar el puntaje actual del jugador en la consola.
        std::cout << "Puntaje: " << game.getPuntaje() << std::endl;
    }
    
    // Mostrar un mensaje final dependiendo de si el jugador ganó o perdió la partida.
    if(game.getWin()) {
        std::cout << "Felicidades. Has ganado el juego." << std::endl;
    } else {
        std::cout << "Juego terminado." << std::endl;
    }
    
    // Liberar la memoria utilizada por los personajes antes de finalizar el programa.
    delete player1;
    delete player2;
    
    return 0;
}
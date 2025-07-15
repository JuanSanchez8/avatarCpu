#/************************************************************
# CRC: VistaConsola - Implementa la visualización y la interacción por consola del juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Permite mostrar el tablero, los personajes y mensajes en consola, así como recibir la entrada del usuario. Gestiona la representación visual y la comunicación con el usuario durante la partida.
#************************************************************/
#include "VistaConsola.h"
#include "Camino.h"
#include "Abismo.h"
#include "Salida.h"
#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#ifdef _WIN32
#include <conio.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#else
#include <termios.h>
#include <unistd.h>
#endif

VistaConsola::VistaConsola(ITablero* board, std::vector<IPersonaje*> players)
    : board(board), players(players) {}

void VistaConsola::mostrarTablero() {
    limpiarPantalla();
    std::cout << "Fil--Col\t";
    for(int i = 0; i < board->getSize(); i++) {
        std::cout << i << "\t";
    }
    std::cout << "\n";

    for(int i = 0; i < board->getSize(); i++) {
        std::cout << i << "\t\t";
        for(int j = 0; j < board->getSize(); j++) { 
            Ficha* ficha = board->getFicha(i, j);
            std::cout << ficha->getTipo() << "\t";
        }
        std::cout << "\n";
    }
}

void VistaConsola::limpiarPantalla() {
    #ifdef _WIN32
        system("cls"); // Comando para Windows
    #else
        system("clear"); // Comando para Linux y macOS
    #endif
}

void VistaConsola::mostrarJuego() {
    limpiarPantalla();

    for(int i = 0; i < board->getSize(); i++) {
        for(int j = 0; j < board->getSize(); j++) { 
            bool characterInPosition = false;
            
            // Verificar si hay algún personaje en esta posición
            for(size_t k = 0; k < players.size(); k++) {
                if(players[k]->getPosicionFila() == i && players[k]->getPosicionColumna() == j) {
                    if(k == 0) {
                        std::cout << "A" << "\t"; // Avatar humano
                    } else {
                        std::cout << "C" << "\t"; // Avatar CPU
                    }
                    characterInPosition = true;
                    break;
                }
            }
            
            if(!characterInPosition) {
                Ficha* ficha = board->getFicha(i, j);
                if(ficha->getTipo() == '1') {
                    std::srand(std::time(0));
                    int randomValue = std::rand() % 2;
                    if(randomValue == 0) {
                        std::cout << "X" << "\t";
                    } else {
                        std::cout << "Y" << "\t";
                    }
                } else if(ficha->getTipo() == '0') {
                    std::cout << "Z" << "\t";
                } else {
                    std::cout << "M" << "\t";
                }
            }
        }
        std::cout << "\n";
    }
}

void VistaConsola::mostrarMensaje(const std::string& mensaje) {
    std::cout << mensaje << "\n";
}

char VistaConsola::getEntradaConsola() {
    char entrada;
    bool entradaValida = false;

    do {
        std::cout << "Ingrese una opción [aA-Izquierda] [wW-Arriba] [sS-Abajo] [dD-Derecha]: ";
        
        #ifdef _WIN32
            // Para Windows: usar _getch() que no requiere Enter
            entrada = _getch();
            std::cout << entrada << std::endl; // Mostrar la tecla presionada
        #else
            // Para Linux/macOS: configurar terminal para entrada inmediata
            struct termios oldt, newt;
            tcgetattr(STDIN_FILENO, &oldt);
            newt = oldt;
            newt.c_lflag &= ~(ICANON | ECHO);
            tcsetattr(STDIN_FILENO, TCSANOW, &newt);
            
            entrada = getchar();
            std::cout << entrada << std::endl; // Mostrar la tecla presionada
            
            // Restaurar configuración original del terminal
            tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        #endif

        // Convertir a minúscula para simplificar validación
        char entradaMin = std::tolower(entrada);

        // Validar que la entrada sea 'w', 'a', 's' o 'd'
        if (entradaMin == 'w' || entradaMin == 'a' || entradaMin == 's' || entradaMin == 'd') {
            entradaValida = true;
        } else {
            std::cout << "Entrada inválida. Por favor, introduce wW, aA, sS o dD.\n";
        }
    } while (!entradaValida);

    return entrada;
}
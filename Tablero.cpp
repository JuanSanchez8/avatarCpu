#/************************************************************
# CRC: Tablero - Representa la estructura y contenido del tablero de juego.
# Autores: Alejandro Cardona Arellano, Juan Fernando Marmolejo, Juan David Sanchez
# Correos: alejandro.arellano@correounivalle.edu.co, juan.fernando.marmolejo@correounivalle.edu.co, juan.sanchez.navarro@correounivalle.edu.co
# Descripción: Permite cargar el tablero desde archivo, acceder a las casillas y limpiar la memoria asociada. Es la base sobre la que se desarrollan las partidas.
#************************************************************/
#include "Tablero.h"
#include "Camino.h"
#include "Abismo.h"
#include "Salida.h"
#include <fstream>
#include <sstream>
#include <stdexcept>

Tablero::~Tablero() {
    clearBoard();
}

void Tablero::cargarDesdeArchivo(const std::string& file) {
    clearBoard();
    std::ifstream archivo(file);
    if (!archivo.is_open()) {
        throw std::runtime_error("No se pudo abrir el archivo: " + file);
    }

    std::string line;
    int row = 0;
    while (std::getline(archivo, line)) {
        std::vector<Ficha*> currentRow;
        std::istringstream stream(line);
        char cellType;
        int col = 0;

        while (stream >> cellType) {
            if (cellType == '1') {
                currentRow.push_back(new Camino(row, col,'1'));
            } else if (cellType == '0') {
                currentRow.push_back(new Abismo(row, col,'0'));
            } else if (cellType == 'S') {
                currentRow.push_back(new Salida(row, col,'S'));
            } else {
                currentRow.push_back(nullptr);
            }
            col++;
        }
        boardMatrix.push_back(currentRow);
        row++;
    }
}

Ficha* Tablero::getFicha(int row, int col) const {
    if (row < 0 || row >= static_cast<int>(boardMatrix.size()) ||
        col < 0 || col >= static_cast<int>(boardMatrix[row].size())) {
        return nullptr;
    }
    return boardMatrix[row][col];
}

void Tablero::clearBoard() {
    for (auto& row : boardMatrix) {
        for (auto& cell : row) {
            delete cell;
        }
        row.clear();
    }
    boardMatrix.clear(); // Clear the boardMatrix vector
}
int Tablero::getSize() const {
    return boardMatrix.size();
}

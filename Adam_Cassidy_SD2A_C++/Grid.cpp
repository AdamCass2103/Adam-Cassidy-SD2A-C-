#include "Grid.h"
#include <iostream>

Grid::Grid() {
    for (auto &row : cells)
        for (Bug*& cell : row)
            cell = nullptr;
}

Grid::~Grid() {
    for (auto &row : cells)
        for (Bug*& cell : row)
            delete cell;
}

void Grid::display() const {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (cells[i][j] != nullptr)
                std::cout << cells[i][j]->getSymbol() << " ";
            else
                std::cout << ". ";
        }
        std::cout << std::endl;
    }
}

Bug* Grid::getCell(int x, int y) const {
    if (isValid(x, y)) return cells[x][y];
    return nullptr;
}

void Grid::setCell(int x, int y, Bug* bug) {
    if (isValid(x, y)) cells[x][y] = bug;
}

void Grid::removeBug(int x, int y) {
    if (isValid(x, y)) {
        delete cells[x][y];
        cells[x][y] = nullptr;
    }
}

bool Grid::isValid(int x, int y) const {
    return x >= 0 && x < 10 && y >= 0 && y < 10;
}
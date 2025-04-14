#include "Doodlebug.hpp"
#include "Grid.hpp"

Doodlebug::Doodlebug(int startX, int startY)
    : Bug(startX, startY), starveCounter(0) {}

void Doodlebug::move(Grid &grid) {
    // Doodlebug movement logic here (next step)
}

void Doodlebug::breed(Grid &grid) {
    // Breeding logic (next step)
}

char Doodlebug::getSymbol() const {
    return 'D';
}
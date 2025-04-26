#include "Ant.h"
#include "Grid.h"
//123
Ant::Ant(int startX, int startY) : Bug(startX, startY) {}

void Ant::move(Grid &grid) {
    // Ant movement logic here (next step)
}

void Ant::breed(Grid &grid) {
    // Ant breeding logic (next step)
}

char Ant::getSymbol() const {
    return 'A';
}
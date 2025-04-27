#include "../include/Doodlebug.h"
#include "../include/Grid.h"

Doodlebug::Doodlebug(int id, Position pos, Direction dir, int size)
    : Bug(id, pos, dir, size), starveCounter(0) {}

void Doodlebug::move(Grid &grid) {
    // TODO: Doodlebug movement logic
}

void Doodlebug::breed(Grid &grid) {
    // TODO: Doodlebug breeding logic
}

char Doodlebug::getSymbol() const {
    return 'D';
}

std::string Doodlebug::getTypeName() const {
    return "Doodlebug";
}

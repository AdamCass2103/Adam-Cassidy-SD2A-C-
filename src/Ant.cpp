#include "../include/Ant.h"
#include "../include/Grid.h"

Ant::Ant(int id, Position pos, Direction dir, int size)
    : Bug(id, pos, dir, size) {}

void Ant::move(Grid &grid) {
    // TODO: Ant movement logic
}

void Ant::breed(Grid &grid) {
    // TODO: Ant breeding logic
}

char Ant::getSymbol() const {
    return 'A';
}

std::string Ant::getTypeName() const {
    return "Ant";
}
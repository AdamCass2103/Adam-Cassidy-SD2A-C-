#include "include/Hopper.h"
#include "include/Grid.h"
#include <cstdlib>

Hopper::Hopper(int id, Position pos, Direction dir, int size, int hopLen)
    : Bug(id, pos, dir, size), hopLength(hopLen) {}

void Hopper::move(Grid &grid) {
    // TODO: Implement hopper movement
}

void Hopper::breed(Grid &grid) {
    // TODO: Implement hopper breeding
}

char Hopper::getSymbol() const {
    return 'H';
}

std::string Hopper::getTypeName() const {
    return "Hopper";
}

int Hopper::getHopLength() const {
    return hopLength;
}
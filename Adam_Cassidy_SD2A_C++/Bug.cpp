#include "Bug.h"

Bug::Bug(int id, Position pos, Direction dir, int size)
    : id(id), position(pos), direction(dir), size(size), alive(true), breedCounter(0) {
    path.push_back(pos); // start path with initial position
}

int Bug::getId() const { return id; }
Position Bug::getPosition() const { return position; }
void Bug::setPosition(Position newPos) { position = newPos; }
bool Bug::isAlive() const { return alive; }
void Bug::setAlive(bool status) { alive = status; }
int Bug::getSize() const { return size; }
void Bug::grow(int amount) { size += amount; }
void Bug::addToPath(Position pos) { path.push_back(pos); }
std::list<Position> Bug::getPath() const { return path; }
Direction Bug::getDirection() const { return direction; }
void Bug::setDirection(Direction dir) { direction = dir; }
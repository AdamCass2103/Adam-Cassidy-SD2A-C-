#include "Bug.h"

Bug::Bug(int startX, int startY) : x(startX), y(startY), alive(true), breedCounter(0) {}

int Bug::getX() const { return x; }
int Bug::getY() const { return y; }
bool Bug::isAlive() const { return alive; }
void Bug::setAlive(bool status) { alive = status; }
void Bug::setPosition(int newX, int newY) { x = newX; y = newY; }
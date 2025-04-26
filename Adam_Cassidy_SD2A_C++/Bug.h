#ifndef BUG_H
#define BUG_H

#include <list>  // NEW: for path
#include <string> // NEW: for getTypeName()
#include "Position.h"  // NEW: for position struct

class Grid; // Forward declaration

enum class Direction { North = 1, East, South, West };  // NEW: better directions

class Bug {
protected:
    int id;
    Position position;
    Direction direction;
    int size;
    bool alive;
    int breedCounter;
    std::list<Position> path; // NEW: track life history

public:
    Bug(int id, Position pos, Direction dir, int size);
    virtual ~Bug() = default;

    virtual void move(Grid &grid) = 0;
    virtual void breed(Grid &grid) = 0;
    virtual char getSymbol() const = 0;
    virtual std::string getTypeName() const = 0; // NEW: Crawler / Hopper / Doodlebug

    int getId() const;
    Position getPosition() const;
    void setPosition(Position newPos);
    bool isAlive() const;
    void setAlive(bool status);
    int getSize() const;
    void grow(int amount); // NEW: grows after eating
    void addToPath(Position pos); // NEW: record movement
    std::list<Position> getPath() const;
    Direction getDirection() const;
    void setDirection(Direction dir);
};

#endif
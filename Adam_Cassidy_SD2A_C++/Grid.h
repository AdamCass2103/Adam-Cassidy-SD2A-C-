#ifndef GRID_H
#define GRID_H

#include "Bug.h"

class Grid {
private:
    Bug* cells[10][10];

public:
    Grid();
    ~Grid();
    void display() const;
    Bug* getCell(int x, int y) const;
    void setCell(int x, int y, Bug* bug);
    void removeBug(int x, int y);
    bool isValid(int x, int y) const;
};

#endif
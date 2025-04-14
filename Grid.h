#ifndef GRID_HPP
#define GRID_HPP

#include <vector>
#include "Bug.hpp"

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
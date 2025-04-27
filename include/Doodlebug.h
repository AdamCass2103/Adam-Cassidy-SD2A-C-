#ifndef DOODLEBUG_H
#define DOODLEBUG_H

#include "Bug.h"

class Doodlebug : public Bug {
private:
    int starveCounter;

public:
    Doodlebug(int id, Position pos, Direction dir, int size);
    void move(Grid &grid) override;
    void breed(Grid &grid) override;
    char getSymbol() const override;
    std::string getTypeName() const override;
};

#endif
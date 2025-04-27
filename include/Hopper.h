#ifndef HOPPER_H
#define HOPPER_H

#include "Bug.h"

class Hopper : public Bug {
private:
    int hopLength;

public:
    Hopper(int id, Position pos, Direction dir, int size, int hopLen);

    void move(Grid &grid) override;
    void breed(Grid &grid) override;
    char getSymbol() const override;
    std::string getTypeName() const override;

    int getHopLength() const;
};

#endif
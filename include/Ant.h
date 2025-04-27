#ifndef ANT_H
#define ANT_H

#include "Bug.h"

class Ant : public Bug {
public:
    Ant(int id, Position pos, Direction dir, int size);
    void move(Grid &grid) override;
    void breed(Grid &grid) override;
    char getSymbol() const override;
    std::string getTypeName() const override;
};

#endif

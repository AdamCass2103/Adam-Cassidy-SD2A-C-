#ifndef ANT_H
#define ANT_H

#include "Bug.h"

class Ant : public Bug {
public:
    Ant(int startX, int startY);
    void move(Grid &grid) override;
    void breed(Grid &grid) override;
    char getSymbol() const override;
};

#endif
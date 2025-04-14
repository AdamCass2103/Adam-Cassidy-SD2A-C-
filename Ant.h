#ifndef ANT_HPP
#define ANT_HPP

#include "Bug.hpp"

class Ant : public Bug {
public:
    Ant(int startX, int startY);
    void move(Grid &grid) override;
    void breed(Grid &grid) override;
    char getSymbol() const override;
};

#endif

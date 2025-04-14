#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP

#include "Bug.hpp"

class Doodlebug : public Bug {
private:
    int starveCounter;

public:
    Doodlebug(int startX, int startY);
    void move(Grid &grid) override;
    void breed(Grid &grid) override;
    char getSymbol() const override;
};

#endif
#ifndef BUG_H
#define BUG_H

class Grid; // Forward declaration

class Bug {
protected:
    int x, y;
    bool alive;
    int breedCounter;

public:
    Bug(int startX, int startY);
    virtual ~Bug() = default;

    virtual void move(Grid &grid) = 0;
    virtual void breed(Grid &grid) = 0;
    virtual char getSymbol() const = 0;

    int getX() const;
    int getY() const;
    bool isAlive() const;
    void setAlive(bool status);
    void setPosition(int newX, int newY);
};

#endif
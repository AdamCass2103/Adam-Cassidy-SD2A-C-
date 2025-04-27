#ifndef GRID_H
#define GRID_H

#include <vector>
#include "Bug.h"

class Grid {
private:
    std::vector<Bug*> bugVector;

public:
    Grid();
    ~Grid();
    void addBug(Bug* bug);
    void display() const;
    Bug* findBugById(int id) const;
    void tapBoard();
    void displayLifeHistory() const;
    void saveLifeHistoryToFile() const;
    void displayAllCells() const;
    void runSimulation();
};

#endif
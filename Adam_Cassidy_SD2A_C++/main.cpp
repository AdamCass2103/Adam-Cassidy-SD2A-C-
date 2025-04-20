#include <iostream>
#include "Grid.h"
#include "Ant.h"
#include "Doodlebug.h"

int main() {
    Grid grid;

    // Place some bugs
    grid.setCell(2, 3, new Ant(2, 3));
    grid.setCell(5, 5, new Doodlebug(5, 5));

    std::cout << "Welcome to A Bug's Life Simulation!\n";
    grid.display();

    return 0;
}
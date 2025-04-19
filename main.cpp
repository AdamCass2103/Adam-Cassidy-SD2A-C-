#include <iostream>
#include "Grid.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"

int main() {
    Grid grid;

    // Place some bugs
    grid.setCell(2, 3, new Ant(2, 3));
    grid.setCell(5, 5, new Doodlebug(5, 5));

    std::cout << "Welcome to A Bug's Life Simulation!\n";
    grid.display();

    // TODO: Menu and interaction logic next
    return 0;
}
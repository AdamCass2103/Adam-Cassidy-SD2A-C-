#include <iostream>
#include <fstream>
#include "../include/Grid.h"
#include "../include/Ant.h"
#include "../include/Doodlebug.h"
#include "../include/Hopper.h"
#include "../include/Position.h"
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Bug's Life Simulation");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // Add your game rendering code here (for now, just a simple color)
        window.display();
    }

    return 0;
}
Direction stringToDirection(const std::string& dirStr) {
    if (dirStr == "North") return Direction::North;
    if (dirStr == "East") return Direction::East;
    if (dirStr == "South") return Direction::South;
    if (dirStr == "West") return Direction::West;
    return Direction::North; // default
}

void initializeBugBoard(Grid& grid) {
    std::ifstream file("bugs.txt");
    if (!file) {
        std::cout << "Could not open bugs.txt!\n";
        return;
    }

    std::string type, dirStr;
    int id, x, y, size, hopLength;
    while (file >> type >> id >> x >> y >> dirStr >> size) {
        Direction dir = stringToDirection(dirStr);
        Position pos(x, y);

        if (type == "Ant") {
            grid.addBug(new Ant(id, pos, dir, size));
        } else if (type == "Doodlebug") {
            grid.addBug(new Doodlebug(id, pos, dir, size));
        } else if (type == "Hopper") {
            file >> hopLength;
            grid.addBug(new Hopper(id, pos, dir, size, hopLength));
        }
    }
    file.close();
}

void findBug(Grid& grid) {
    int searchId;
    std::cout << "Enter Bug ID: ";
    std::cin >> searchId;
    Bug* found = grid.findBugById(searchId);
    if (found) {
        Position pos = found->getPosition();
        std::cout << found->getTypeName() << " " << found->getId()
                  << " (" << pos.x << "," << pos.y << ") Size: " << found->getSize()
                  << (found->isAlive() ? " Alive" : " Dead") << "\n";
    } else {
        std::cout << "Bug " << searchId << " not found!\n";
    }
}
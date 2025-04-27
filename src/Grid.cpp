#include "../include/Grid.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <ctime>

Grid::Grid() {}

Grid::~Grid() {
    for (Bug* bug : bugVector)
        delete bug;
}

void Grid::addBug(Bug* bug) {
    bugVector.push_back(bug);
}

void Grid::display() const {
    for (const Bug* bug : bugVector) {
        if (bug->isAlive()) {
            Position pos = bug->getPosition();
            std::cout << bug->getId() << " " << bug->getTypeName() << " (" << pos.x << "," << pos.y << ") "
                      << bug->getSize() << " Alive\n";
        }
    }
}

Bug* Grid::findBugById(int id) const {
    for (Bug* bug : bugVector) {
        if (bug->getId() == id && bug->isAlive())
            return bug;
    }
    return nullptr;
}

void Grid::tapBoard() {
    for (Bug* bug : bugVector) {
        if (bug->isAlive())
            bug->move(*this);
    }

}

void Grid::displayLifeHistory() const {
    for (const Bug* bug : bugVector) {
        std::cout << "Bug " << bug->getId() << " (" << bug->getTypeName() << ") Path: ";
        for (const Position& pos : bug->getPath())
            std::cout << "(" << pos.x << "," << pos.y << "), ";
        std::cout << (bug->isAlive() ? "Alive" : "Dead") << "\n";
    }
}

void Grid::saveLifeHistoryToFile() const {
    std::ofstream out("bugs_life_history.txt");
    for (const Bug* bug : bugVector) {
        out << "Bug " << bug->getId() << " (" << bug->getTypeName() << ") Path: ";
        for (const Position& pos : bug->getPath())
            out << "(" << pos.x << "," << pos.y << "), ";
        out << (bug->isAlive() ? "Alive" : "Dead") << "\n";
    }
    out.close();
}

void Grid::displayAllCells() const {
    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 10; ++x) {
            bool found = false;
            for (Bug* bug : bugVector) {
                if (bug->isAlive() && bug->getPosition().x == x && bug->getPosition().y == y) {
                    std::cout << "(" << x << "," << y << "): " << bug->getTypeName() << " " << bug->getId() << "\n";
                    found = true;
                }
            }
            if (!found)
                std::cout << "(" << x << "," << y << "): empty\n";
        }
    }
}

void Grid::runSimulation() {
    while (true) {
        tapBoard();
        display();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        // (Later) Stop when only one bug is alive
    }
}
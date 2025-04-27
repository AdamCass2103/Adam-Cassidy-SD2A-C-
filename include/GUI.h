#pragma once
#include <SFML/Graphics.hpp>
#include "Grid.h"
#include "Bug.h"

class GUI {
private:
    sf::RenderWindow window;
    sf::Font font;
    sf::Text infoText;

    // Textures
    sf::Texture antTexture;
    sf::Texture hopperTexture;
    sf::Texture doodlebugTexture;
    sf::Texture backgroundTexture;

    // Sprites
    std::map<int, sf::Sprite> bugSprites;
    sf::Sprite background;

    Grid& grid; // Reference to your existing grid

public:
    GUI(Grid& grid);
    bool init();
    void run();
    void handleEvents();
    void update();
    void render();
    void loadTextures();
    void createBugSprites();
};
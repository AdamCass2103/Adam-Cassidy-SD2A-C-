#pragma once
#include <SFML/Graphics.hpp>

class GUI {
private:
    sf::Texture bugTexture;
    sf::Texture hopperTexture;
    sf::Texture doodlebugTexture;
    sf::Font font;
    
public:
    bool loadResources();  // Declaration
};
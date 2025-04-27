#include "../include/GUI.h"  // Must include the header!

bool GUI::loadResources() {  // Proper class scope
    if (!bugTexture.loadFromFile("assets/textures/ant.png")) {
        return false;
    }
    if (!hopperTexture.loadFromFile("assets/textures/hopper.png")) {
        return false;
    }
    if (!font.loadFromFile("assets/fonts/PressStart2P.ttf")) {
        return false;
    }
    if (!font.loadFromFile("assets/textures/grass.png")) {
        return false;
    }
    if (!font.loadFromFile("assets/textures/doodlebug.png")) {
        return false;
    }
    return true;
}
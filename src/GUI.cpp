// In GUI.cpp
bool GUI::loadResources() {
    // Load textures
    if (!bugTexture.loadFromFile("assets/textures/ant.png")) {
        return false;
    }
    if (!hopperTexture.loadFromFile("assets/textures/hopper.png")) {
        return false;
    }
    // ... load other textures

    // Load font
    if (!font.loadFromFile("assets/fonts/PressStart2P.ttf")) {
        return false;
    }

    return true;
}
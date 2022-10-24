
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Pong", Style::Fullscreen);

    return 0;
}


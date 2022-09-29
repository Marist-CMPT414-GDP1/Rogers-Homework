#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main()
{
    VideoMode vm(500, 500);
    RenderWindow window(vm, "Circle");
    
    Texture axeTexture;
    axeTexture.loadFromFile("graphics/axe.png");
    Sprite axeSprite;
    Sprite axeSprite2;
    Sprite axeSprite3;
    Sprite axeSprite4;
    axeSprite.setTexture(axeTexture);
    axeSprite.setPosition(250, 250);
    axeSprite2.setTexture(axeTexture);
    axeSprite2.setPosition(250, 250);
    axeSprite2.rotate(90.f);
    axeSprite3.setTexture(axeTexture);
    axeSprite3.setPosition(250, 250);
    axeSprite3.rotate(180.f);
    axeSprite4.setTexture(axeTexture);
    axeSprite4.setPosition(250, 250);
    axeSprite4.rotate(270.f);

    bool rotationDirection = true;

    while (window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            rotationDirection = !rotationDirection;
        }

        window.draw(axeSprite);
        window.draw(axeSprite2);
        window.draw(axeSprite3);
        window.draw(axeSprite4);
        window.display();


        if (rotationDirection==true)
        {
            axeSprite.rotate(.1f);
            window.draw(axeSprite);
            axeSprite2.rotate(.1f);
            window.draw(axeSprite2);
            axeSprite3.rotate(.1f);
            window.draw(axeSprite3);
            axeSprite4.rotate(.1f);
            window.draw(axeSprite4);
            window.display();
        }
        else
        {
            axeSprite.rotate(-.1f);
            window.draw(axeSprite);
            axeSprite2.rotate(-.1f);
            window.draw(axeSprite2);
            axeSprite3.rotate(-.1f);
            window.draw(axeSprite3);
            axeSprite4.rotate(-.1f);
            window.draw(axeSprite4);
            window.display();
        }
    }
    
    return 0;
}

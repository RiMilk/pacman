#include "main.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 768), "Pacman");
    height = 768;
    width = 1024;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        drawMenu(window);
        window.display();
    }

    return 0;
}

void drawMenu(sf::RenderWindow &win)
{
    float heightStart = 100;
    float widthStart = width / 2;
    float xStart = width / 4;
    float yStart = height / 4;
    sf::RectangleShape start{{widthStart , heightStart}};
    start.setFillColor(sf::Color::White);
    start.setPosition({xStart, yStart});

    win.draw(start);


    float heightSetting = 100;
    float widthSetting = width / 2;
    float xSetting = width / 4;
    float ySetting = height / 4 + height / 5;
    sf::RectangleShape setting{{widthSetting , heightSetting}};
    setting.setFillColor(sf::Color::White);
    setting.setPosition({xSetting, ySetting});

    win.draw(setting);

    float heightExit = 100;
    float widthExit  = width / 2;
    float xExit = width / 4;
    float yExit = height / 4 + (height / 5) * 2;
    sf::RectangleShape exit{{widthExit , heightExit}};
    exit.setFillColor(sf::Color::White);
    exit.setPosition({xExit, yExit});

    win.draw(exit);

}

/*(c) RiMilke - main.cpp*/
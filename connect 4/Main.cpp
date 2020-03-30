#include <SFML/Graphics.hpp>
#include<iostream>
#include "Menu.h"
using namespace sf;
using namespace std;
int main()
{
    RenderWindow window(VideoMode(600, 600), "Connect 4");
    Menu menu(600, 600);
    Event event;
    Texture texture;
    texture.loadFromFile("connect41.png");
    Sprite sprite(texture);

    
 
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Up) {
                    menu.moveup();
                    break;
                }
                if (event.key.code == sf::Keyboard::Down) {
                    menu.movedown();
                    break;
                }
            }
        }

        window.clear();
        window.draw(sprite);
        
        menu.draw(window);
        window.display();
    }


    return 0;
}
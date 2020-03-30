#include "Menu.h"
#define SFML_NO_DEPRECATED_WARNINGS

Menu::Menu(float width, float hight)
{
	if(!font.loadFromFile("arial.ttf")){}
	mainMenu[0].setFont(font);
	mainMenu[0].setColor(sf::Color::Red);
	mainMenu[0].setString("Play");
	mainMenu[0].setCharacterSize(50);
	mainMenu[0].setPosition(sf::Vector2f(width / 2 - 50 , hight / (Max_main_menu + 1)));


	mainMenu[1].setFont(font);
	mainMenu[1].setColor(sf::Color::White);
	mainMenu[1].setString("Score");
	mainMenu[1].setCharacterSize(50);
	mainMenu[1].setPosition(sf::Vector2f(width / 2 - 50 , hight / (Max_main_menu + 1) * 2));


	mainMenu[2].setFont(font);
	mainMenu[2].setColor(sf::Color::White);
	mainMenu[2].setString("Exit");
	mainMenu[2].setCharacterSize(50);
	mainMenu[2].setPosition(sf::Vector2f(width / 2 - 50 , hight / (Max_main_menu + 1) * 3));
	mainMenuSelected = 0;

}


Menu::~Menu()
{

}


void Menu::draw(sf::RenderWindow& window) {
	for (int i = 0; i < 3; i++) {
		window.draw(mainMenu[i]);
	}
}


void Menu::movedown() {
	if (mainMenuSelected + 1 <= Max_main_menu) {
		mainMenu[mainMenuSelected].setColor(sf::Color::White);
		mainMenuSelected++;
		if (mainMenuSelected == 3) {
			mainMenuSelected = 0;
		}
		mainMenu[mainMenuSelected].setColor(sf::Color::Red);
	}
}

void Menu::moveup() {
	if (mainMenuSelected - 1 >= -1) {
		mainMenu[mainMenuSelected].setColor(sf::Color::White);
		mainMenuSelected--;
		if (mainMenuSelected == -1) {
			mainMenuSelected = 2;
		}
		mainMenu[mainMenuSelected].setColor(sf::Color::Red);
		}
	}



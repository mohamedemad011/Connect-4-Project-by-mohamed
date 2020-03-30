#pragma once
#pragma warning (disable : 4996)
#include <SFML/Graphics.hpp>
#define Max_main_menu 3
class Menu
{
public:
	Menu();
	Menu(float width, float hight);
	void draw(sf::RenderWindow &window);
	void moveup();
	void movedown();
	
	~Menu();
private:
	int mainMenuSelected;
	sf::Font font;
	sf::Text mainMenu[Max_main_menu];
	
};


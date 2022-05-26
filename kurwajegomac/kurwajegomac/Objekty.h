#pragma once
#include <SFML/Graphics.hpp>

class Objekty
{
public:
	Objekty();

	void stwórz(sf::RenderWindow* okno);
	sf::RectangleShape GetShape();

protected:
	sf::RectangleShape kszta³t;

};
#pragma once
#include <SFML/Graphics.hpp>

class Objekty
{
public:
	Objekty();

	void stw�rz(sf::RenderWindow* okno);
	sf::RectangleShape GetShape();

protected:
	sf::RectangleShape kszta�t;

};
#pragma once
#include <SFML/Graphics.hpp>
#include"Objekty.h"
#include <string>


class Samoch�d :public Objekty
{
public:
	Samoch�d(float pozycjaX, float pozycjaY,std::string �cie�ka, int szybko��);

	void ruszaj(sf::Vector2u size);
	sf::Texture A;
	sf::Sprite A1;


private:
	float punktStartX, punktStarty;
	float szybko��;
	
};


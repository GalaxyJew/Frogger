#pragma once
#include <SFML/Graphics.hpp>
#include"Objekty.h"
#include <string>


class Samochód :public Objekty
{
public:
	Samochód(float pozycjaX, float pozycjaY,std::string œcie¿ka, int szybkoœæ);

	void ruszaj(sf::Vector2u size);
	sf::Texture A;
	sf::Sprite A1;


private:
	float punktStartX, punktStarty;
	float szybkoœæ;
	
};


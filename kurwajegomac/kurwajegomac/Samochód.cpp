#include "Samoch�d.h"
#include"liczby.h"
#include<SFML/Graphics.hpp>

Samoch�d::Samoch�d(float pozycjaX, float pozycjaY,std::string �cie�ka, int szybko��)
{
	if (!A.loadFromFile(�cie�ka))
	{
		return;
	}
	A1.setTexture(A);
	
	
	switch (szybko��)
	{
	case 1:
	{
		this->szybko�� = samoch�d_szybko��;
	}
	break;
	
	case 2:
	{
		this->szybko�� = samoch�d_szybko��1;
	}
	break;
	case 3:
	{
		this->szybko�� = samoch�d_szybko��2;
	}
	break;
	}
	kszta�t.setSize(sf::Vector2f(1, 1));
	/*switch (wielko��)
	{
	case 1:
	{
		kszta�t.setSize(sf::Vector2f(1, 1));
	}
	break;
	case 2:
	{
		kszta�t.setSize(sf::Vector2f(1, 1));
	}
	break;
	case 3:
	{
		kszta�t.setSize(sf::Vector2f(1, 1));
	}
	break;
	}
	*/
	kszta�t.setOrigin(kszta�t.getSize().x / 2, kszta�t.getSize().y / 2);
	A1.setOrigin(A1.getGlobalBounds().width/2, A1.getGlobalBounds().height / 2);


	kszta�t.setPosition(sf::Vector2f(pozycjaX, pozycjaY));
	A1.setPosition(sf::Vector2f(pozycjaX, pozycjaY));


	punktStartX = pozycjaX;
	punktStarty = pozycjaY;
}



void Samoch�d::ruszaj(sf::Vector2u size)
{
	kszta�t.move(szybko��, 0);
	A1.move(szybko��, 0);
	if (kszta�t.getPosition().x > size.x)
	{
		kszta�t.setPosition(sf::Vector2f(-kszta�t.getSize().x, punktStarty));
		A1.setPosition(sf::Vector2f(-kszta�t.getSize().x, punktStarty));
	}

}
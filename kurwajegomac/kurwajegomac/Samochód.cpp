#include "Samochód.h"
#include"liczby.h"
#include<SFML/Graphics.hpp>

Samochód::Samochód(float pozycjaX, float pozycjaY,std::string œcie¿ka, int szybkoœæ)
{
	if (!A.loadFromFile(œcie¿ka))
	{
		return;
	}
	A1.setTexture(A);
	
	
	switch (szybkoœæ)
	{
	case 1:
	{
		this->szybkoœæ = samochód_szybkoœæ;
	}
	break;
	
	case 2:
	{
		this->szybkoœæ = samochód_szybkoœæ1;
	}
	break;
	case 3:
	{
		this->szybkoœæ = samochód_szybkoœæ2;
	}
	break;
	}
	kszta³t.setSize(sf::Vector2f(1, 1));
	/*switch (wielkoœæ)
	{
	case 1:
	{
		kszta³t.setSize(sf::Vector2f(1, 1));
	}
	break;
	case 2:
	{
		kszta³t.setSize(sf::Vector2f(1, 1));
	}
	break;
	case 3:
	{
		kszta³t.setSize(sf::Vector2f(1, 1));
	}
	break;
	}
	*/
	kszta³t.setOrigin(kszta³t.getSize().x / 2, kszta³t.getSize().y / 2);
	A1.setOrigin(A1.getGlobalBounds().width/2, A1.getGlobalBounds().height / 2);


	kszta³t.setPosition(sf::Vector2f(pozycjaX, pozycjaY));
	A1.setPosition(sf::Vector2f(pozycjaX, pozycjaY));


	punktStartX = pozycjaX;
	punktStarty = pozycjaY;
}



void Samochód::ruszaj(sf::Vector2u size)
{
	kszta³t.move(szybkoœæ, 0);
	A1.move(szybkoœæ, 0);
	if (kszta³t.getPosition().x > size.x)
	{
		kszta³t.setPosition(sf::Vector2f(-kszta³t.getSize().x, punktStarty));
		A1.setPosition(sf::Vector2f(-kszta³t.getSize().x, punktStarty));
	}

}
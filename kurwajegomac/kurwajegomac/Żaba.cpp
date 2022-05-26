#include "�aba.h"
#include "liczby.h"


�aba::�aba(sf::Vector2u size)
{
	kszta�t.setSize(sf::Vector2f(rozmiar_postaci_szeroko��, rozmiar_postaci_d�ugo��));
	kszta�t.setPosition(sf::Vector2f(kszta�t.getPosition().x, size.y - kszta�t.getSize().y));
}


void �aba::ruszaj(sf::Event co�_si�_sta�o)
{
	if (sf::Keyboard::Key::A == co�_si�_sta�o.key.code)
	{
		kszta�t.move(-szybko��_postaci, 0);
	}
	else if (sf::Keyboard::Key::D == co�_si�_sta�o.key.code)
	{
		kszta�t.move(szybko��_postaci, 0);
	}
	else if (sf::Keyboard::Key::W == co�_si�_sta�o.key.code)
	{
		kszta�t.move(0, -szybko��_postaci);
	}
	else if (sf::Keyboard::Key::S == co�_si�_sta�o.key.code)
	{
		kszta�t.move(0, szybko��_postaci);
	}
}


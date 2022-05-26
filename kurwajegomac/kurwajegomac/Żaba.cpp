#include "¯aba.h"
#include "liczby.h"


¯aba::¯aba(sf::Vector2u size)
{
	kszta³t.setSize(sf::Vector2f(rozmiar_postaci_szerokoœæ, rozmiar_postaci_d³ugoœæ));
	kszta³t.setPosition(sf::Vector2f(kszta³t.getPosition().x, size.y - kszta³t.getSize().y));
}


void ¯aba::ruszaj(sf::Event coœ_siê_sta³o)
{
	if (sf::Keyboard::Key::A == coœ_siê_sta³o.key.code)
	{
		kszta³t.move(-szybkoœæ_postaci, 0);
	}
	else if (sf::Keyboard::Key::D == coœ_siê_sta³o.key.code)
	{
		kszta³t.move(szybkoœæ_postaci, 0);
	}
	else if (sf::Keyboard::Key::W == coœ_siê_sta³o.key.code)
	{
		kszta³t.move(0, -szybkoœæ_postaci);
	}
	else if (sf::Keyboard::Key::S == coœ_siê_sta³o.key.code)
	{
		kszta³t.move(0, szybkoœæ_postaci);
	}
}


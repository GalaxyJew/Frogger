#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow okno(sf::VideoMode(1280, 960), "SFML Starter Template");

	sf::RectangleShape żaba;

	żaba.setSize(sf::Vector2f(80, 80));
	żaba.setPosition(sf::Vector2f(żaba.getPosition().x, okno.getSize().y - żaba.getSize().y));


	sf::RectangleShape ciężarówka;

	ciężarówka.setSize(sf::Vector2f(120, 60));
	ciężarówka.setFillColor(sf::Color::Red);
	ciężarówka.setPosition(sf::Vector2f(ciężarówka.getPosition().x, okno.getSize().y / 2 - ciężarówka.getSize().y));

	sf::RectangleShape ciężarówka1;
	ciężarówka1.setSize(sf::Vector2f(80, 60));
	ciężarówka1.setFillColor(sf::Color::Blue);
	ciężarówka1.setPosition(sf::Vector2f(ciężarówka1.getPosition().x, okno.getSize().y / 4 - ciężarówka1.getSize().y));
	while (okno.isOpen())
	{
		
		sf::Event coś_się_stało;

		while (okno.pollEvent(coś_się_stało))
		{
			switch (coś_się_stało.type)
			{
			case sf::Event::KeyReleased:

				if (sf::Keyboard::Key::A == coś_się_stało.key.code)
				{
					żaba.move(-80, 0);
				}
				else if (sf::Keyboard::Key::D == coś_się_stało.key.code)
				{
					żaba.move(80, 0);
				}
				else if (sf::Keyboard::Key::W == coś_się_stało.key.code)
				{
					żaba.move(0, -80);
				}
				else if (sf::Keyboard::Key::S == coś_się_stało.key.code)
				{
					żaba.move(0, 80);
				}
			}
		}

	
		ciężarówka.move(0.2, 0);

		if (ciężarówka.getPosition().x > okno.getSize().x)
		{
			ciężarówka.setPosition(sf::Vector2f(-ciężarówka.getSize().x, okno.getSize().y / 2 - ciężarówka.getSize().y));
		}
		ciężarówka1.move(0.15, 0);

		if (ciężarówka1.getPosition().x > okno.getSize().x)
		{
			ciężarówka1.setPosition(sf::Vector2f(-ciężarówka1.getSize().x, okno.getSize().y / 4 - ciężarówka1.getSize().y));
		}

		if (żaba.getGlobalBounds().intersects(ciężarówka1.getGlobalBounds()))
		{
			okno.close();
		}
		if (żaba.getGlobalBounds().intersects(ciężarówka.getGlobalBounds()))
		{
			okno.close();
		}

		okno.clear();

	
		okno.draw(żaba);
		okno.draw(ciężarówka);
			okno.draw(ciężarówka1);

		okno.display();
	}

	return EXIT_SUCCESS;
}
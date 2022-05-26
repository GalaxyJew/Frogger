#include "Kontent.h"
#include<SFML/Graphics.hpp>
#include <iostream>
#include"Samochód.h"
Kontent::Kontent()
{
	okno = new sf::RenderWindow(sf::VideoMode(1280, 720), "gierka", sf::Style::Fullscreen);
	
	if(!pod³oga.loadFromFile("lavender_tlo.png"))
	{
		return;
	}
		if (!œciana.loadFromFile("lavender_granica.png"))
		{
			return;
		}
		if (!trawa.loadFromFile("trawa.jpg"))
		{
			return;
		}

	t³o.setTexture(pod³oga);
	pod³oga.setRepeated(true);
	t³o.setTextureRect(sf::IntRect(0, 0, 1220, 660));
t³o.setPosition(30, 30);

	granica.setTexture(œciana);
	œciana.setRepeated(true);
	granica.setTextureRect(sf::IntRect(0, 0, 1280, 720));
	

	chillera.setTexture(trawa);
	trawa.setRepeated(true);
	chillera.setTextureRect(sf::IntRect (60,30,1220,30));
	


	//jak zrobiæ randomowy czas startu
	//pêtla na tworzenie obiektów for?
	//odwrotny ruch 
	//tekstura na postaæ
	//randomowe spownpointy w polu 
	//punktacja
	//¿ycia
	//poziom trudnoœci-->wiêcej obiektów

	¿aba = new ¯aba(okno->getSize());

	samochód = new Samochód(0,(okno->getSize().y / 24+15)+90, "lavender enemy 1.png",1); //szybki
	samochód1 = new Samochód(0, (okno->getSize().y / 24 + 15) + 150, "lavender enemy 1.png", 1); 
	samochód2= new Samochód(0, (okno->getSize().y / 24 + 15) + 270, "lavender enemy 1.png", 1); 
	samochód3 = new Samochód(0, (okno->getSize().y / 24 + 15) + 330, "lavender enemy 1.png", 1); 
	samochód4 = new Samochód(0, (okno->getSize().y / 24 + 15) + 410, "lavender enemy 1.png", 1); 
	samochód5 = new Samochód(0, (okno->getSize().y / 24 + 15) + 530, "lavender enemy 1.png", 1);
	
	samochód6 = new Samochód(0,(okno->getSize().y / 24+15)+60 ,"lavender enemy2.gif"  ,2); //œredni
	samochód7 = new Samochód(0, (okno->getSize().y / 24 + 15) + 120, "lavender enemy2.gif", 2); 
	samochód8 = new Samochód(0, (okno->getSize().y / 24 + 15) + 210, "lavender enemy2.gif", 2); 
	samochód9 = new Samochód(0, (okno->getSize().y / 24 + 15) + 310, "lavender enemy2.gif", 2); 
	samochód10 = new Samochód(0, (okno->getSize().y / 24 + 15) + 450, "lavender enemy2.gif", 2); 
	samochód11 = new Samochód(0, (okno->getSize().y / 24 + 15) + 480, "lavender enemy2.gif", 2); 
	samochód12 = new Samochód(0, (okno->getSize().y / 24 + 15) + 600, "lavender enemy2.gif", 2); 
	samochód13 = new Samochód(0, (okno->getSize().y / 24 + 15) + 630, "lavender enemy2.gif", 2); 

	samochód14 = new Samochód(0,(okno->getSize().y / 24+15)+240,"lavender enemy 3.png" ,3);//wolny 
	samochód15 = new Samochód(0, (okno->getSize().y / 24 + 15) + 360, "lavender enemy 3.png", 3);
	samochód16 = new Samochód(0, (okno->getSize().y / 24 + 15) + 390, "lavender enemy 3.png", 3); 
	samochód17 = new Samochód(0, (okno->getSize().y / 24 + 15) + 570, "lavender enemy 3.png", 3);
	samochód18 = new Samochód(0, (okno->getSize().y / 24 + 15) + 30, "lavender enemy 3.png", 3);
	
	
	


}


void Kontent::pêtla_gry()
{
	while (okno->isOpen())
	{

		sf::Event coœ_siê_sta³o;

		while (okno->pollEvent(coœ_siê_sta³o))
		{
			switch (coœ_siê_sta³o.type)
			{
			case sf::Event::KeyReleased:
				¿aba->ruszaj(coœ_siê_sta³o);
				break;
			case sf::Event::KeyPressed:
				if (coœ_siê_sta³o.key.code == sf::Keyboard::Escape)
					okno->close();
				break;
			}
		}

		//przeszkody
		samochód->ruszaj(okno->getSize());
		samochód1->ruszaj(okno->getSize());
		samochód2->ruszaj(okno->getSize());
		samochód3->ruszaj(okno->getSize());
		samochód4->ruszaj(okno->getSize());
		samochód5->ruszaj(okno->getSize());
		samochód6->ruszaj(okno->getSize());
		samochód7->ruszaj(okno->getSize());
		samochód8->ruszaj(okno->getSize());
		samochód9->ruszaj(okno->getSize());
		samochód10->ruszaj(okno->getSize());
		samochód11->ruszaj(okno->getSize());
		samochód12->ruszaj(okno->getSize());
		samochód13->ruszaj(okno->getSize());
		samochód14->ruszaj(okno->getSize());
		samochód15->ruszaj(okno->getSize());
		samochód16->ruszaj(okno->getSize());
		samochód17->ruszaj(okno->getSize());
		samochód18->ruszaj(okno->getSize());
	


		if (¿aba->GetShape().getGlobalBounds().intersects(samochód->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód1->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód2->GetShape().getGlobalBounds()))
		{
			okno->close();
		}if (¿aba->GetShape().getGlobalBounds().intersects(samochód3->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód4->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód5->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód6->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód7->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód8->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód9->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód10->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód11->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód12->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód13->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód14->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód15->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód16->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód17->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (¿aba->GetShape().getGlobalBounds().intersects(samochód18->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		
		okno->clear();
		


		okno->draw(granica);
		okno->draw(t³o);
		okno->draw(chillera);
		chillera.setPosition(30, 30);
		okno->draw(chillera);
		chillera.setPosition(30, 210);
		okno->draw(chillera);
		chillera.setPosition(30, 540);
		


		¿aba->stwórz(this->okno);
		//for (int i=0; i < 18; i++)
		{
		//samochódi ->stwórz(this->okno);
		}

		samochód->stwórz(this->okno);
		samochód1->stwórz(this->okno);
		samochód2->stwórz(this->okno);
		samochód3->stwórz(this->okno);
		samochód4->stwórz(this->okno);
		samochód5->stwórz(this->okno);
		samochód6->stwórz(this->okno);
		samochód7->stwórz(this->okno);
		samochód8->stwórz(this->okno);
		samochód9->stwórz(this->okno);
		samochód10->stwórz(this->okno);
		samochód11->stwórz(this->okno);
		samochód12->stwórz(this->okno);
		samochód13->stwórz(this->okno);
		samochód14->stwórz(this->okno);
		samochód15->stwórz(this->okno);
		samochód11->stwórz(this->okno);
		samochód17->stwórz(this->okno);
		samochód18->stwórz(this->okno);
		

		okno->draw(samochód->A1);
		okno->draw(samochód1->A1);
		okno->draw(samochód2->A1);
		okno->draw(samochód3->A1);
		okno->draw(samochód4->A1);
		okno->draw(samochód5->A1);
		okno->draw(samochód6->A1);
		okno->draw(samochód7->A1);
		okno->draw(samochód8->A1);
		okno->draw(samochód9->A1);
		okno->draw(samochód10->A1);
		okno->draw(samochód11->A1);
		okno->draw(samochód12->A1);
		okno->draw(samochód13->A1);
		okno->draw(samochód14->A1);
		okno->draw(samochód15->A1);
		okno->draw(samochód16->A1);
		okno->draw(samochód17->A1);
		okno->draw(samochód18->A1);
		
		
		

		okno->display();
	}

}

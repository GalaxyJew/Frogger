#include "Kontent.h"
#include<SFML/Graphics.hpp>
#include <iostream>
#include"Samoch�d.h"
Kontent::Kontent()
{
	okno = new sf::RenderWindow(sf::VideoMode(1280, 720), "gierka", sf::Style::Fullscreen);
	
	if(!pod�oga.loadFromFile("lavender_tlo.png"))
	{
		return;
	}
		if (!�ciana.loadFromFile("lavender_granica.png"))
		{
			return;
		}
		if (!trawa.loadFromFile("trawa.jpg"))
		{
			return;
		}

	t�o.setTexture(pod�oga);
	pod�oga.setRepeated(true);
	t�o.setTextureRect(sf::IntRect(0, 0, 1220, 660));
t�o.setPosition(30, 30);

	granica.setTexture(�ciana);
	�ciana.setRepeated(true);
	granica.setTextureRect(sf::IntRect(0, 0, 1280, 720));
	

	chillera.setTexture(trawa);
	trawa.setRepeated(true);
	chillera.setTextureRect(sf::IntRect (60,30,1220,30));
	


	//jak zrobi� randomowy czas startu
	//p�tla na tworzenie obiekt�w for?
	//odwrotny ruch 
	//tekstura na posta�
	//randomowe spownpointy w polu 
	//punktacja
	//�ycia
	//poziom trudno�ci-->wi�cej obiekt�w

	�aba = new �aba(okno->getSize());

	samoch�d = new Samoch�d(0,(okno->getSize().y / 24+15)+90, "lavender enemy 1.png",1); //szybki
	samoch�d1 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 150, "lavender enemy 1.png", 1); 
	samoch�d2= new Samoch�d(0, (okno->getSize().y / 24 + 15) + 270, "lavender enemy 1.png", 1); 
	samoch�d3 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 330, "lavender enemy 1.png", 1); 
	samoch�d4 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 410, "lavender enemy 1.png", 1); 
	samoch�d5 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 530, "lavender enemy 1.png", 1);
	
	samoch�d6 = new Samoch�d(0,(okno->getSize().y / 24+15)+60 ,"lavender enemy2.gif"  ,2); //�redni
	samoch�d7 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 120, "lavender enemy2.gif", 2); 
	samoch�d8 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 210, "lavender enemy2.gif", 2); 
	samoch�d9 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 310, "lavender enemy2.gif", 2); 
	samoch�d10 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 450, "lavender enemy2.gif", 2); 
	samoch�d11 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 480, "lavender enemy2.gif", 2); 
	samoch�d12 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 600, "lavender enemy2.gif", 2); 
	samoch�d13 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 630, "lavender enemy2.gif", 2); 

	samoch�d14 = new Samoch�d(0,(okno->getSize().y / 24+15)+240,"lavender enemy 3.png" ,3);//wolny 
	samoch�d15 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 360, "lavender enemy 3.png", 3);
	samoch�d16 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 390, "lavender enemy 3.png", 3); 
	samoch�d17 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 570, "lavender enemy 3.png", 3);
	samoch�d18 = new Samoch�d(0, (okno->getSize().y / 24 + 15) + 30, "lavender enemy 3.png", 3);
	
	
	


}


void Kontent::p�tla_gry()
{
	while (okno->isOpen())
	{

		sf::Event co�_si�_sta�o;

		while (okno->pollEvent(co�_si�_sta�o))
		{
			switch (co�_si�_sta�o.type)
			{
			case sf::Event::KeyReleased:
				�aba->ruszaj(co�_si�_sta�o);
				break;
			case sf::Event::KeyPressed:
				if (co�_si�_sta�o.key.code == sf::Keyboard::Escape)
					okno->close();
				break;
			}
		}

		//przeszkody
		samoch�d->ruszaj(okno->getSize());
		samoch�d1->ruszaj(okno->getSize());
		samoch�d2->ruszaj(okno->getSize());
		samoch�d3->ruszaj(okno->getSize());
		samoch�d4->ruszaj(okno->getSize());
		samoch�d5->ruszaj(okno->getSize());
		samoch�d6->ruszaj(okno->getSize());
		samoch�d7->ruszaj(okno->getSize());
		samoch�d8->ruszaj(okno->getSize());
		samoch�d9->ruszaj(okno->getSize());
		samoch�d10->ruszaj(okno->getSize());
		samoch�d11->ruszaj(okno->getSize());
		samoch�d12->ruszaj(okno->getSize());
		samoch�d13->ruszaj(okno->getSize());
		samoch�d14->ruszaj(okno->getSize());
		samoch�d15->ruszaj(okno->getSize());
		samoch�d16->ruszaj(okno->getSize());
		samoch�d17->ruszaj(okno->getSize());
		samoch�d18->ruszaj(okno->getSize());
	


		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d1->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d2->GetShape().getGlobalBounds()))
		{
			okno->close();
		}if (�aba->GetShape().getGlobalBounds().intersects(samoch�d3->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d4->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d5->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d6->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d7->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d8->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d9->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d10->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d11->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d12->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d13->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d14->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d15->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d16->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d17->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		if (�aba->GetShape().getGlobalBounds().intersects(samoch�d18->GetShape().getGlobalBounds()))
		{
			okno->close();
		}
		
		okno->clear();
		


		okno->draw(granica);
		okno->draw(t�o);
		okno->draw(chillera);
		chillera.setPosition(30, 30);
		okno->draw(chillera);
		chillera.setPosition(30, 210);
		okno->draw(chillera);
		chillera.setPosition(30, 540);
		


		�aba->stw�rz(this->okno);
		//for (int i=0; i < 18; i++)
		{
		//samoch�di ->stw�rz(this->okno);
		}

		samoch�d->stw�rz(this->okno);
		samoch�d1->stw�rz(this->okno);
		samoch�d2->stw�rz(this->okno);
		samoch�d3->stw�rz(this->okno);
		samoch�d4->stw�rz(this->okno);
		samoch�d5->stw�rz(this->okno);
		samoch�d6->stw�rz(this->okno);
		samoch�d7->stw�rz(this->okno);
		samoch�d8->stw�rz(this->okno);
		samoch�d9->stw�rz(this->okno);
		samoch�d10->stw�rz(this->okno);
		samoch�d11->stw�rz(this->okno);
		samoch�d12->stw�rz(this->okno);
		samoch�d13->stw�rz(this->okno);
		samoch�d14->stw�rz(this->okno);
		samoch�d15->stw�rz(this->okno);
		samoch�d11->stw�rz(this->okno);
		samoch�d17->stw�rz(this->okno);
		samoch�d18->stw�rz(this->okno);
		

		okno->draw(samoch�d->A1);
		okno->draw(samoch�d1->A1);
		okno->draw(samoch�d2->A1);
		okno->draw(samoch�d3->A1);
		okno->draw(samoch�d4->A1);
		okno->draw(samoch�d5->A1);
		okno->draw(samoch�d6->A1);
		okno->draw(samoch�d7->A1);
		okno->draw(samoch�d8->A1);
		okno->draw(samoch�d9->A1);
		okno->draw(samoch�d10->A1);
		okno->draw(samoch�d11->A1);
		okno->draw(samoch�d12->A1);
		okno->draw(samoch�d13->A1);
		okno->draw(samoch�d14->A1);
		okno->draw(samoch�d15->A1);
		okno->draw(samoch�d16->A1);
		okno->draw(samoch�d17->A1);
		okno->draw(samoch�d18->A1);
		
		
		

		okno->display();
	}

}

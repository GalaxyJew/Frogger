#include "Objekty.h"
#

Objekty::Objekty()
{

}

void Objekty::stw�rz(sf::RenderWindow* okno)
{
    okno->draw(kszta�t);
 
}

sf::RectangleShape Objekty::GetShape()
{
    return kszta�t;
 
}




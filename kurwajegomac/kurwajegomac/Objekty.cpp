#include "Objekty.h"
#

Objekty::Objekty()
{

}

void Objekty::stwórz(sf::RenderWindow* okno)
{
    okno->draw(kszta³t);
 
}

sf::RectangleShape Objekty::GetShape()
{
    return kszta³t;
 
}




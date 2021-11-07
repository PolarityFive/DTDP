#include "map.h"

Map::Map()
{
	setBackground();
}

void Map::setBackground()
{
	background.loadFromFile("background.png");
}

Sprite Map::getBackground()
{
	bSprite.setTexture(this->background);
	return(bSprite);
}

void Map::setBoundaries()
{
	Vector2f fullSize(1520,50);
	Vector2f halfSize(((1080-200-50-200)/2), 50);

	nBound.setSize(fullSize);
	nBound.setOutlineColor(Color::Black);
	nBound.setFillColor(Color::White);
	nBound.setPosition(200, 100);
	nBound.setRotation(0);

	sBound.setSize(fullSize);
	sBound.setOutlineColor(Color::Black);
	sBound.setFillColor(Color::White);
	sBound.setPosition(200,930);
	sBound.setRotation(0);

	wtBound.setSize(halfSize);
	wtBound.setOutlineColor(Color::Black);
	wtBound.setFillColor(Color::White);
	wtBound.setPosition(200, 100);
	wtBound.setRotation(90);

	wbBound.setSize(halfSize);
	wbBound.setOutlineColor(Color::Black);
	wbBound.setFillColor(Color::White);
	wbBound.setPosition(150, 980);
	wbBound.setRotation(-90);


	etBound.setSize(halfSize);
	etBound.setOutlineColor(Color::Black);
	etBound.setFillColor(Color::White);
	etBound.setPosition(1750, 100);
	etBound.setRotation(90);

	ebBound.setSize(halfSize);
	ebBound.setOutlineColor(Color::Black);
	ebBound.setFillColor(Color::White);
	ebBound.setPosition(1700, 980);
	ebBound.setRotation(-90);

}


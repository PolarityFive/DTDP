#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Map
{
public:
	Texture background;
	Sprite bSprite;
	RectangleShape nBound, sBound, wtBound, wbBound, etBound, ebBound;
public:
	Map();
	void setBackground();
	Sprite getBackground();
	void setBoundaries();
};
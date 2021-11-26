#pragma once
#include <SFML/Graphics.hpp>

class Enemy
{
public:
	int hp;
	float speed;
	sf::Sprite eSprite;
	sf::Texture eTexture;
	sf::Vector2f ePosition;
	sf::RectangleShape eRect;


public:
	Enemy();
	void setOrigin();
	void setSpeed();
	void setHp();
};

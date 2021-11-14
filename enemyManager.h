#pragma once
#include "enemy.h"
#include <SFML/Graphics.hpp>


class enemyManager
{
public:
	int enemyCount;
	//Possibly add enemy container
public:
	Enemy createEnemy();
	void spawnEnemy(std::vector<Enemy> &enemyArray,sf::RenderWindow &win);
};
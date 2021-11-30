#pragma once
#include "enemy.h"
#include <SFML/Graphics.hpp>


class enemyManager
{
public:
	int enemyCount = 0;
	//Possibly add enemy container
public:
	Enemy createEnemy();
	void spawnEnemy(std::vector<Enemy> & enemiesArray);
	void drawEnemy(std::vector<Enemy>& enemiesArray, sf::RenderWindow& win);
	void moveEnemies(std::vector <Enemy> & enemiesArray);
};
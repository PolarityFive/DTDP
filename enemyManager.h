#pragma once
#include "enemy.h"
#include <SFML/Graphics.hpp>


class enemyManager
{
public:
	bool hasWaveStarted;
	int enemyCount;
public:
	Enemy createEnemy();
	void spawnEnemy();
};
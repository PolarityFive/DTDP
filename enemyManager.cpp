#include "enemyManager.h"
#include "game.h"
#include <cmath>
Enemy enemyManager::createEnemy()
{
	Enemy tEnemy;
	tEnemy.setHp();
	tEnemy.setSpeed();
	return(tEnemy);
}

void enemyManager::spawnEnemy(std::vector<Enemy> &enemiesArray)
{
	sf::Vector2f ssize(50, 50); //TODO: Remove since size won't matter in the future. 
	for (int i = 0; i < enemiesArray.size(); i++)
	{
		enemiesArray[i].setOrigin();
		enemiesArray[i].eRect.setSize(ssize);
		enemiesArray[i].eRect.setFillColor(sf::Color::Red);
		enemiesArray[i].eRect.setOutlineColor(sf::Color::Black);
		
		
	}
	enemyCount = enemiesArray.size();
}

void enemyManager::drawEnemy(std::vector<Enemy>& enemiesArray, sf::RenderWindow& win)
{
	for (int i = 0; i < enemiesArray.size(); i++)
		win.draw(enemiesArray[i].eRect);
}

void enemyManager::moveEnemies(std::vector<Enemy>& enemiesArray)
{
	float deltaX, deltaY, angle;
	Game gameObject;
	for (int i = 0; i < enemiesArray.size(); i++)
	{
		deltaX = gameObject.eastDestination.x - enemiesArray[i].ePosition.x;
		deltaY = gameObject.eastDestination.y - enemiesArray[i].ePosition.y;
		angle = atan2(deltaY, deltaX);
		enemiesArray[i].ePosition.x += enemiesArray[i].speed * cos(angle);
		enemiesArray[i].ePosition.y += enemiesArray[i].speed * sin(angle);
		enemiesArray[i].updatePosition();
	}
}

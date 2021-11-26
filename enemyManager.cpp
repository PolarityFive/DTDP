#include "enemyManager.h"

Enemy enemyManager::createEnemy()
{
	Enemy tEnemy;
	tEnemy.setHp();
	tEnemy.setSpeed();
	return(tEnemy);
}

void enemyManager::spawnEnemy(std::vector<Enemy> &enemiesArray,sf::RenderWindow &win)
{
	sf::Vector2f ssize(100, 100); //TODO: Remove since size won't matter in the future. 
	for (int i = 0; i < enemiesArray.size(); i++)
	{
		enemiesArray[i].setOrigin();
		enemiesArray[i].eRect.setSize(ssize);
		enemiesArray[i].eRect.setFillColor(sf::Color::Red);
		enemiesArray[i].eRect.setOutlineColor(sf::Color::Black);
		win.draw(enemiesArray[i].eRect);
	}
}
#include "enemyManager.h"

Enemy enemyManager::createEnemy()
{
	Enemy tEnemy;
	tEnemy.setHp();
	tEnemy.setPosition();
	tEnemy.setSpeed();
	return(tEnemy);
}

void enemyManager::spawnEnemy()
{

}
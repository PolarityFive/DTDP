#include "enemy.h"
using namespace sf;
Enemy::Enemy()
{
	
}

void Enemy::setPosition()
{
	eRect.setPosition(100, 500);
}

void Enemy::setSpeed()
{
	speed = 50;
}

void Enemy::setHp()
{
	hp = 100;
}
#include "enemy.h"
using namespace sf;
Enemy::Enemy()
{
	this->ePosition.x = 100; //100
	this->ePosition.y = 500; //500
}

void Enemy::setOrigin()
{
	
	eRect.setPosition(ePosition.x, ePosition.y);
}

void Enemy::setSpeed()
{
	speed = 10;
}

void Enemy::setHp()
{
	hp = 100;
}

void Enemy::updatePosition()
{
	eRect.setPosition(ePosition.x, ePosition.y);
}
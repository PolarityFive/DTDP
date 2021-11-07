#include "enemy.h"
using namespace sf;
Enemy::Enemy()
{
	
	Vector2f size(50, 50);
	eRect.setSize(size);
	eRect.setFillColor(Color::Black);
	eRect.setPosition(500, 500);
}

void Enemy::setPosition()
{

}

void Enemy::setSpeed()
{
	speed = 50;
}

void Enemy::setHp()
{
	hp = 100;
}
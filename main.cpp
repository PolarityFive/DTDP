#include <SFML/Graphics.hpp>
#include "map.h"
#include "enemy.h"
#include "enemyManager.h"
#include "buttons.h"
#include "game.h"
#include <iostream> //TODO remove.

using namespace sf;


int main()
{
	RenderWindow window(VideoMode(1920, 1080), "DTDP");
	
	Game gameManager;
	Map *map = new Map();
	Button startBut("Play", 50,1600,100); //Text, Size, Position x, Position y
	


	std::vector<Enemy> enemies;
	enemyManager eManager;
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}


		
		map->setBackground();
		window.draw(map->getBackground());
		map->setBoundaries();


		window.draw(map->nBound);
		window.draw(map->sBound);
		window.draw(map->wtBound);
		window.draw(map->wbBound);
		window.draw(map->etBound);
		window.draw(map->ebBound);
		if (eManager.enemyCount < 2)
		{
			enemies.push_back(eManager.createEnemy());
			eManager.spawnEnemy(enemies);
			
		}
		eManager.drawEnemy(enemies, window);
		eManager.moveEnemies(enemies);


		window.display();
		
	
	}

	return 0;
}
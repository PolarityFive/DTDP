#include <SFML/Graphics.hpp>
#include "map.h"
#include "enemy.h"
#include "enemyManager.h"
#include <bits.h>


using namespace sf;


int main()
{
	RenderWindow window(VideoMode(1920, 1080), "DTDP");
	Map *map = new Map();

	std::vector<Enemy> enemies;
	enemyManager enemyManager;
	
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

		enemies.push_back(enemyManager.createEnemy()); //loop this


		
		window.display();
	}

	return 0;
}
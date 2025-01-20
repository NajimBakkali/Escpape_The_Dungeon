#include <SFML/Graphics.hpp>
#include "Map.h"

/*
void Map::loadMap()
{
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			if (m_map[x + 15 * y] == 1)
			{
				sf::RectangleShape tile({ 50.0f, 50.0f });
				tile.setPosition({ x * 50.0f, y * 50.0f });
				tile.setFillColor(sf::Color::White);
			}
		}
	}
}*/

void Map::drawMap(sf::RenderWindow& window)
{
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			if (m_map[x + 15 * y] == 1)
			{
				sf::RectangleShape tile({ 100.0f, 100.0f });
				tile.setPosition({ x * 100.0f, y * 100.0f });
				tile.setFillColor(sf::Color::White);

				window.draw(tile);
			}
		}
	}
}

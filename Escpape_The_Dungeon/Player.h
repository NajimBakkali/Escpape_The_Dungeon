#pragma once

#include "SFML/Graphics.hpp"

#include "Entity.h"

class Player : public Entity
{
public:

	Player(sf::Vector2f spawnPosition, sf::Vector2f hitboxSize);

	void update(sf::RenderWindow& window, float deltaTime) override;
	void draw(sf::RenderWindow& window) override;

private:
	void handleInputs(float deltaTime);

	void initHitbox(sf::Vector2f hitboxSize);
	void initSprite();
};
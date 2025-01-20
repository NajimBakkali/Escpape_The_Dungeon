#include "Potion.h"
#include "Logger.h"

Potion::Potion(sf::Vector2f spawnPosition, float speedMultiplier)
{
	m_position = spawnPosition;
	m_speedMultiplier = speedMultiplier;

	//LOG("POTION CREATED AT: " + std::to_string(m_position.x) + ", " + std::to_string(m_position.y))

	m_hitbox.setFillColor(sf::Color::Cyan);

	updatePosition(m_position);
}

void Potion::interact(Player& player)
{
	if (m_interacted) return;

	player.setSpeed(player.getSpeed() * m_speedMultiplier);
	m_interacted = true;
}

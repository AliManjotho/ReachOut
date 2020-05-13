#include "reachout\gameobjects\player.h"
#include "spdlog\spdlog.h"

namespace ro
{
	Player::Player()
	{
		if (this->texture.loadFromFile("..\\resources\\textures\\character_sprite.png", sf::IntRect(0, 0, 160, 318)))
		{
			spdlog::info("Loading texture successfull for player.");

			this->texture.setSmooth(true);
			setTexture(this->texture);
			this->setScale(sf::Vector2f(0.3, 0.3));
		}
		else
			spdlog::error("Loading texture failed for player.");
	}


	bool Player::isAlive()
	{
		return this->m_isAlive;
	}

	void Player::setAlive(bool isAlive)
	{
		this->m_isAlive = isAlive;
	}
}


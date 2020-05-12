#include "reachout\gameobjects\player.h"
#include <iostream>

namespace ro
{
	Player::Player()
	{
		if (this->texture.loadFromFile("..\\resources\\textures\\character_sprite.png", sf::IntRect(0, 0, 160, 318)))
		{
			this->texture.setSmooth(true);
			setTexture(this->texture);
			this->setScale(sf::Vector2f(0.3, 0.3));
		}
		else
			std::cout << "ERROR loading texture" << std::endl;
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


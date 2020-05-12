#ifndef REACHOUT_GAMEOBJECTS_PLAYER_H
#define REACHOUT_GAMEOBJECTS_PLAYER_H

#include "reachout\core\core.h"
#include "reachout\gameobjects\gameobject.h"
#include "SFML\Graphics.hpp"

namespace ro
{
	class RO_API Player : public sf::Sprite, public ro::GameObject
	{
	private:
		bool m_isAlive;
		sf::Texture texture;

	public:
		Player();

		bool isAlive();
		void setAlive(bool isAlive);
	
	};
}

#endif //REACHOUT_GAMEOBJECTS_PLAYER_H

#ifndef REACHOUT_GAMEOBJECTS_GAMEOBJECT_H
#define REACHOUT_GAMEOBJECTS_GAMEOBJECT_H

#include "reachout\core\core.h"
#include "reachout\core\point2d.h"

namespace ro
{
	class RO_API GameObject
	{
	private:
		Point2D position;

	public:
		GameObject();

		void setPosition(Point2D point);
		void setPosition(int x, int y);		
		Point2D getPosition();
		void moveBy(int xDisp, int yDisp);
		void moveTo(Point2D pointTo);
		void moveTo(int x, int y);
	};
}

#endif //REACHOUT_GAMEOBJECTS_GAMEOBJECT_H

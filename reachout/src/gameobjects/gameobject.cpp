#include "reachout\gameobjects\gameobject.h"

namespace ro
{
	GameObject::GameObject()
	{}
	

	void GameObject::setPosition(Point2D point)
	{
		this->position = point;
	}

	void GameObject::setPosition(int x, int y)
	{
		this->setPosition(Point2D(x, y));
	}	

	Point2D GameObject::getPosition()
	{
		return this->position;
	}

	void GameObject::moveBy(int xDisp, int yDisp)
	{
		Point2D currPosition = this->position;
		Point2D newPosition(0, 0);

		int dx = currPosition.getX() + xDisp;
		int dy = currPosition.getY() + yDisp;

		this->setPosition(dx, dy);
	}

	void GameObject::moveTo(Point2D pointTo)
	{
		this->position = pointTo;
	}

	void GameObject::moveTo(int x, int y)
	{
		this->moveTo(Point2D(x, y));
	}
}

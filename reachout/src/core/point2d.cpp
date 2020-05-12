#include "reachout\core\point2d.h"

namespace ro
{
	Point2D::Point2D() : x{ 0 }, y{ 0 }
	{}

	Point2D::Point2D(int x, int y) : x{ x }, y{ y }
	{}


	void Point2D::setX(int x)
	{
		this->x = x;
	}

	void Point2D::setY(int y)
	{
		this->y = y;
	}

	int Point2D::getX()
	{
		return this->x;
	}

	int Point2D::getY()
	{
		return this->y;
	}
}
#ifndef REACHOUT_CORE_POINT2D_H
#define REACHOUT_CORE_POINT2D_H

#include "reachout\core\core.h"

namespace ro
{
	class RO_API Point2D
	{
	private:
		int x;
		int y;

	public: 
		Point2D();
		Point2D(int x, int y);

		void setX(int x);
		void setY(int y);
		int getX();
		int getY();
	};
}

#endif //REACHOUT_CORE_POINT2D_H
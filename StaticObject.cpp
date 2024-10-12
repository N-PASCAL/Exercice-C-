#include <iostream>
#include "StaticObject.h"

StaticObject::StaticObject(float _x, float _y) : Entity(_x, _y) {
	std::cout << "Static Object just created at x = " << position.GetX() << " and y = " << position.GetY() << std::endl;
}
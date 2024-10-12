#include <iostream>
#include "BreakableObject.h"

BreakableObject::BreakableObject(float _x, float _y, float _maxHealth, float _currentHealth) : Entity(_x, _y), Alive(_maxHealth, _currentHealth) {
	std::cout << "BreakableObject just created at x = " << position.GetX() << " and y = " << position.GetY() << " with "  << _maxHealth << "HP" << std::endl;
}

void BreakableObject::TakeDammage(float _dammage)
{
	Alive::TakeDammage(_dammage);

	if (currentHealth <= 0)
	{
		std::cout << "BreakableObject just broke" << std::endl;
	}
}


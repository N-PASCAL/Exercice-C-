#include <iostream>
#include "Mob.h"

Mob::Mob(float _x, float _y, float _maxHealth, float _currentHealth, Vecteur2 _direction, float _speed) : Entity(_x, _y), Alive(_maxHealth, _currentHealth), AMovable(_direction, _speed) {
	std::cout << "Mob just created at x = " << position.GetX() << " and y = " << position.GetY() << " with " << _maxHealth << "HP" << " with direction x = " << direction.GetX() << " direction y = " << direction.GetY() << std::endl;
}

void Mob::TakeDammage(float _dammage)
{
	Alive::TakeDammage(_dammage);
	if (currentHealth <= 0)
	{
		std::cout << "Mob just die" << std::endl;
	}
}

void Mob::Move() {

	SetPosition(Vecteur2(position.GetX() + direction.GetX() * speed, (position.GetY() + direction.GetY() * speed)));
	
	std::cout << "Mob move to x = " << position.GetX() << " and y = " << position.GetY() << std::endl;
}
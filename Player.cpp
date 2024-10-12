#include <iostream>
#include "Player.h"

Player::Player(float _x, float _y, float _maxHealth, float _currentHealth, Vecteur2 _direction, float _speed) : Entity(_x, _y), Alive(_maxHealth, _currentHealth), AMovable(_direction, _speed), IAttacker(){
	std::cout << "Player just created at x = " << position.GetX() << " and y = " << position.GetY() << " with " << _maxHealth << "HP" << " with direction x = " << direction.GetX() << " direction y = " << direction.GetY() << std::endl;
}

void Player::TakeDammage(float _dammage)
{
	Alive::TakeDammage(_dammage);

	if (currentHealth <= 0)
	{
		std::cout << "Player just die" << std::endl;
	}
}

void Player::Move() {

	SetPosition(Vecteur2(position.GetX() + direction.GetX() * speed, (position.GetY() + direction.GetY() * speed)));

	std::cout << "Player move to x = " << position.GetX() << " and y = " << position.GetY() << std::endl;
}

void Player::Attack(Alive* _target) {
	_target->TakeDammage(10); 
	std::cout << "Player just attacked ";
}
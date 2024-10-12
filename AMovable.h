#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vecteur2.h"

class AMovable
{
protected:

	Vecteur2 direction;
	float speed;

public:

	
	AMovable(Vecteur2 _direction, float _speed);

	virtual void SetDirection(Vecteur2 _direction);
	virtual void SetSpeed(float _speed);
	virtual void Move() = 0;
	
};

#endif
#ifndef MOB_H__
#define MOB_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:

	Mob(float x, float y, float maxHealth, float currentHealth, Vecteur2 direction, float speed);

	virtual void TakeDammage(float _dammage) override;
	virtual void Move() override;
};

#endif
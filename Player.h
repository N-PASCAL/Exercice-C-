#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:

	Player(float x, float y, float maxHealth, float currentHealth, Vecteur2 direction, float speed);

	virtual void TakeDammage(float _dammage) override;
	virtual void Move() override;
	virtual void Attack(Alive* target) override;
};

#endif 




#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Entity.h"
#include "Alive.h"


class BreakableObject : public Entity, public Alive
{
public:

	BreakableObject(float x, float y, float maxHealth, float currentHealth);

	virtual void TakeDammage(float _dammage) override;

};

#endif
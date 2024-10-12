#ifndef ENTITY_H__
#define ENTITY_H__

#include "Vecteur2.h"

class Entity {

protected: Vecteur2 position;

public:

	Entity(float x, float y);

	virtual Vecteur2 GetPosition();
	virtual void SetPosition(Vecteur2 _position);
};

#endif
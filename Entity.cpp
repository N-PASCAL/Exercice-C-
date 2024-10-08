#include "Entity.h"

Entity::Entity(float _x, float _y) : position(_x, _y) {

}

Vecteur2 Entity::GetPosition() {
	return position;
}

void Entity::SetPosition(Vecteur2 _position) {
	this->position = _position;
}
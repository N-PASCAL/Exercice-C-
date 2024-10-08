#include "AMovable.h"

AMovable::AMovable(Vecteur2 _direction, float _speed) : direction(_direction), speed(_speed){

}

void AMovable::SetDirection(Vecteur2 _direction) {
	this->direction = _direction;
}

void AMovable::SetSpeed(float _speed) {
	this->speed = _speed;
}
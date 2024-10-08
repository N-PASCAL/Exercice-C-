#include "Vecteur2.h"

Vecteur2::Vecteur2(float _x, float _y) : x(_x), y(_y) {
		
}

float Vecteur2::GetX() {
	return this->x;
}

float Vecteur2::GetY() {
	return this->y;
}

void Vecteur2::Set(float _x, float _y) {
	this->x = _x;
	this->y = _y;
}


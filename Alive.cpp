#include "Alive.h"

Alive::Alive(float _maxHealth, float _currentHealth, float _dammage) : maxHealth(_maxHealth), currentHealth(_currentHealth) {

}


float Alive::GetMaxHealth() {
	return this->maxHealth;
}

float Alive::GetCurrentHealth() {
	return this->currentHealth;
}

//Pas fini
float Alive::TakeDammage() {

}
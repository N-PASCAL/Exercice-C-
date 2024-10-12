#include "Alive.h"

Alive::Alive(float _maxHealth, float _currentHealth) : maxHealth(_maxHealth), currentHealth(_maxHealth) {

}


float Alive::GetMaxHealth() {
	return this->maxHealth;
}

float Alive::GetCurrentHealth() {
	return this->currentHealth;
}

void Alive::TakeDammage(float _dammage) {
	currentHealth -= _dammage;
}
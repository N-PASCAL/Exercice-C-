#ifndef ALIVE_H__
#define ALIVE_H__

class Alive
{
	float maxHealth;
	float currentHealth;
	float dammage;

public:

	Alive(float _maxHealth, float _currentHealth, float _dammage);

	virtual float GetMaxHealth();
	virtual float GetCurrentHealth();
	virtual float TakeDammage(float _dammage);
};

#endif
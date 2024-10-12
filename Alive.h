#ifndef ALIVE_H__
#define ALIVE_H__

class Alive
{
protected: 

	float maxHealth;
	float currentHealth;

public:

	Alive(float _maxHealth, float _currentHealth);

	virtual float GetMaxHealth();
	virtual float GetCurrentHealth();
	virtual void TakeDammage(float _dammage);
};

#endif
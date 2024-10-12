#ifndef VERCTEUR2_H__
#define VERCTEUR2_H__

class Vecteur2{

	float x = 0.f;
	float y = 0.f;

public:
	Vecteur2(float x, float y);

	float GetX();
	float GetY();

	void Set(float _x, float _y);

	void Norm();
};

#endif 



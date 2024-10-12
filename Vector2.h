#ifndef VERCTOR2_H__
#define VERCTOR2_H__
#include <string>

class Vector2 {

	float x;
	float y;

public:
	Vector2();
	Vector2(float _x, float _y);

	float GetXbis() const;
	float GetYbis() const;

	void SetXbis(float _x);
	void SetXbis(std::string _xStr);

	void SetYbis(float _y);
	void SetYbis(std::string _yStr);

	Vector2 operator+(const Vector2& _right);
};

#endif 
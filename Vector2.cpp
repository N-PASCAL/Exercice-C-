#include "Vector2.h"
#include <string>

Vector2::Vector2() : x(0), y(0) {

}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {
	
}

float Vector2::GetXbis() const {
	return this->x;
}

void Vector2::SetXbis(std::string _xStr) {
	x = std::stof(_xStr);
}

float Vector2::GetYbis() const {
	return this->y;
}

void Vector2::SetXbis(float _x) {
	x = _x;
}

void Vector2::SetYbis(float _y) {
	y = _y;
}

void Vector2::SetYbis(std::string _yStr) {
	y = std::stof(_yStr);
}

Vector2 Vector2::operator+ (const Vector2& _right) {
	Vector2 tmp(this->x + _right.GetXbis(), this->y + _right.GetYbis());
	return tmp;
}
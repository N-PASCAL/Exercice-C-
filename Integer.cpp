#include <ostream>
#include <cmath>
#include "Integer.h"

Integer::Integer() : value(0) {

}

Integer::Integer(int _value) : value(_value) {

}

int Integer::GetValue() const {
	return this->value;
}

void Integer::SetValue(int _value) {
	value = _value;
}

Integer Integer::operator+ (const Integer& _right) {
	Integer tmpValue(this->value + _right.GetValue());
	return tmpValue;
}

Integer Integer::operator+= (const Integer& _right) {
	this->value += _right.GetValue();
	return *this;
}

Integer Integer::operator- (const Integer& _right) {
	Integer tmpValue(this->value - _right.GetValue());
	return tmpValue;
}

Integer Integer::operator-= (const Integer& _right) {
	this->value -= _right.GetValue();
	return *this;
}

Integer Integer::operator* (const Integer& _right) {
	Integer tmpValue(this->value * _right.GetValue());
	return tmpValue;
}

Integer Integer::operator*= (const Integer& _right) {
	this->value *= _right.GetValue();
	return *this;
}

Integer Integer::operator/ (const Integer& _right) {
	Integer tmpValue(this->value / _right.GetValue());
	return tmpValue;
}

Integer Integer::operator/= (const Integer& _right) {
	this->value /= _right.GetValue();
	return *this;
}

Integer Integer::operator% (const Integer& _right) {
	Integer tmpValue(this->value % _right.GetValue());
	return tmpValue;
}

Integer Integer::operator%= (const Integer& _right) {
	this->value %= _right.GetValue();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Integer& _right) {
	os << _right.GetValue() ;
	return os;
}

int Integer::Pow(int _exposant) {
	return std::pow(this->value, _exposant);
}
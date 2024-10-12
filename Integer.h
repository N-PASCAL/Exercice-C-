#ifndef INTEGER_H__
#define INTEGER_H__

#include <ostream>

class Integer
{
	int value;

public:

	Integer();
	Integer(int _value);

	int GetValue() const;
	void SetValue(int _value);

	int Pow(int _exposant);

	Integer operator+(const Integer& _right);
	Integer operator+=(const Integer& _right);

	Integer operator-(const Integer& _right);
	Integer operator-=(const Integer& _right);

	Integer operator*(const Integer& _right);
	Integer operator*=(const Integer& _right);

	Integer operator/(const Integer& _right);
	Integer operator/=(const Integer& _right);

	Integer operator%(const Integer& _right);
	Integer operator%=(const Integer& _right);
	friend std::ostream& operator<<(std::ostream& os, const Integer& _right);
};

#endif

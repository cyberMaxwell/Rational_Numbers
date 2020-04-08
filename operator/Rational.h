#ifndef RATIONAL_H
#define RATIONAL_H

#include<iostream>

using std::istream;
using std::ostream;

class Rational
{
	friend ostream &operator<<(ostream &, const Rational &);
	friend istream &operator>>(istream &, Rational &);
public:
	Rational(int, int);
	Rational(int);
	Rational();
	const Rational operator+(const Rational &) const; // �������� ����
	const Rational operator-(const Rational &) const; // �������� �����
	const Rational operator/(const Rational &) const; // �������� /
	const Rational operator*(const Rational &) const; // �������� *
	const Rational operator-() const; // ������� �����
	void setFirstNum(int);
	void setSecondNum(int);
	int getFirstNum();
	int getSecondNum();

	int gcd(int, int);
private:
	int firstNum; // ������ �����
	int secondNum; // ������ �����

};
#endif
#include "Rational.h"
#include<string>
using namespace std;
Rational::Rational(int newX, int newY)
{
	int a = gcd(newX,newY);
	newX /= a;
	firstNum = newX;

	newY /= a; 
	secondNum = newY;

	if (secondNum < 0){
		firstNum = -firstNum;
		secondNum = -secondNum;
	}
}

Rational::Rational(int num)
{
	firstNum = num;
	secondNum = 1;
}

Rational::Rational()
{
	firstNum = 0;
	secondNum = 1;
}

void Rational::setFirstNum(int a) {
	firstNum = a;
}

void Rational::setSecondNum(int a) {
	secondNum = a;
}

int Rational::getFirstNum() {
	return firstNum;
}

int Rational::getSecondNum() {
	return secondNum;
}

ostream &operator<<(ostream &output, const Rational &a)
{	
	output << " " << a.firstNum << "/" << a.secondNum << " ";
	return output;
}

istream &operator>>(istream &input, Rational &a)
{
	char ch = '/';
	input >> a.firstNum >> ch >> a.secondNum;
	return input;
}

const Rational Rational::operator+(const Rational &b) const
{

	return Rational(firstNum * b.secondNum + b.firstNum * secondNum, secondNum * b.secondNum);
}

const Rational Rational::operator-(const Rational &b) const
{
	return Rational(firstNum * b.secondNum - b.firstNum * secondNum, secondNum * b.secondNum);
}

const Rational Rational::operator/(const Rational &b) const
{
	return Rational(firstNum * b.secondNum, secondNum * b.firstNum);
}

const Rational Rational::operator*(const Rational &b) const
{
	return Rational(firstNum * b.firstNum, secondNum * b.secondNum);
}

const Rational Rational::operator-() const
{
	return Rational(-firstNum, secondNum);
}

int Rational::gcd(int u, int v)
{
	int r;
	while (v != 0)
	{
		r = u % v;
		u = v;
		v = r;
	}
	return u;
}




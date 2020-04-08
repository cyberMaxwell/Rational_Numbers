#include<iostream>
#include<string>
#include "Rational.h" 

using namespace std;


int main()
{
	setlocale(0, "");

	//int num1, num2, num3, num4, num5;
	cout << "Введите числитель и знаменатель: ";

	Rational a;
	cin >> a;

	cout << "Конструктор с 2-мя аргументами: " << a << endl << endl;

	Rational b;
	cin >> b;
	cout << "Второй конструктор с 2-мя аргументами: " << b << endl<< endl;



	cout << "Результат перегруженной суммы: " << a + b << endl<< endl;
	cout << "Результат перегруженной разности: " << a - b << endl<< endl;
	cout << "Результат перегруженного произведения: " << a * b << endl<< endl;


	cout << "Результат перегруженного частного: " << a / b << endl<< endl;



	Rational c;
	cin >> c;
	cout << "Конструктор с 1 аргументом: ";
	cout << c << endl<< endl;

	Rational d;
	cout << "Конструктор по умолчанию: " ;
	cout << d << endl << endl;


	
	cout << "Унарный минус: " << -a << endl << endl;


	system("pause");
	return 0;

}

#include<iostream>
#include<string>
#include "Rational.h" 

using namespace std;


int main()
{
	setlocale(0, "");

	//int num1, num2, num3, num4, num5;
	cout << "������� ��������� � �����������: ";

	Rational a;
	cin >> a;

	cout << "����������� � 2-�� �����������: " << a << endl << endl;

	Rational b;
	cin >> b;
	cout << "������ ����������� � 2-�� �����������: " << b << endl<< endl;



	cout << "��������� ������������� �����: " << a + b << endl<< endl;
	cout << "��������� ������������� ��������: " << a - b << endl<< endl;
	cout << "��������� �������������� ������������: " << a * b << endl<< endl;


	cout << "��������� �������������� ��������: " << a / b << endl<< endl;



	Rational c;
	cin >> c;
	cout << "����������� � 1 ����������: ";
	cout << c << endl<< endl;

	Rational d;
	cout << "����������� �� ���������: " ;
	cout << d << endl << endl;


	
	cout << "������� �����: " << -a << endl << endl;


	system("pause");
	return 0;

}

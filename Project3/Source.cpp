#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	float a, b, c;

	cout << "���i�� ����� 1: ";
	cin >> a;

	cout << "���i�� ����� 2: ";
    cin >> b;

	cout << "���i�� ����� 3: ";
	cin >> c;

	cout << "������� ����� �����= " << a * b * c << endl;

	cout << "������ ����� �����= " << a / b / c << endl;

	cout << "������ �����������" << (a + b + c) / 3 << endl;



}


	
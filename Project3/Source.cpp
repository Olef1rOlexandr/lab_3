#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	float a, b, c;

	cout << "Ведiть число 1: ";
	cin >> a;

	cout << "Ведiть число 2: ";
    cin >> b;

	cout << "Ведiть число 3: ";
	cin >> c;

	cout << "Добуток трьох чисел= " << a * b * c << endl;

	cout << "Частка трьох чисел= " << a / b / c << endl;

	cout << "Середнє арефметичне" << (a + b + c) / 3 << endl;



}


	
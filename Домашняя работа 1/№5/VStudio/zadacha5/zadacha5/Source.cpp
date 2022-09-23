#include <iostream>
using namespace std;
int main()
{
	float pi = 3.1415, l;
	setlocale(LC_ALL, "Russian");
	cout << "Вычисление площади круга по длине окружности\nВведите длину окружности (см) -> ";
	cin >> l;
	cout << "Площадь круга" << " " << (l * l) / (4 * pi) << " " << "кв.см."; // (l * l) / (4 * pi)
}
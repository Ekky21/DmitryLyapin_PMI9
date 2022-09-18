#include <iostream>
using namespace std;
int main()
{
	float pi = 3.1415, l, s;
	setlocale(LC_ALL, "Russian");
	cout << "Вычисление площади круга по длине окружности\nВведите длину окружности (см) -> ";
	cin >> l;
	s = (l * l) / (4 * pi);
	cout << "Площадь круга" << " " << s << " " << "кв.см."; // (l * l) / (4 * pi)
}
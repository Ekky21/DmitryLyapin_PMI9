#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	double x, a=1, s=1;
	cout << "Введите количество членов ряда вида 1+x+x^2+.... - > "; cin >> n;
	cout << "Введите x (|x|<1) - > "; cin >> x;
	for (int i = 1; i <= n; i++)
	{
		a = a * x;
		s = s + a;
	}
	cout << "Сумма первых n членов ряда равна: " << s;
	cout << "\nЗначение функции f(x)=1/(1-x) равно: " << 1 / (1 - x);
}


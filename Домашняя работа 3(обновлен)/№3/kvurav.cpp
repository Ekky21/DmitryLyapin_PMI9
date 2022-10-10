//Нахождение корней квадратного уравнения.
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	float a, b, c,x,x1,x2,d,kor_d;
	cout << "Введите коэффициент a -> "; cin >> a;
	cout << "\nВведите коэффициент b -> "; cin >> b;
	cout << "\nВведите коэффициент c -> "; cin >> c;
	cout << a << "*x^2+" << b <<"*x+" << c <<"=0\n";
	if (a == 0)
	{
		if (b == 0 &&c!=0)
		{
			cout << "Корней нет";
		}
		if (b == 0 && c == 0)
		{
			cout << "Корень уравнения любое число";
		}
		if (b!=0)
		{
			x = -c / b;
			cout << "Корень уравнения равен: " << x;
		}
	}
	else
	{
		d = (b * b - 4 * a * c);
		if (d < 0)
		{
			cout << "Действительных корней уравнения нет";
		}
		else
		{
			kor_d = sqrt(d);
			x1 = (-b + kor_d) / 2 * a;
			x2 = (-b - kor_d) / 2 * a;
			if (d == 0)
			{
				cout << "x1 = x2 = " << x1;
			}
			else
			{
				cout << "Корни уравнения равны: " << x1 << "," << x2;
			}
		}
	}
}

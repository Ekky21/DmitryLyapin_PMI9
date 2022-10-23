//Вычислить выражение ((a/b)-(c/d))*(e/f).
//Использовать Заголовочный файл (Header.h), Дополнительный модуль (Module.cpp)
//В котором будут функции:
//1 - Nod (вычисление НОД двух чисел)
//2 - Sokr (сокращение дроби)
//3 - Sub (вычитание двух дробей)
//4 - Mult (умножение двух дробей)
//5 - cel (выделение целой части дроби)
#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e, f, x, y;
	int z = 0;
	cin >> a >> b >> c >> d >> e >> f;
	if (b == 0 || d == 0 || f == 0)
	{
		cout << "Введите дроби без нулей в знаменателе";
	}
	else
	{
		Sub(a, b, c, d, x, y);
		Mult(x, y, e, f);
		Sokr(x, y);
		if (x / y != 0)
		{
			cel(x, y, z);
			cout << z << "+" << x << "/" << y;
		}
		else
		{
			cout << x << "/" << y;
		}
	}
	}
	

//��������� ��������� ((a/b)-(c/d))*(e/f).
//������������ ������������ ���� (Header.h), �������������� ������ (Module.cpp)
//� ������� ����� �������:
//1 - Nod (���������� ��� ���� �����)
//2 - Sokr (���������� �����)
//3 - Sub (��������� ���� ������)
//4 - Mult (��������� ���� ������)
//5 - cel (��������� ����� ����� �����)
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
		cout << "������� ����� ��� ����� � �����������";
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
	

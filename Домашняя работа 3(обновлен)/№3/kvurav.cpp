//���������� ������ ����������� ���������.
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	float a, b, c,x,x1,x2,d,kor_d;
	cout << "������� ����������� a -> "; cin >> a;
	cout << "\n������� ����������� b -> "; cin >> b;
	cout << "\n������� ����������� c -> "; cin >> c;
	cout << a << "*x^2+" << b <<"*x+" << c <<"=0\n";
	if (a == 0)
	{
		if (b == 0 &&c!=0)
		{
			cout << "������ ���";
		}
		if (b == 0 && c == 0)
		{
			cout << "������ ��������� ����� �����";
		}
		if (b!=0)
		{
			x = -c / b;
			cout << "������ ��������� �����: " << x;
		}
	}
	else
	{
		d = (b * b - 4 * a * c);
		if (d < 0)
		{
			cout << "�������������� ������ ��������� ���";
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
				cout << "����� ��������� �����: " << x1 << "," << x2;
			}
		}
	}
}

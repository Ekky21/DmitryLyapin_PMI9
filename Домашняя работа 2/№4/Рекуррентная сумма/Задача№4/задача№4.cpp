#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	double x, a=1, s=1;
	cout << "������� ���������� ������ ���� ���� 1+x+x^2+.... - > "; cin >> n;
	cout << "������� x (|x|<1) - > "; cin >> x;
	for (int i = 1; i <= n; i++)
	{
		a = a * x;
		s = s + a;
	}
	cout << "����� ������ n ������ ���� �����: " << s;
	cout << "\n�������� ������� f(x)=1/(1-x) �����: " << 1 / (1 - x);
}


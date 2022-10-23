#include <iostream>
using namespace std;

int Nod(int a,int b)
{
	while (a * b)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return (a+ b);
}
int Sokr(int& a, int& b)
{
	int c = Nod(a, b);
	a = a / c;
	b = b / c;
	return 0;
}
int Mult(int& x, int& y, int& e, int& f)
{
	x = x * e;
	y = y * f;
	return 0;
}
int Sub(int&a, int&b, int&c, int&d, int&x, int&y)
{
	x = a * d - c * b;
	y = b * d;
	return 0;
}
int cel(int& x, int& y, int& z)
{
	z = x / y;
	int w = y;
	int s = z * y;
	Sub(x, y, s, w, x, y);
	Sokr(x, y);
	return 0;
}
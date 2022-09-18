#include <iostream>
using namespace std;
int main()
{
	int x, y, n;
	cin >> n >> x >> y;
	switch (n)
	{
	case 1:
		cout << x + y;
		break;
	case 2:
		cout << x - y;
		break;
	case 3:
		cout << x * y;
		break;
	case 4:
		cout << x / y;
		break;
	case 5:
		cout << x % y;
		break;
	};
}
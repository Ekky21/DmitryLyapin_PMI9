#include <iostream>
using namespace std;
int main()
{
	float pi = 3.1415, l, s;
	setlocale(LC_ALL, "Russian");
	cout << "���������� ������� ����� �� ����� ����������\n������� ����� ���������� (��) -> ";
	cin >> l;
	s = (l * l) / (4 * pi);
	cout << "������� �����" << " " << s << " " << "��.��."; // (l * l) / (4 * pi)
}
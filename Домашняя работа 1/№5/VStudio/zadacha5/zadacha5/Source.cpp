#include <iostream>
using namespace std;
int main()
{
	float pi = 3.1415, l;
	setlocale(LC_ALL, "Russian");
	cout << "���������� ������� ����� �� ����� ����������\n������� ����� ���������� (��) -> ";
	cin >> l;
	cout << "������� �����" << " " << (l * l) / (4 * pi) << " " << "��.��."; // (l * l) / (4 * pi)
}
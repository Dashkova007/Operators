#include<iostream>
using namespace std;
void third() {
	setlocale(LC_ALL, "RUS");
	int x1, y1, x2, y2, z1, z2;
	cout << "������� ���������� = ";
	cin >> x1 >> y1;
	cout << "������� ���������� = ";
	cin >> x2 >> y2;
	z1 = ((x1 + y1) % 2 == 0);
	z2 = ((x2 + y2) % 2 == 0);
	if (z1 == z2) cout << "������ ���� ����� ���������� ����\n";
	else cout << "������ ���� �� ����������� �����\n";
}
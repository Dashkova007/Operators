#include<iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	float a, b, c, x, x1, x2, D, d;
	cout << "������� ������������ = ";
	cin >> a >> b >> c;;
	if (a == 0) {
		cout << "Error";
		system("pause");
		exit(0);
	}
	D = b * b - 4 * a * c;
	if (D < 0) { cout << "����� �����������\n"; }
	else {
		if (D == 0) {
			x = (-b) / (2 * a);
			cout << "��������� ����� ������ x = " << x;
		}
		else {
			d = pow(D, (1 / 2.0));
			x1 = ((0 - b) + d) / (2 * a);
			cout << "��������� ����� �����\nx1 = " << x1;
			x2 = ((0 - b) - d) / (2 * a);
			cout << "\nx2 = " << x2 << endl;
		}
	}
}
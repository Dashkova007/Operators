#include<iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	int day, DayNumber, WeekNumber;
	cout << "������� ���� = ";
	cin >> day;
	DayNumber = (day - 1) % 7 + 1;
	WeekNumber = (day - 1) / 7 + 1;
	cout << "����� ��� = " << DayNumber << "\n����� ������ = " << WeekNumber << endl;
}
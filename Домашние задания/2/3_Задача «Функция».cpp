#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int x, y, b;
	cout << "������� x: ";
	if (!(cin >> x)) {
		cout << "������� ���������� ���� int"; return 0;
	}
	cout << "������� y: "; cin >> y;
	if (!(cin >> y)) {
		cout << "������� ���������� ���� int"; return 0;
	}
	cout << "������� b: "; cin >> b;
	if (!(cin >> b)) {
		cout << "������� ���������� ���� int"; return 0;
	}
	if (b - y <= 0 || b - x < 0) {
		cout << "Z �� ����� �������!";
		return 0;
	}
	float z;
	z = log(b - x) * sqrt(b - x);
	cout << "z = " << z;
	return 0;
	}

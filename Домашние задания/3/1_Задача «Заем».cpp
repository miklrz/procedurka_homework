#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int S, n;
	float p;
	cout << "������� S: "; 
	if (!(cin >> S)) {
		cout << "������� ���������� ���� int";
	}
	cout << "������� p: ";
	if (!(cin >> p)) {
		cout << "������� ���������� ���� float";
	}
	cout << "������� n: "; 
	if (!(cin >> n)) {
		cout << "������� ���������� ���� int";
	}
	float r = p / 100;
	float _ = pow((1 + r), n);
	float a = (S * r * _);
	float b = (12 * (_ - 1));
	if (b == 0) {
		cout << "��� m ��� �������!";
		return 0;
	}
	double m = a / b;
	cout << "m = " << m;
	return 0;

}
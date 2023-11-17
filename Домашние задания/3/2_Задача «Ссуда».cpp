#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double S,n, m1;
	double p,r, m2;

	cout << "������� S: "; 
	if (!(cin >> S)) {
		cout << "������� ���������� ���� double";
		return 0; 
	}
	cout << "������� n: ";
	if (!(cin >> n)) {
		cout << "������� ���������� ���� double";
		return 0;
	}
	cout << "������� m: ";
	if (!(cin >> m1)) {
		cout << "������� ���������� ���� double";
		return 0;
	}
	if (S <= 0 || n <= 0 || m1 <= 0) {
		cout << "���������� ������ ���� ������ ����!"; return 0;
	}
	for (float p = 0.0; p < 100; p+=0.01) {
		r = p / 100;
		double _ = pow(1 + r, n);
		double a = (S * r * _);
		double b = (12 * (_ - 1));
		if (b == 0) continue;
		m2 = a / b;
		//cout << m1 << " " << abs(m1 - m2) << " : " << a / b << "      " << p << endl;
		if (abs(m2-m1) < 0.001) {
			cout << int(p);
			break;
		}
	}
	return 0;
}
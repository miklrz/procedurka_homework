#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int x, a;
	cout << "������� X: "; 
	if (!(cin >> x)) {
		cout << "������� ���������� ���� int";
		return 0;
	}
	cout << "������� A: ";
	if (!(cin >> a)) {
		cout << "������� ���������� ���� int";
		return 0;
	}
	float w;
	if (abs(x) < 1 && (x!=0)) {
		w = a * log(abs(x));

	}
	if (abs(x) < 1 && (x == 0)) {
		cout << "W �� ����� �������";
		return 0;
	}
	else {
		if ((a - (x * x)) > 0) {
			w = sqrt(a - (x * x));
		}
		else {
			cout << "W �� ����� �������";
			return 0;
		}
	}
	cout << "W = " << w;
	return 0;
}
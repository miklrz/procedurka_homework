#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float b, c, x;
	cout << "������� b, c: ";
	if (!(cin >> b) || !(cin >> c)) {
		cout << "������� ���������� ���� float!";
		return 0;
	}
	if (b == 0) {
		cout << "��� �������!";
		return 0;
	}
	else if (b < 0) {
		x = c / b;
	}
	else {
		x = -c / b;
	}
	cout <<"x = "<< x;
	return 0;
}

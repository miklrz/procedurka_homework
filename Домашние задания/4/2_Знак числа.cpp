#include <iostream>
using namespace std;

int sign(int x) {
	if (x > 0) {
		return 1;
	}
	if (x == 0) {
		return 0;
	}
	if (x < 0) {
		return -1;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int num; 
	if (!(cin >> num)) {
		cout << "������� ���������� ���� int";
		return 0;
	}
	cout << "���� �����: " << sign(num);
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int num1, num2;
	cout << "������� ������ �����: "; if (!(cin >> num1)) { cout << "������� ���������� ������!"; return 0; }
	cout << "������� ������ �����: "; if (!(cin >> num2)) { cout << "������� ���������� ������!"; return 0; }
	int max = (num1 < num2) ? num2 : num1;
	int min = (num1 > num2) ? num2 : num1;
	while (true) {
		if (max - min == 0) {
			cout << "���: " << max;
			break;
		}
		else {
			max = max - min;
		}
	}
	return 0;
}
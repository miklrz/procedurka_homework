#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "������� n: ";
	if (!(cin >> n) || n < 0 || n > 75000) {
		cout << "������� ���������� ������!"; return 1;
	}
	cout << "������� m: ";
	if (!(cin >> m) || m < 0 || m > 75000) {
		cout << "������� ���������� ������!"; return 1;
	}
	int num = ((n + 1) * n / 2) * ((m + 1) * m / 2);
	cout << "���������� ���������������, ������� ����� �������� �� ������� ����� ������: " << num;
}
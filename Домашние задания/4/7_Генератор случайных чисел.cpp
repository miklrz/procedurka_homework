#include <iostream>
using namespace std;

void f(int s1, int iter, int m, int i, int c) {
	if (iter > 0){	
	int num = (m * s1 + i) % c;
	cout << num << " ";
	f(num, iter - 1, m, i, c);
}
}


int main() {
	setlocale(LC_ALL, "rus");
	int variant;
	int m, i, c;
	cout << "�������� 1 ��� 2 ������� ���������: ";

	if (!(cin >> variant) || variant > 2 || variant < 1) {
		cout << "������� ���������� ������!";
		return 0;
	}
	int s1, iter;
	cout << "������� ��������� �����: ";
	if (!(cin >> s1)) {
		cout << "������� ��������� ������!"; return 0;
	}
	cout << "������� ���������� ��������: ";
	if (!(cin >> iter)) {
		cout << "������� ���������� ������!"; return 0;
	}
	switch (variant) {
	case(1):
		m = 37; i = 3; c = 64;
		cout << "��������������� �����: ";
		f(s1, iter, m, i, c);
		break;

	case(2):
		m = 25173; i = 13849; c = 65537;
		cout << "��������������� �����: ";
		f(s1, iter, m, i, c);
		break;
	}
}
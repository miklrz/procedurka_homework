#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int variant;
	int m, i, c;
	cout << "�������� 1 ��� 2 ������� ���������: ";
	if (!(cin >> variant) || variant > 2 || variant < 1) {
		cout << "������� ���������� ������!";
	}
	switch (variant) {
	case(1):
		m = 37; i = 3; c = 64;

	}
}
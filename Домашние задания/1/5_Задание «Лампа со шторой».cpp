#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	bool time, lamp, shtor;
	cout << "���� - 1, ���� - 0: ";
	if (!(cin >> time)) {
		cout << "������� ���������� ���� bool!";
		return 0;
	}
	cout << "����� �������� - 1, ��������� - 0: ";
	if (!(cin >> lamp)) {
		cout << "������� ���������� ���� bool!";
		return 0;
	}
	cout << "����� ��������� - 1, ���������� - 0: ";
	if (!(cin >> shtor)) {
		cout << "������� ���������� ���� bool!";
		return 0;
	}
	bool light;
	if ((time && shtor) || lamp ) {
		light = 1;
	}
	else {
		light = 0;
	}
	if (light == 1) {
		cout << "� ������� ������";
	}
	else {
		cout << "� ������� �����";
	}
	return 0;


}
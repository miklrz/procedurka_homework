#define _USE_MATH_DEFINES 
#include <cmath>

#include <iostream>
using namespace std;

float tr() {
	float answ;
	float a, h;
	cout << "������� a: ";
	if (!(cin >> a) || a <=0) {
		cout << "������� ���������� ������!";
		return 0;
	}
	cout << "������� h: ";
	if (!(cin >> h) || h<=0) {
		cout << "������� ���������� ������!";
		return 0;
	}
	answ = (a * h) / 2;
	cout << "������� ������������: " << answ;
	return 0;
}

float pr() {
	float a, b;
	float answ;
	cout << "������� a: ";
	if (!(cin >> a) || a<=0) {
		cout << "������� ���������� ������!";
		return 0;
	}
	cout << "������� b: ";
	if (!(cin >> b) || b <=0) {
		cout << "������� ���������� ������!";
		return 0;
	}
	answ = a * b;
	cout << "������� �������������: " << answ;
	return 0;
}

float circ() {
	float r, answ; 
	cout << "������� r: ";
	if (!(cin >> r) || r<=0) {
		cout << "������� ���������� ������!";
		return 0;
	}
	answ = M_PI * r * r;
	cout << "������� �����: " <<  answ;
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;
	int choose; cout << "1. �����������\n2. �������������\n3. ����\n��������, ������� ����� ������ ������: ";
	if (!(cin >> choose) || choose > 3 || choose < 1) {
		cout << "������� ���������� ������";
		return 0;
	}
	switch (choose)
	{
	case 1: tr();
		break;
	case 2: pr();
		break;
	case 3: circ();
		break;
	}
	return 0;
}
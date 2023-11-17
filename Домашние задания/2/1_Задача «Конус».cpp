#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int h, R, r;
	cout << "������� h: "; 
	if (!(cin >> h)) { cout << "������� ����� ������ �����"; return 0; }
	cout << "������� R: "; 
	if (!(cin >> R)) { cout << "������� ����� ������ �����"; return 0; }
	cout << "������� r: "; 
	if (!(cin >> r)) { cout << "������� ����� ������ �����"; return 0; }
	double l = (h * h + r * r);
	//cout << "������� l: "; cin >> l;
	if (h <= 0 or r <= 0 or R <= 0) {
		cout << "��� ���������� ������ ���� ��������������!";
	}
	else {
		double PI = 3.1415;
		double V = 1.0/3*PI * h * (R * R + R * r + r * r);
		double S = PI * (R * R + (R + r) * l + r * r);
		cout << "V = " << V;
		cout << "S = " << S;
	}
	return 0;

}

#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a, b, d;
	cout << "������� ��� ����� a, b: ";
	if (!(cin >> a) || !(cin >> b)) {
		cout << "����� ������� ����� ���� int!";
		return 0;
	}
	cout <<"a+b = "<< a + b << "\na-b = " << a - b << "\na*b " << a * b;
	if (b != 0) {
		d = a / b;
		cout << "\na/b = " << d;
	}
	else {
		cout << "\nb = 0, ������� �� ������� ����� ����������! ";
	}
	return 0;
}
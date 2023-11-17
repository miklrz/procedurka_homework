#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a, b, d;
	cout << "Введите два числа a, b: ";
	if (!(cin >> a) || !(cin >> b)) {
		cout << "Нужно вводить числа типа int!";
		return 0;
	}
	cout <<"a+b = "<< a + b << "\na-b = " << a - b << "\na*b " << a * b;
	if (b != 0) {
		d = a / b;
		cout << "\na/b = " << d;
	}
	else {
		cout << "\nb = 0, частное от деления найти невозомжно! ";
	}
	return 0;
}
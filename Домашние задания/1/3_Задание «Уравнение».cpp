#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float b, c, x;
	cout << "Введите b, c: ";
	if (!(cin >> b) || !(cin >> c)) {
		cout << "Вводить переменные типа float!";
		return 0;
	}
	if (b == 0) {
		cout << "Нет решений!";
		return 0;
	}
	else if (b < 0) {
		x = c / b;
	}
	else {
		x = -c / b;
	}
	cout <<"x = "<< x;
	return 0;
}

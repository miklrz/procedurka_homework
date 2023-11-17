#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int num1, num2;
	cout << "Введите первое число: "; if (!(cin >> num1)) { cout << "Введите корректные данные!"; return 0; }
	cout << "Введите второе число: "; if (!(cin >> num2)) { cout << "Введите корректные данные!"; return 0; }
	int max = (num1 < num2) ? num2 : num1;
	int min = (num1 > num2) ? num2 : num1;
	while (true) {
		if (max - min == 0) {
			cout << "НОД: " << max;
			break;
		}
		else {
			max = max - min;
		}
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "Введите n: ";
	if (!(cin >> n) || n < 0 || n > 75000) {
		cout << "Введите корректные данные!"; return 1;
	}
	cout << "Введите m: ";
	if (!(cin >> m) || m < 0 || m > 75000) {
		cout << "Введите корректные данные!"; return 1;
	}
	int num = ((n + 1) * n / 2) * ((m + 1) * m / 2);
	cout << "Количество прямоугольников, которые можно вырезать из данного листа бумаги: " << num;
}
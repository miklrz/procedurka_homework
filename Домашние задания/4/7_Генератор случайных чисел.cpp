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
	cout << "¬ыберите 1 или 2 вариант генерации: ";

	if (!(cin >> variant) || variant > 2 || variant < 1) {
		cout << "¬ведите корректные денные!";
		return 0;
	}
	int s1, iter;
	cout << "¬ведите начальное число: ";
	if (!(cin >> s1)) {
		cout << "¬ведите корректне данные!"; return 0;
	}
	cout << "¬ведите количество итераций: ";
	if (!(cin >> iter)) {
		cout << "¬ведите корректные данные!"; return 0;
	}
	switch (variant) {
	case(1):
		m = 37; i = 3; c = 64;
		cout << "—генерированные числа: ";
		f(s1, iter, m, i, c);
		break;

	case(2):
		m = 25173; i = 13849; c = 65537;
		cout << "—генерированные числа: ";
		f(s1, iter, m, i, c);
		break;
	}
}
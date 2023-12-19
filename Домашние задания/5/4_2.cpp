#include <iostream>

using namespace std;

long double fact(int n) {
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

int main() {
	// 3 ряды
	setlocale(LC_ALL, "rus");
	int n; cout << "Введите n: ";
	if (!(cin >> n) || n < 1) {
		return 1;
	}
	double pr = 1;
	double m[1000];
	m[1] = sin(2);
	for (int i = 2; i < n + 2; ++i) {
		m[i] = m[i - 1] + sin(2 * i);
	}
	for (int i = 1; i < n + 1; ++i){
		pr *= (fact(i) / m[i]);
	}
	cout << "Произведение последовательности равно: " << pr;
}
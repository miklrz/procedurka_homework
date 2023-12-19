#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n; cout << "¬ведите n: ";
	if (!(cin >> n)) {
		cout << "¬ведите корректные данные!";
		return 1;
	}
	
	double m[1000];
	m[1] = sin(1);
	for (int i = 2; i < n + 2; ++i) {
		m[i] = m[i - 1] + sin(i);
	}
	double sum = 0;
	for (int i = 1; i < n + 1; ++i) {
		sum += (float(i) / m[i]);
	}

	cout <<"—умма последовательности равна: " << sum;
}
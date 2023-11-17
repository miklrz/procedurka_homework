#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float N;
	cout << "¬ведите N: ";
	if (!(cin >> N)) {
		cout << "¬ведите переменную типа float"; return 0;
	}
	N = int(N);
	if (N <= 0) {
		N = 1;
	}
	for (int i = 1; i < 11; i++) {
		cout << N + i << endl;
	}
	return 0;
}
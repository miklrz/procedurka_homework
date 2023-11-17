#include <iostream>
using namespace std;

int sign(int x) {
	if (x > 0) {
		return 1;
	}
	if (x == 0) {
		return 0;
	}
	if (x < 0) {
		return -1;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int num; 
	if (!(cin >> num)) {
		cout << "¬ведите переменную типа int";
		return 0;
	}
	cout << "«нак числа: " << sign(num);
	return 0;
}
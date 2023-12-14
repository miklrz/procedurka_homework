#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int arr[1000];
	arr[0] = true;
	arr[1] = true;
	arr[2] = true;
	int n;
	cout << "Введите число :"; if (!(cin >> n)) { "Введите корректные данные!"; }
	for (int i = 3; i < n; ++i) {
		bool _ = false;
		for (int j = 2; j < i; j++) {
			if (i % j == 0 and i != j) {
				arr[i] = false;
				_ = true;
				break;
			}
			
		}
		if (_ == false) { arr[i] = true; }
	}
	cout << "Простые числа: ";
	for (int i = 0; i < n; ++i) {
		if (arr[i] == true) {
			cout << i << " ";
		}
	}
}
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int variant;
	int m, i, c;
	cout << "Выберите 1 или 2 вариант генерации: ";
	if (!(cin >> variant) || variant > 2 || variant < 1) {
		cout << "Введите корректные денные!";
	}
	switch (variant) {
	case(1):
		m = 37; i = 3; c = 64;

	}
}
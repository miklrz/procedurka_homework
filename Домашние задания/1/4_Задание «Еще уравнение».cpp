#include <iostream>
using namespace std;

int main() {
	// ax^2 + bx + c = 0
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите a, b, c: ";
	if (!(cin >> a) || !(cin >> b) || !(cin >> c)) {
		cout << "Вводить переменные типа int";
		return 0;
	}
	float x,x1;
	if (a == 0) {
		if (b != 0) {
			x = -1*(c/b);
			cout << "x = " << x;
			return 0;
		}
		else {
			cout << "Нет решений"; return 0;
		}
	}
	else if (b == 0) {
		// ax*2 + c = 0
		// x = sqrt(-c/a)
		x = sqrt(-1*(c / a));
		cout << "x = " << x;
		return 0;
	}
	else if (c == 0) {
		//ax*2 + bx = 0
		//x(ax + b) = 0
		// x = 0; x = -b/a
		x = 0;
		x1 = (-1*(b / a));
		cout << "x1 = " << x << "\nx2 = " << x1;
		return 0;
	}
	else {
		float d = b * b - 4 * a * c;
		if (d < 0) {
			cout << "Нет решений!";
			return 0;
		}
		else if (d == 0) {
			x = (-1 * (b / (2 * a)));
			cout << "x = " << x;
		}
		else {
			x = ((-1 * b + sqrt(d)) / 2 * a);
			x1 = ((-1 * b + sqrt(d)) / 2 * a);
			cout << "x1 = " << x << "\nx2 = " << x1;
		}
	}

	
	return 0;
}
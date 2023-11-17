#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int x, y, b;
	cout << "¬ведите x: ";
	if (!(cin >> x)) {
		cout << "¬ведите переменную типа int"; return 0;
	}
	cout << "¬ведите y: "; cin >> y;
	if (!(cin >> y)) {
		cout << "¬ведите переменную типа int"; return 0;
	}
	cout << "¬ведите b: "; cin >> b;
	if (!(cin >> b)) {
		cout << "¬ведите переменную типа int"; return 0;
	}
	if (b - y <= 0 || b - x < 0) {
		cout << "Z не имеет решений!";
		return 0;
	}
	float z;
	z = log(b - x) * sqrt(b - x);
	cout << "z = " << z;
	return 0;
	}

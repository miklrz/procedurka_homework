#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int S, n;
	float p;
	cout << "¬ведите S: "; 
	if (!(cin >> S)) {
		cout << "¬ведите переменную типа int";
	}
	cout << "¬ведите p: ";
	if (!(cin >> p)) {
		cout << "¬ведите переменную типа float";
	}
	cout << "¬ведите n: "; 
	if (!(cin >> n)) {
		cout << "¬ведите переменную типа int";
	}
	float r = p / 100;
	float _ = pow((1 + r), n);
	float a = (S * r * _);
	float b = (12 * (_ - 1));
	if (b == 0) {
		cout << "ƒл€ m нет решений!";
		return 0;
	}
	double m = a / b;
	cout << "m = " << m;
	return 0;

}
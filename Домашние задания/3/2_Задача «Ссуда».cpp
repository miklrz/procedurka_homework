#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double S,n, m1;
	double p,r, m2;

	cout << "¬ведите S: "; 
	if (!(cin >> S)) {
		cout << "¬ведите переемнную типа double";
		return 0; 
	}
	cout << "¬ведите n: ";
	if (!(cin >> n)) {
		cout << "¬ведите переемнную типа double";
		return 0;
	}
	cout << "¬ведите m: ";
	if (!(cin >> m1)) {
		cout << "¬ведите переемнную типа double";
		return 0;
	}
	if (S <= 0 || n <= 0 || m1 <= 0) {
		cout << "ѕеременный должны быть больше нул€!"; return 0;
	}
	for (float p = 0.0; p < 100; p+=0.01) {
		r = p / 100;
		double _ = pow(1 + r, n);
		double a = (S * r * _);
		double b = (12 * (_ - 1));
		if (b == 0) continue;
		m2 = a / b;
		//cout << m1 << " " << abs(m1 - m2) << " : " << a / b << "      " << p << endl;
		if (abs(m2-m1) < 0.001) {
			cout << int(p);
			break;
		}
	}
	return 0;
}
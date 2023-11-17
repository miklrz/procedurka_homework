#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int x, a;
	cout << "¬ведите X: "; 
	if (!(cin >> x)) {
		cout << "¬ведите переменную типа int";
		return 0;
	}
	cout << "¬ведите A: ";
	if (!(cin >> a)) {
		cout << "¬ведите переменную типа int";
		return 0;
	}
	float w;
	if (abs(x) < 1 && (x!=0)) {
		w = a * log(abs(x));

	}
	if (abs(x) < 1 && (x == 0)) {
		cout << "W не имеет решений";
		return 0;
	}
	else {
		if ((a - (x * x)) > 0) {
			w = sqrt(a - (x * x));
		}
		else {
			cout << "W не имеет решений";
			return 0;
		}
	}
	cout << "W = " << w;
	return 0;
}
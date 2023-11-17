#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int h, R, r;
	cout << "¬ведите h: "; 
	if (!(cin >> h)) { cout << "¬водить можно только числа"; return 0; }
	cout << "¬ведите R: "; 
	if (!(cin >> R)) { cout << "¬водить можно только числа"; return 0; }
	cout << "¬ведите r: "; 
	if (!(cin >> r)) { cout << "¬водить можно только числа"; return 0; }
	double l = (h * h + r * r);
	//cout << "¬ведите l: "; cin >> l;
	if (h <= 0 or r <= 0 or R <= 0) {
		cout << "¬се переменные должны быть положительными!";
	}
	else {
		double PI = 3.1415;
		double V = 1.0/3*PI * h * (R * R + R * r + r * r);
		double S = PI * (R * R + (R + r) * l + r * r);
		cout << "V = " << V;
		cout << "S = " << S;
	}
	return 0;

}

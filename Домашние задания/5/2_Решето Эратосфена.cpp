#include <iostream>
using namespace std;

int main() {
	int arr[1000];
	arr[0] = true;
	arr[1] = true;
	arr[2] = true;
	int n;
	cout << "¬ведите число :"; if (!(cin >> n)) { "¬ведите корректные данные!"; }
	for (int i = 3; i < n; ++i) {
		bool _ = false;
		for (int j = 1; j < i; j++) {
			if (i % j == 0 and i != j) {
				arr[i] = false;
				_ = true;
				break;
			}
			
		}
		if (_ == false) { arr[i] = true; }
	}
	for (int i = 0; i < n; ++i) {

		cout <<i << " "<< arr[i] << "\n";
	}
}
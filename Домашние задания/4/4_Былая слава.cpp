#include <iostream>
using namespace std;

int main() {
	for (int h = 0; h < 8; ++h) {
		if (h < 4) {
			for (int c = 0; c < 8; ++c) {
				cout <<"*";
			}
			for (int c = 0; c < 13; ++c) {
				cout << "_";
			}
		}
		else {
			for (int c = 0; c < 21; ++c) {
				cout << "_";
			}
		}
		cout << "\n";
	}
	return 0;
}
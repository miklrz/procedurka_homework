#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	for (float x = -4; x <= 4; x += 0.5) {
		if ((x - 1) == 0){
			cout << "Äëÿ x = " << x << " Division by zero!" << endl;
			continue;
		}
		int num = (x * x - 2 * x + 2) / (x - 1);
		cout << "Äëÿ x = " << x << " y = " << num << endl;
	}
	return 0;
}
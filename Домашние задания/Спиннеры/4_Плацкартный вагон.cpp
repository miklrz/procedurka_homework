#include <iostream>
using namespace std;

bool not_find(int m[], int num) {
	for (int i = 0; i < 54; ++i) {
		if (m[i] == num) {
			return false;
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int n_mest = 54;
	bool m[8];
	int svobodnie[55];
	int N; 
	cout << "Введите количество свободных мест: ";
	if (!(cin >> N) || N < 1) {
		cout << "Введите корректные данные!"; return 1;
	}
	for (int i = 0; i < N; ++i) {
		cout << "Введите " << i + 1 << " свободное место: ";
		int _; if (!(cin >> _)|| _ < 0) {
			cout << "Введите корректные данные!"; return 1;
		}
		svobodnie[i + 1] = _;
	}
	for (int kupe = 1; kupe < 10; ++kupe) {

		// i*4-3 <= mesto <= i*4 + 54-2*(i-1)-1 < mesto_l 54-2*(i-1)

		bool flag = false;

		for (int mesto_l = kupe * 4 - 3; mesto_l <= kupe * 4; ++mesto_l) {
			if (not_find(svobodnie, mesto_l)) {
				flag = true;
				break;
			}
		}
		for (int mesto_p = 54 - 2 * (kupe - 1)-1; mesto_p <= 54 - 2 * (kupe - 1) ; mesto_p++) {
			if (not_find(svobodnie, mesto_p)) {
				flag = true;
				break;
			}
		}
		if (flag == false) {
			m[kupe - 1] = true;
		}
	}
	int max_sum;
	int sum = 0;
	for (int i = 0; i < 8; ++i) {
		if (m[i] == true) {
			sum += 1;
		}
		else {
			max_sum = max(max_sum, sum);
			sum = 0;
		}
	}
	cout <<"Максимальнео число подряд идущих купе: " << max_sum;
}
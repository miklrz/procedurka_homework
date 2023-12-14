#include <iostream>
using namespace std;

int main() {
	// N лопастей | A + B * N руб | Не купит если цена > C рублей
	setlocale(LC_ALL, "rus");
	int A; cout << "Введите стоимость основания спиннера: "; if (!(cin >> A)) { cout << "Введите корректные данные!"; return 0; }
	int B; cout << "Введите стоимость одной лопасти: "; if (!(cin >> B)) { cout << "Введите корректные данные!"; return 0; }
	int C; cout << "Введите максимальную стоимость всего спиннера: "; if (!(cin >> C)) { cout << "Введите корректные данные!"; return 0; }
	int max_N;
	for (int N = 1; N < 1000; N++) {
		int price = A + B * N;
		if (price <= C) {
			max_N = N;
		}
		else {
			break;
		}
	}
	cout <<"Максимальное число лопастей спиннера: "  << max_N;
	return 0;
}
#include<iostream>
using namespace std;

int main() {

	// 3 или 4 лопасти
	// M лопастей и неограниченный запаз оснований 
	// использовать все M лопастей
	// любое из решений
	
	setlocale(LC_ALL, "rus");
	int M; cout << "Введите количество лопастей: "; if (!(cin >> M)) { cout << "Введите корректные данные!"; return 0; }
	int three = 0, four = 0;
	while (M / 3 != 0) {
		M -= 3; three += 1;
		if (M >= 4) {
			M -= 4; four += 1;
		}
	}
	cout << three << endl << four;
}
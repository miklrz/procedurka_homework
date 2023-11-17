#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	bool time, lamp, shtor;
	cout << "День - 1, Ночь - 0: ";
	if (!(cin >> time)) {
		cout << "Введите переменную типа bool!";
		return 0;
	}
	cout << "Лампа включена - 1, выключена - 0: ";
	if (!(cin >> lamp)) {
		cout << "Введите переменную типа bool!";
		return 0;
	}
	cout << "Шторы задвинуты - 1, раздвинуты - 0: ";
	if (!(cin >> shtor)) {
		cout << "Введите переменную типа bool!";
		return 0;
	}
	bool light;
	if ((time && shtor) || lamp ) {
		light = 1;
	}
	else {
		light = 0;
	}
	if (light == 1) {
		cout << "В комнате светло";
	}
	else {
		cout << "В комнате темно";
	}
	return 0;


}
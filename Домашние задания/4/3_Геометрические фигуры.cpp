#define _USE_MATH_DEFINES 
#include <cmath>

#include <iostream>
using namespace std;

float tr() {
	float answ;
	float a, h;
	cout << "Введите a: ";
	if (!(cin >> a) || a <=0) {
		cout << "Введите корректные данные!";
		return 0;
	}
	cout << "Введите h: ";
	if (!(cin >> h) || h<=0) {
		cout << "Введите корректные данные!";
		return 0;
	}
	answ = (a * h) / 2;
	cout << "Площадь треугольника: " << answ;
	return 0;
}

float pr() {
	float a, b;
	float answ;
	cout << "Введите a: ";
	if (!(cin >> a) || a<=0) {
		cout << "Введите корректные данные!";
		return 0;
	}
	cout << "Введите b: ";
	if (!(cin >> b) || b <=0) {
		cout << "Введите корректные данные!";
		return 0;
	}
	answ = a * b;
	cout << "Площадь прямоугльника: " << answ;
	return 0;
}

float circ() {
	float r, answ; 
	cout << "Введите r: ";
	if (!(cin >> r) || r<=0) {
		cout << "Введите корректные данные!";
		return 0;
	}
	answ = M_PI * r * r;
	cout << "Площадь круга: " <<  answ;
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;
	int choose; cout << "1. Треугольник\n2. Прямоугольник\n3. Круг\nВыберите, площадь какой фигуры искать: ";
	if (!(cin >> choose) || choose > 3 || choose < 1) {
		cout << "Введите корректные данные";
		return 0;
	}
	switch (choose)
	{
	case 1: tr();
		break;
	case 2: pr();
		break;
	case 3: circ();
		break;
	}
	return 0;
}
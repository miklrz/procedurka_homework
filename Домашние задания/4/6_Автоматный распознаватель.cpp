#include <iostream>
using namespace std;

int to_int(char a) {
	switch (a) 
	{	
		case 'I': return 1;
		case 'V':return 5;
		case 'X':return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M':return 1000;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	string number;
	cout << "¬ведите римское число: ";
	if (!(cin >> number)) { cout << "¬ведите корректные данные!"; return 0; }
	for (int i = 0; i < number.size(); ++i) {
		cout << to_int(number[i]) << " ";
	}
}
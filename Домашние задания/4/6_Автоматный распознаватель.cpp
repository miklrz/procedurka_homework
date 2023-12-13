#include <iostream>
using namespace std;

bool exist(string s) {
	if (s.find("VX") != std::string::npos || s.find("DM") != std::string::npos || s.find("LC") != std::string::npos || s.find("IIIV") != std::string::npos || s.find("IIIIV") != std::string::npos || s.find("LC") != std::string::npos || s.find("IIV") != std::string::npos || s.find("IIII") != std::string::npos || s.find("IIX") != std::string::npos || s.find("XIIII") != std::string::npos || s.find("XXXX") != std::string::npos || s.find("LL") != std::string::npos || s.find("CLL") != std::string::npos || s.find("DLD") != std::string::npos || s.find("LDD") != std::string::npos || s.find("LLI") != std::string::npos) {
		return false;
	}
	else {
		return true;
	}
}


int to_int(char a) {
	switch (a) 
	{	
		case 'I':return 1;
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
	cout << "Введите римское число: ";
	if (!(cin >> number)) { cout << "Введите корректные данные!"; return 0; }
	int summ = 0;
	if (!(exist(number))) {
		cout << "Не существует!";
		return 0;
	}
	for (int i = 0; i < number.size(); ++i) {
		cout << number[i] << " " << number[i - 1] << "\n----------------------";
		int a = to_int(number[i]);
		if (i == number.size()) {
			summ += a;
			break;
		}
		int b = to_int(number[i + 1]);
		}
		if (a < b) {
			summ -= to_int(a);
			cout << to_int(a) <<" 1 " << endl;
		}
		else {
			summ += to_int(a);
			cout << to_int(a) << " 2 " << endl;
		}
	}
	cout << summ;
}
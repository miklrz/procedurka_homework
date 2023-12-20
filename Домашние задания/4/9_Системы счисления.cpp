#include <iostream>
using namespace std;

int find(char m[], char ch) {
	for (int i = 0; i < 16; ++i) {
		if (m[i] == ch) {
			return i;
		}
	}
	return 0;
}
int st(int n, int st) {
	int num = n;
	if (st == 0) { return 1; }
	if (st == 1) { return n; }
	for (int i = 0; i < st-1; i++) {
		num*= n;
	}
	return num;
}



bool exist(string num, int from) {
	char m[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	for (int i = 0; i < num.size(); ++i) {
		if (find(m, num[i]) >= from) {
			return false;
		}
	}
	return true;
}

string convert_base(int from, int to, string str) {
	char m[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	string str_rev = str;
	reverse(str_rev.begin(), str_rev.end());
	int in_10 = 0;
	for (int i = 0; i < str.size(); i++) {
		in_10 += find(m,str_rev[i]) * st(from,i);
	}

	string str_final = "";
	while (in_10 > 0) {
		str_final += m[in_10 % to];
		in_10 /= to;
	}
	reverse(str_final.begin(), str_final.end());
	return str_final;
}

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите число: ";
	string num; cin >> num;
	cout << "Введите исходную систему счисления: ";
	int from; if (!(cin >> from) || exist(num, from) == false) { cout << "Введите корректные данные!"; return 0;}
	cout << "Введите конечную систему счисления: ";
	int to; if (!(cin >> to)) { cout << "Введите корректные данные!"; return 0; }
	cout << "Конечное число в " << to << " системе счисления: " << convert_base(from, to, num);
}
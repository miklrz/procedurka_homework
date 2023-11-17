#include <iostream>
#include<string>
#include <algorithm>
#include <array>
#include <string>
using namespace std;



int main() {
	setlocale(LC_ALL, "rus");
	//string str = "qwertyuiopasdfghjklzxcvbnmqwertyuiop";
	string str; cout << "¬ведите строку: ";  cin >> str;


	cout << "String: " << str << endl;
	
	while (true) {
		int flag = 1;
		for (int i = 1; i < size(str); ++i) {
			char temp;
			if (tolower(str[i - 1]) > tolower(str[i])) {
				temp = str[i - 1];
				str[i - 1] = str[i];
				str[i] = temp;
				flag += 1;
			}
		}
		if (flag == 1) break;
	}
	while (true) {
		int flag = 1;
		for (int i = 1; i < size(str); ++i) {
			char temp;
			if (tolower(str[i - 1]) == tolower(str[i]) && str[i] < str[i - 1]) {
				temp = str[i - 1];
				str[i - 1] = str[i];
				str[i] = temp;
				flag += 1;
			}
		}
		if (flag == 1) break;
	}

	cout<<"Sorted string: " << str;
	return 0;
}
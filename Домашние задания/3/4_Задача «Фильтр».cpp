#include<iostream>
#include <fstream>
#include <string>
using namespace std;

string line;
string str = "";
int main() {
	string s1;
	getline(cin, s1);

	ofstream f1("rty.txt");
	f1 << s1;
	f1.close();

	
	ifstream in("rty.txt");
	if (in.is_open()) {
		while (getline(in, line)) {
			str += line;
		}
		in.close();
	}
	bool flag = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 48 && str[i] <= 57) {
			flag = 0;
			cout << str[i];
		}
		else {
			if (flag == 0) {
				cout << " ";
			}
			flag = 1;
		}
	}
	return 0;
}
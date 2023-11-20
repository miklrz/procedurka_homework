#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	ofstream out;
	out.open("f1.txt");
	if (out.is_open()) {
		
		for (int i = 0; i < 10; ++i) {
			int a; 
			if (!(cin >> a)) {
				cout << "¬ведите целое число!";
				return 0;
			}
			out << a << endl;
		}
	}
	out.close();

	int summ = 0;
	ifstream in;
	string line;
	in.open("f1.txt");
	if (in.is_open()) {
		while (getline(in, line)) {
			summ += stoi(line);
		}
	}
	cout <<"—умма чисел: " <<  summ;
	return 0;
		
}
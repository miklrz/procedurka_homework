#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	ofstream out;
	out.open("f1.txt");
	if (out.is_open()) {
		cout << "¬ведите 10 чисел: ";
		for (int i = 0; i < 10; ++i) {
			float a;
			if (!(cin >> a)) {
				cout << "¬ведите корректные данные!";
				return 0;
			}
			out << a << endl;
		}
	}
	out.close();

	float summ = 0.;
	ifstream in;
	string line;
	in.open("f1.txt");
	if (in.is_open()) {
		while (getline(in, line)) {
			summ += stof(line);
		}
	}
	cout <<"—умма чисел: " <<  summ;
	return 0;
		
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string line,s1;
	getline(cin, s1);

	ofstream f1("qwe.txt");
	f1 << s1 << " qwerty ";
	f1.close();

	ifstream in("qwe.txt");
	if (in.is_open())
	{
		while (getline(in, line)) {
			cout << line << endl;
		}
		in.close();
	}
	return 0;

}
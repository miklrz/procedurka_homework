#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 34 �����
    setlocale(LC_ALL, "rus");
    string substring;

    cout << "������� ��������� ��� ������: ";
    cin >> substring;

    ifstream file("3_2.txt"); 

    if (!file.is_open()) {
        cerr << "������ �������� �����!" << endl;
        return 1;
    }

    string line;
    int occurrences = 0;

    while (getline(file, line)) {
        size_t pos = line.find(substring);
        while (pos != string::npos) {
            occurrences++;
            pos = line.find(substring, pos + 1);
        }
    }

    cout << "���������� ��������� ��������� \"" << substring << "\": " << occurrences << std::endl;

    file.close();

    return 0;
}
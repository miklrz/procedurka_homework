#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 34 текст
    setlocale(LC_ALL, "rus");
    string substring;

    cout << "Введите подстроку для поиска: ";
    cin >> substring;

    ifstream file("3_2.txt"); 

    if (!file.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;
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

    cout << "Количество вхождений подстроки \"" << substring << "\": " << occurrences << std::endl;

    file.close();

    return 0;
}
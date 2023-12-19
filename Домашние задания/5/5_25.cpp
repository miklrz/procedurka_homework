#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string strX = "";

    ofstream file("file25.txt");
    while (strX != "0")
    {
        cout << "Введите строки (для окончания введите 0): ";
        getline(cin, strX);
        if (strX == "0") {
            break;
        }
        file << strX << "\n";
    }
    file.close();

    int k = 0;
    ifstream ifile("file25.txt");
    string str, end;
    while (getline(ifile, str))
    {
        if (is_sorted(str.begin(), str.end()))
        {
            k++;
            end = end + str + "\n";
        }
    }
    ifile.close();

    if (k == 0)
    {
        cout << "Количество отсортированных строк: 0 " << endl;
    }
    else
    {
        cout << "Количество отсортированных строк: " << k << endl;
        cout << end;
    }

    return 0;
}
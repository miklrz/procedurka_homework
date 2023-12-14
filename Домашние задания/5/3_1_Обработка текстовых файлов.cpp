#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    //1
    string line;
    string text = "";
    char symbol = '*';

    ifstream in("3_1.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            text += line;
        }
    }
    in.close();

    std::replace(text.begin(), text.end(), ' ', '_');
    cout << text;
    // std::ios::trunc

    std::ofstream out;          
    out.open("3_1.txt", std::ios::in | std::ios::out);
    if (out.is_open())
    {
        out << text;
    }
    out.close();
}
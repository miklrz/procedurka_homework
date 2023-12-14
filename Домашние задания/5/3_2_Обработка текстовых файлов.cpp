#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //34
    setlocale(LC_ALL, "rus");
    string slovosochetanie = "qwe";
    int count = 0;
    string line;

    ifstream in("3_2.txt"); 
    if (in.is_open())
    {
        while (getline(in, line))
        {
            for (int i = 0; i < line.size(); ++i) {

                int position = line.substr(i,line.size()-i).find(slovosochetanie);
                if (position == std::string::npos) {
                    continue;
                }
                else {
                    count++;
                    i = position + slovosochetanie.size()-1;
                }

            }

        }
    }
    in.close();
    cout << "Словосочетание встречается в файле " << count << " раз";
}
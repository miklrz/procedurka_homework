#include<iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int M, L3, L4;
    cout << "������� M (���-�� ��������): " ;
    if (!(cin >> M))
    {
        cout << "������������ ������";
        return 0;
    }
    if (M <= 0)
    {
        cout << "������������ ������";
        return 0;
    }
    if (M <= 1)
    {
        L3 = 0;
        L4 = 0;
        cout << L3 << endl;
        cout << L4 << endl;
        return 0;
    }
    if (M % 4 == 3)
    {
        L3 = 1;
        L4 = M / 4;
        cout << L3 << endl;
        cout << L4 << endl;
        return 0;
    }
    if (M % 3 == 1)
    {
        L3 = M / 3 - 1;
        L4 = 1;
        cout << L3 << endl;
        cout << L4 << endl;
        return 0;
    }
    if (M % 4 == 0)
    {
        L3 = 0;
        L4 = M / 4;
        cout << L3 << endl;
        cout << L4 << endl;
        return 0;
    }
    if (M % 3 == 0)
    {
        L3 = M / 3;
        L4 = 0;
        cout << L3 << endl;
        cout << L4 << endl;
        return 0;
    }
    else
    {
        L3 = 0;
        L4 = 0;
        cout << L3 << endl;
        cout << L4 << endl;

    }
}
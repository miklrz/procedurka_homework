#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, k;
    cout << "������� N ���� : ";
    if (!(cin >> n) || n < 0)
    {
        cout << "������� ���������� ������!";
        return 0;
    }
    if (n == 0)
    {
        cout << "���� ���";
        return 0;
    }
    cout << "������� K ���������� : ";
    if (!(cin >> k) || k<=0 || n < k)
    {
        cout << "������� ���������� ������!";
        return 0;
    }
    while (k != 1)
    {
        n = (n - k % 2) / 2;
        k /= 2;
    }
    cout << "���������� ��������� ���� �����: " << (n - 1) / 2 << endl;
    cout << "���������� ��������� ���� ������: " << n / 2 << endl;
    return 0;
}
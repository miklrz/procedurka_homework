#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, k;
    cout << "Введите N мест : ";
    if (!(cin >> n) || n < 0)
    {
        cout << "Введите корректные данные!";
        return 0;
    }
    if (n == 0)
    {
        cout << "Мест нет";
        return 0;
    }
    cout << "Введите K школьников : ";
    if (!(cin >> k) || k<=0 || n < k)
    {
        cout << "Введите корректные данные!";
        return 0;
    }
    while (k != 1)
    {
        n = (n - k % 2) / 2;
        k /= 2;
    }
    cout << "Количество свободных мест слева: " << (n - 1) / 2 << endl;
    cout << "Количество свободных мест справа: " << n / 2 << endl;
    return 0;
}
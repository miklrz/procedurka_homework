#include <iostream>

using namespace std;



int main()
{
    setlocale(LC_ALL, "rus");
    double a[3][4] = { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
    double b[4][3] = { {1, 1.2, 0.5}, {2, 2.8, 0.4}, {3, 5, 1}, {4, 2, 1.5} };
    double c[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
    double maxden = 0, minden = 100000, prodmax1 = 0, prodmin1 = 0, prodmax2 = 0, prodmin2 = 0, maxkom = 0, minkom = 100000, pribil = 0, vsegokom = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int num = 0; num < 4; num++)
            {
                c[i][j] += a[i][num] * b[num][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        if (c[i][1] > maxden)
        {
            maxden = c[i][1];
            prodmax1 = i + 1;
        }
        if (c[i][1] < minden)
        {
            minden = c[i][1];
            prodmin1 = i + 1;
        }
        if (c[i][2] > maxkom)
        {
            maxkom = c[i][2];
            prodmax2 = i + 1;
        }
        if (c[i][2] < minkom)
        {
            minkom = c[i][2];
            prodmin2 = i + 1;
        }
        pribil += c[i][1];
        vsegokom += c[i][2];
    }
    cout << "Больше всего денег получил продавец номер " << prodmax1 << endl;
    cout << "Меньше всего денег получил продавец номер " << prodmin1 << endl;
    cout << "Больше всего комиссионных получил продавец номер " << prodmax2 << endl;
    cout << "Меньше всего комиссионных получил продавец номер " << prodmin2 << endl;
    cout << "Общая сумма денег, вырученных за товары: " << pribil << endl;
    cout << "Общая сумма комиссионных вырученных за товары: " << vsegokom << endl;
    cout << "Общая сумма денег, прошедшая через руки продавцов: " << pribil + vsegokom << endl;
}
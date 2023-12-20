#include <iostream>
#include <algorithm>
using namespace std;

bool generate(int* arr, int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i - 1] == i)
        {
            return true;
        }
    }
    return false;
}

int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; ++i) {
        f *= i;
    }
    return f;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int k = 0;
    cout << "¬ведите n: ";
    if (!(cin >> n) || n < 0)
    {
        cout << "¬ведите корректные данные!";
        return 1;
    }
    int fac = factorial(n);
    int arr[1000];
    for (int i = 0; i != n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < fac; i++)
    {
        next_permutation(arr, arr + n);
        if (generate(arr, n))
        {
            k++;
        }
    }
    cout << k << endl;
    return 0;
}


#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus_rus.1251");
    const int n = 5;
    int x[n];
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cout << "Введённый массив" << endl;
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;
    int y = 1;
    for (int i = 0; i <= n; i++)
    {
        y *= pow(abs(x[i]), 1/i);
        cout << y << endl;
    }
}

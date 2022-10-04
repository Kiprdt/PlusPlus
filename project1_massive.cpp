#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus_rus.1251");
    const int n = 5;
    int mas[n];
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++)
        cin >> mas[i];
    cout << "Введённый массив" << endl;
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;
    int s = 0, k = 0, p = 1;
    for (int i = 0; i < n; i++)
        {
            if (mas[i] > 0) k++;
            if (mas[i] < 0) p *= mas[i];
            if (mas[i]%2 == 0) s += mas[i];
        }
        cout << "S=" << s << endl;
        cout << "P" << p << endl;
        cout << "K=" << k << endl;
}

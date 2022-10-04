/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    int max = mas[0], min = mas[0];
    for (int i = 0; i < n; i++)
        {
            if (mas[i] > max) max = mas[i];
            if (mas[i] < min) min = mas[i];
        }
        cout << "S=" << s << endl;
        cout << "P" << p << endl;
        cout << "K=" << k << endl;
        cout << "max" << max << endl;
        cout << "min" << min << endl;
}

#include <ctime>
#include <iostream>
#include "math.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = -3, max = 20, c = 0, firstSum = 0, firstCount = 0, minFabs = 0;
    int arr[20];
    cout << "Введите минимальную границу значений массива: " << endl;
    cin >> min;
    cout << "Введите максимальную границу массива: " << endl;
    cin >> max;
    cout << "Введите C: " << endl;
    cin >> c;
    for (int i = 0; i < 20; ++i) {
        arr[i] = min + rand() % (max-min+1);
        cout << "Элемент ["<< i << "] = " << arr[i] << endl;
    }
    minFabs = fabs(arr[0]);
    for (int i = 0; i < 20; ++i) {
        if (arr[i] < 0 && i % 2 != 0) firstSum += arr[i];
        if (arr[i] > c)
        {
            firstCount++;
//            cout << "Элемент[" << i << "] больше чем C(" << c << ")" << endl;
        }
        if (minFabs > fabs(arr[i])) minFabs = fabs(arr[i]);

    }
//    cout << "Количество эллементов > C = " << firstCount << endl;
//    cout << "Сумма = " << firstSum << endl;
    cout << "Минимальный по модулю = " << minFabs << endl;
    system("pause");
    return 0;
}

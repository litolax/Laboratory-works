#include <ctime>
#include <iostream>
using namespace std;

void First()
{
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = -3, max = 20, c = 0, firstSum = 0, firstCount = 0;
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
    for (int i = 0; i < 20; ++i) {
        if (arr[i] < 0 && i % 2 != 0) firstSum += arr[i];
        if (arr[i] > c)
        {
            firstCount++;
            cout << "Элемент[" << i << "] больше чем C(" << c << ")" << endl;
        }
    }
    cout << "Количество эллементов > C = " << firstCount << endl;
    cout << "Сумма = " << firstSum << endl;
}


int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    First();
    system("pause");
    return 0;
}

#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

int cylinderVolume(int radius, int height)
{
    const float pi = 3.14;
    return pi * pow(radius, 2) * height;
}

int maxNaturalNumber(int number)
{
    int max = 0;
    while (number)
    {
        max = std::max(number % 10, max);
        number /= 10;
    }
    return max;
}

int sumArrElements(int arr[10])
{
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");

    cout << "Лабараторная работа №8" << endl << endl;

    cout << "Задание №1" << endl;
    cout << "Введите радиус и высоту цилиндра" << endl;
    int r, h;
    cin >> r >> h;
    cout << "Объем цилиндра = " << cylinderVolume(r,h) << endl;

    cout << "Задание №2" << endl;
    cout << "Введите натуральное число" << endl;
    int number;
    cin >> number;
    cout << "Максимальная цифра из натурального числа = " << maxNaturalNumber(number) << endl;

    int firstArr[10]{1,3,5,6,2,4,7,3,2,2};
    int secondArr[10]{5,6,7,8,9,6,5,4,6,8};

    cout << "Задание №3" << endl;
    cout << "Массив №1: ";
    for (int i = 0; i < 10; i++) {
        cout << firstArr[i] << " ";
    }
    cout << endl;
    cout << "Массив №2: ";
    for (int i = 0; i < 10; i++) {
        cout << secondArr[i] << " ";
    }
    cout << endl;

    int sumFirst = sumArrElements(firstArr);
    int sumSecond = sumArrElements(secondArr);
    cout << "Массив с большей суммой элементов:" << endl;
    if (sumFirst > sumSecond) for (int i = 0; i < 10; ++i)  cout << firstArr[i] << " " << endl;
    else for (int i = 0; i < 10; ++i)  cout << secondArr[i] << " " << endl;

    system("pause");
    return 0;
}

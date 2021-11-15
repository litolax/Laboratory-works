#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

void FirstA(const int arr[])
{
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        if (arr[i] < 0 && i % 2 != 0) sum += arr[i];
    }
    cout << "Сумма отрицательных элементов с нечетными номерами = " << sum << endl;
}

void FirstB(const int arr[])
{
    int c = 0, count = 0;
    cout << "Введите C: " << endl;
    cin >> c;
    for (int i = 0; i < 20; ++i) {
        if (arr[i] > c)
        {
            cout << "Элемент[" << i << "] больше чем C(" << c << ")" << endl;
            count++;
        }
    }
    cout << "Сумма этих элементов = " << count << endl;
}

void FirstC(int arr[])
{
    int minFabs = 0;
    minFabs = fabs(arr[0]);
    for (int i = 0; i < 20; ++i) {
        if (minFabs > fabs(arr[i])) minFabs = fabs(arr[i]);
    }
    cout << "Минимальный элемент по модулю = " << minFabs << endl;
}

void FirstD(int arr[])
{
    int avarageArithmetic = 0, count = 0, sum = 0;
    for (int i = 0; i < 20; ++i) {
        if (arr[i] % 2 != 0)
        {
            count++;
            sum += arr[i];
        }
    }
    avarageArithmetic = sum / count;
    for (int i = 0; i < 20; ++i) {
       if (arr[i] > avarageArithmetic)
           cout << "Элемент[" << i << "] = "<< arr[i] << " больше чем среднее арифметическое нечетных элементов: "<< avarageArithmetic << endl;
    }
}

void FirstE(const int arr[])
{
    int firstIndex = 0, secondIndex = 0;
    for (int i = 0; i < 20; i++) {
        if (arr[i] > 0) firstIndex = i;
        break;
    }
    for (int i = 20; i > 0; i--) {
        if (arr[i] > 0) secondIndex = i;
        break;
    }

    cout << "penis1 = " << firstIndex << endl;
    cout << "penis2 = " << secondIndex << endl;
}

void FirstF(int arr[])
{

}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = -3, max = 20;
    int arr[20];
    cout << "Введите минимальную границу значений массива: " << endl;
    cin >> min;
    cout << "Введите максимальную границу массива: " << endl;
    cin >> max;
    for (int i = 0; i < 20; ++i) {
        arr[i] = min + rand() % (max-min+1);
        cout << "Элемент ["<< i << "] = " << arr[i] << endl;
    }
//    FirstA(arr);
//    FirstB(arr);
//    FirstC(arr);
//    FirstD(arr);
    FirstE(arr);
//    FirstF(arr);
    system("pause");
    return 0;
}

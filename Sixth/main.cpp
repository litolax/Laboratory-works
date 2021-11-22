#include <ctime>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void FirstA(const int arr[])
{
    cout << "Задание №1.1" << endl << endl;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        if (arr[i] < 0 && i % 2 != 0) sum += arr[i];
    }
    cout << "Сумма отрицательных элементов с нечетными номерами = " << sum << endl << endl;
}

void FirstB(const int arr[])
{
    cout << "Задание №1.2" << endl;
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
    cout << "Сумма этих элементов = " << count << endl << endl;
}

void FirstC(int arr[])
{
    cout << "Задание №1.3" << endl << endl;
    int minFabs = 0;
    minFabs = fabs(arr[0]);
    for (int i = 0; i < 20; ++i) {
        if (minFabs > fabs(arr[i])) minFabs = fabs(arr[i]);
    }
    cout << "Минимальный элемент по модулю = " << minFabs << endl << endl;
}

void FirstD(int arr[])
{
    cout << "Задание №1.4" << endl << endl;
    int count = 0, sum = 0;
    double avarageArithmetic = 0;
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
           cout << "Элемент[" << i << "] = "<< arr[i] << " больше чем среднее арифметическое нечетных элементов: "<< avarageArithmetic << endl << endl;
    }
}

void FirstE(int arr[])
{
    cout << "Задание №1.5" << endl << endl;
    int firstIndex = 0, secondIndex = 0, sum = 0, a = 0, b = 0;

    for (int i = 0; i < 20; i++) {
        if (arr[i] > 0) {
            firstIndex = i;
            break;
        }
    }
    for (int i = 19; i >= 0; i--) {
        if (arr[i] > 0) {
            secondIndex = i;
            break;
        }
    }

    a = firstIndex;
    b = secondIndex;
    a++;
    for (; a < b; a++) sum += arr[a];
    cout << "Сумма элементов массива, расположенных между первым и последним положительными элементами = " << sum << endl << endl;
}

void FirstF(const int arr[])
{
    cout << "Задание №1.6" << endl << endl;
    int sum = 0, firstMaxElement = 0, firstMaxElementIndex = 0;
    firstMaxElement = arr[0];
    for (int i = 0; i < 20; i++) {
        if (arr[i] > firstMaxElement)
        {
            firstMaxElement = arr[i];
        }
    }
    for (int i = 0; i < 20; i++) {
        if (arr[i] == firstMaxElement) {
            firstMaxElementIndex = i;
            break;
        }
    }
    for (int i = 0; i < firstMaxElementIndex; i++) {
        sum += arr[i];
    }
    cout << firstMaxElementIndex << endl << endl;
    cout << "Сумма положительных элементов массива, расположенных до (первого) максимального элемента = " << sum << endl << endl;
}

void Second()
{
    cout << "Задание №2" << endl;
    int arr[10]{1,2,3,4,5,5,7,3,2,1};
    bool isPalindrom = true;
    for (int i = 0; i < 10; i++) {
        if (arr[i] != arr[9-i]) isPalindrom = false;
    }
    if (isPalindrom) cout << "Данный массив является палиндромом" << endl;
    else cout << "Данный массив не является палиндромом" << endl;
}

void Third()
{
    cout << "Задание №3" << endl;
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = 10, max = 30, maxOfArr = 0, minOfArr = 0, sum = 0, avarageArithmetic = 0;
    int arr1[20];
    int arr2[20];
    int arr3[20];
    for (int i = 0; i < 20; i++) {
        arr1[i] = min + rand() % (max-min+1);
        arr2[i] = min + rand() % (max-min+1);
    }

    for (int i = 0; i < 20; ++i) {
        arr3[i] = arr1[i] + arr2[i];
        if (i == 0)
        {
            maxOfArr = arr3[i];
            minOfArr = arr3[i];
        }
        if (maxOfArr > arr3[i]) maxOfArr = arr3[i];
        if (minOfArr < arr3[i]) minOfArr = arr3[i];
        sum += arr3[i];
    }
    avarageArithmetic = sum / 20;
    cout << "Среднее арифметическое третьего массива = " << avarageArithmetic << endl;
    cout << "Максимальное третьего массива = " << maxOfArr << endl;
    cout << "Минимальное третьего массива = " << minOfArr << endl;
}

void Fourth()
{
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = -10, max = 10, zeroCount = 0;
    bool hasZero = false;
    int arr[20];

    do {
        for (int & i : arr) {
            i = min + rand() % (max-min+1);
            if (i == 0) {
                zeroCount++;
                hasZero = true;
            }
        }
    }
    while(!hasZero);
    for (int i = 0; i < 20; i++) {
          cout << "Элемент ["<< i << "] = " << arr[i] << endl;
    }

    int *arr2 = new int[20-zeroCount];
    int size2 = 0;
    for (int i = 0; i < 20; i++)
        if (arr[i]) {
            arr2[size2] = arr[i];
            size2++;
        }

    cout << "Новый массив" << endl;
    for (int i = 0; i < size2; i++) {
        cout << "Элемент ["<< i << "] = " << arr2[i] << endl;
    }
    delete[] arr2;
    arr2 = nullptr;
}

void Fifth()
{
    cout << "Задание №5" << endl;
    int count = 0;
    int min = -10, max = 20;
    int arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = min + rand() % (max-min+1);
        if (arr[i] < 10) count++;
        cout << "Элемент ["<< i << "] = " << arr[i] << endl;
    }
    int *arr2 = new int[count];
    int size2 = 0;
    for (int i = 0; i < 20; i++) {
        if (arr[i] < 10)
        {
            arr2[size2] = arr[i];
            size2++;
        }
    }
    cout << "Новый массив:" << endl;
    sort(arr2, arr2+size2);
    for (int i = 0; i < size2; i++) {
        cout << "Элемент ["<< i << "] = " << arr2[i] << endl;
    }

    delete[] arr2;
    arr2 = nullptr;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = 0, max = 0;
    int arr[20]{10,-2,3,9,7,6,2,-10,9,10,4,-5,3,-4,-3,-2,3,4,8,8};
//    int arr[20];
//    cout << "Введите минимальную границу значений массива: " << endl;
//    cin >> min;
//    cout << "Введите максимальную границу массива: " << endl;
//    cin >> max;
//    for (int i = 0; i < 20; i++) {
//        arr[i] = min + rand() % (max-min+1);
//       cout << "Элемент ["<< i << "] = " << arr[i] << endl << endl;
//    }


    FirstA(arr);
    FirstB(arr);
    FirstC(arr);
    FirstD(arr);
    FirstE(arr);
    FirstF(arr);
//    Second();
//    Third();
//    Fourth();
//    Fifth();
    system("pause");
    return 0;
}

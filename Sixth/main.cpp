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

void FirstE(int arr[])
{
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
    cout << "Сумма элементов массива, расположенных между первым и последним положительными элементами = " << sum << endl;
}

void FirstF(int arr[])
{
    int sum = 0, firstMaxElement = 0, firstMaxElementIndex = 0;
    bool isFirst = false;
    firstMaxElement = arr[0];
    for (int i = 0; i < 20; i++) {
        if (arr[i] > firstMaxElement && !isFirst)
        {
            firstMaxElementIndex = i;
            isFirst = true;
        }
    }
    for (int i = 0; i < arr[firstMaxElementIndex]; i++) {
        sum += arr[i];
    }
    cout << firstMaxElementIndex << endl;
    cout << "Сумма положительных элементов массива, расположенных до (первого) максимального элемента = " << sum << endl;
}

void Second()
{
    int arr[10]{1,2,3,4,5,5,4,3,2,1};
    bool isPalindrom = true;
    for (int i = 0; i < 10; i++) {
        if (arr[i] != arr[9-i]) isPalindrom = false;
    }
    if (isPalindrom) cout << "Данный массив является палиндромом" << endl;
    else cout << "Данный массив не является палиндромом" << endl;
}

void Third()
{
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
        for (int i = 0; i < 20; i++) {
            arr[i] = min + rand() % (max-min+1);
            if (arr[i]) {
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
    for (int i = 0; i < 20; i++) {
        if (arr[i] == 0) continue;
        arr2[i] = arr
    }
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
//    srand( time( 0 ) ); // автоматическая рандомизация
//    int min = 0, max = 0;
//    int arr[20];
//    cout << "Введите минимальную границу значений массива: " << endl;
//    cin >> min;
//    cout << "Введите максимальную границу массива: " << endl;
//    cin >> max;
//    for (int i = 0; i < 20; i++) {
//        arr[i] = min + rand() % (max-min+1);
//       cout << "Элемент ["<< i << "] = " << arr[i] << endl;
//    }


//    FirstA(arr);
//    FirstB(arr);
//    FirstC(arr);
//    FirstD(arr);
//    FirstE(arr);
//    FirstF(arr);
//    Second();
//    Third();
    Fourth();
    system("pause");
    return 0;
}

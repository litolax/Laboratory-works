#include <iostream>
#include <math.h>

using namespace std;

void First(int arr[7][7])
{
    cout << "Задание 1" << endl;
    int count = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] == 0) {
                count++;
                break;
            }
        }
    }
    cout << "Количество строк, не содержащих ни одного нулевого элемента = " << 7 - count << endl;
}

void Second(int arr[7][7])
{
    cout << "Задание 2" << endl;
    int min = arr[0][0], max = arr[0][0];
    for (int i=0;i<7;i++)
    {
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    }

    for (int i=0;i<7;i++)
    {
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] == min) arr[i][j] = max;
            else if (arr[i][j] == max) arr[i][j] = min;
        }
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void Third(int arr[7][7])
{
    cout << "Задание 3" << endl;
    int sum = 0;
    for (int i=0;i<7;i++)
    {
        for (int j = 0; j < 7; j++) {
            if (i + j < 7 - 1) {
                sum += fabs(arr[i][j]);
            }
        }
    }

    cout << "Сумма модулей элементов, расположенных выше побочной диагонали = " << sum << endl << endl;
}

void Fourth(int arr[7][7])
{
    cout << "Задание 4" << endl;
    int arifmet[7];
    int sum = 0, count = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            sum += arr[i][j];
            count++;
        }
        arifmet[i] = sum / count;
        sum = 0;
        count = 0;
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] == 0) arr[i][j] = arifmet[i];
        }
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl << endl;

}

//void Fifth()
//{
//    int height = 0, width = 0, countEl = 0, max = 5, min = -5;
//    cout << "Введите количество строк массива: " << endl;
//    cin >> width;
//    cout << "Введите количество столбцов массива: " << endl;
//    cin >> height;
//    int **array = new int* [width];
//    for (int count = 0; count < width; count++)
//        array[count] = new int [height];
//
//    for (int i = 0; i < 7; i++) {
//        for (int j = 0; j < 7; j++) {
//            array[i][j] = min + rand() % (max-min+1);
//            cout << array[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//
//
//
//    for (int count = 0; count < width; count++)
//        delete []array[count];
//}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = -10, max = 10;
    int arr[7][7];
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            arr[i][j] = min + rand() % (max-min+1);
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;

    First(arr);
    Second(arr);
    Third(arr);
    Fourth(arr);
//    Fifth();
    system("pause");
    return 0;
}

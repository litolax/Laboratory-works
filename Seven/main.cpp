#include <iostream>
#include <math.h>

using namespace std;

void First(int arr[7][7])
{
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

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    int min = -10, max = 10;
    int arr[7][7];
//    {
//        {2,1,1,2,3,4,5},
//        {1,1,1,2,3,4,5},
//        {1,1,1,2,3,4,5},
//        {1,1,1,0,3,4,5},
//        {1,1,1,2,3,4,5},
//        {1,1,1,6,3,4,5},
//        {1,1,1,2,3,4,5},
//    };
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            arr[i][j] = min + rand() % (max-min+1);
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;

//    First(arr);
    Second(arr);
//    Third(arr);
//    Fourth(arr);
    return 0;
}

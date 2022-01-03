#include <iostream>

using namespace std;

void First()
{
    int n, m;
    cout << "Введите n: " << endl;
    cin >> n;
    cout << "Введите m: " << endl;
    cin >> m;
    int** arr = new int* [n];

    cout << "Введите элементы массива \n";
    int min = -10, max = 10;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = min + rand() % (max-min+1);
        }
    }

    cout << "Массив: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int *buffer = new int[n];
    int sum = 1, index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j][i] < 0) sum *= arr[j][i];
        }
        if (sum != 1) buffer[i] = sum;
        else buffer[i] = 0;
        sum = 1;
        index++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Элемент [" << i << "] = " << buffer[i] << endl;
    }

    for(int i = 0; i < n; i++) delete[] arr[i];
    delete[] arr;
    arr = nullptr;
    delete[] buffer;
    buffer = nullptr;
}

void Second() {
        cout << "Задание 2" << endl;
        int n, x, count = 0;
        cout << "Введите размерность массива" << endl;
        cin >> n;
        int min = -10, max = 10;
        int** arr = new int* [n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = min + rand() % (max-min+1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {

                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
        cout << "Введите искомое значение: "; cin >> x;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; i < j; j--)
            {
                if (arr[i][j] == x) count++;
            }
        }
        cout << endl << "X = " << x << " встречался в массиве " << count << " раз" << endl;

        for (int i = 0; i < n; i++)
        {
            delete[] arr[i];
            arr[i] = nullptr;
        }

        delete[] arr;
        arr = nullptr;
}

void Third() {
    cout << "Задание 3" << endl;
    int n, summ = 0, sumn = 0;
    cout << "Введите размерность массива" << endl;
    cin >> n;
    int min = -10, max = 10;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = min + rand() % (max-min+1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < n; j++)
        {

            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    for (int i = n - 1; i != -1; i--)
    {
        for (int j = n - 1; j != -1; j--)
        {
            if (i == j)summ += arr[i][j];
        }
    }
    for (int i = n - 1; i != -1; i--)
    {
        for (int j = n - 1; j != -1; j--)
        {
            if (i + j == n - 1) sumn += arr[i][j];
        }
    }
    cout << "Осн - побочка = " << summ << "-" << sumn << " = " << summ - sumn << endl;
    if (summ > sumn) {
        for (int i = n - 1; i != -1; i--)
        {
            for (int j = 0; i > j; j++)
            {
                if (arr[i][j] < 0) {
                    arr[i][j] = pow(summ - sumn, 2);
                }
            }
        }
    }
    else {
        for (int i = n - 1; i != -1; i--)
        {
            for (int j = n - 1; j != -1; j--)
            {
                if (i + j == n - 1)	arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < n; j++)
        {

            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
        arr[i] = nullptr;
    }

    delete[] arr;
    arr = nullptr;
}


int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    srand( time( 0 ) ); // автоматическая рандомизация
    First();
    Second();
    Third();
    system("pause");
    return 0;
}

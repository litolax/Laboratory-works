#include <iostream>

using namespace std;

void First()
{
    cout << "Задание №1" << endl;
    int* f = new int[10] {1,2,3,2,5,6,0,8,9};
    int* s = new int[10] {1,2,3,4,5,6,7,8,9};
    int count = 0;
    int finder = s[1];

    for (int i = 0; i < 10; i++) if (f[i] == finder) count++;

    cout << "Элемент [" << finder << "] встречается " << count << " раз" << endl;

    delete[] s;
    delete[] f;
    s = nullptr;
    f = nullptr;
}

void Second()
{
    cout << "Задание №2" << endl;
    cout << "Исходный массив: " << endl;

    int* f = new int[10] {1,2,5,3,8,5,8,2,0,1};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Элемент [" << i << "] = " << f[i] << endl;
    }

    for (int i = 0; i < 10; i++) if (f[i] > 3) count++;
    int *s = new int[count];
    int size = 0;
    for (int i = 0; i < 10; i++) {
        if (f[i] > 3)
        {
            s[size] = f[i];
            size++;
        }
    }

    cout << "Результат: " << endl;

    for (int i = 0; i < size; i++) {
        cout << "Элемент [" << i << "] = " << s[i] << endl;
    }

    delete[] s;
    delete[] f;
    s = nullptr;
    f = nullptr;
}

int main() {

    First();
    Second();
    system("pause");
    return 0;
}

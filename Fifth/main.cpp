#include <iostream>
#include <math.h>

using namespace std;

void First()
{
    double y(0), x(0), a, b, h, pi = 3.1415, min, max, temp;
    cout << "Введите a: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;
    cout << "Введите h: " << endl;
    cin >> h;
    int index = 0;
    min = max = a;
    x = a;
    for (x; x <= b;)
    {
        temp = y;
        y = (x*cos(pi / 4) - pow(x, 2))/(1-2*x*cos(pi/4) + pow(x,2));
        index++;
        cout << "[" << index << "] При x = " << x << " y = " << y;
        if (y > temp) cout << " [Функция убывает]" << endl;
        else cout << " [Функция возрастает]" << endl;
        x += h;
        if (min > y) min = y;
        if (max < y) max = y;
    }
    cout << "Min = " << min << " Max = " << max << endl;
}

void Second()
{
    double y(0), x(0), a, b, h, pi = 3.1415, min, max, temp;
    cout << "Введите a: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;
    cout << "Введите h: " << endl;
    cin >> h;
    int index = 0;
    min = max = a;
    x = a;
    for (x; x <= b;)
    {
        temp = y;
        y = ((1 - (pow(x, 2) / 4)) * cos(x) - ((x/2)*sin(x)));
        index++;
        cout << "[" << index << "] При x = " << x << " y = " << y;
        if (y > temp) cout << " [Функция убывает]" << endl;
        else cout << " [Функция возрастает]" << endl;
        x += h;
        if (min > y) min = y;
        if (max < y) max = y;
    }
    cout << "Min = " << min << " Max = " << max << endl;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    First();
    Second();
    return 0;
}

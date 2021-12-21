#include <iostream>

using namespace std;

int first(int n) {
    if (n == 0) return 0;
    else return first(n / 10) + 1;
}

int firstWithout(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

double second(int max, int n = 1) {
    if (n == max) return sqrt(n);
    return (sqrt(n + second(max, n+1)));
}

double secondWithout(int num) {
    double y = 0;
    for (int i = num; i > 0; i--) {
        y = sqrt(i + y);
    }
    return y;
}

int factor(int n) {
    if(n==0) return 1;
    if(n==1) return 1;
    return n*factor(n-1);
}


float third(float n) {
    if (n == 0) return 0;
    return 1.0/factor(int(n)) + third(n-1);
}

float thirdWithout(int num) {
    double res = 0;
    for (int i = 1; i <= num; i++) {
        double n = 1;
        for (int j = 1; j <= i; j++) {
            n *= j;
        }
        res += 1/n;
    }
    return res;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");

    cout << "Задание №1" << endl;
    int n;
    cout << "Введите число: " << endl;
    cin >> n;
    cout << "С рекурсией: " << first(n) << endl;
    cout << "Без рекурсии: " << firstWithout(n) << endl;

    cout << "Задание №2" << endl;
    cout << "Введите n: " << endl;
    float a;
    cin >> a;
    cout << "С рекурсией: " << second(a) << endl;
    cout << "Без рекурсии: " << secondWithout(a) << endl;

    cout << "Задание №3" << endl;
    cout << "Введите n: " << endl;
    cin >> a;
    cout << "С рекурсией: " << third(a) << endl;
    cout << "Без рукурсии: " << thirdWithout(a) << endl;
    return 0;
}

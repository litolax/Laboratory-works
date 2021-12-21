#include <iostream>

using namespace std;

int first(int n) {
    if (n == 0) return 0;
    else return first(n / 10) + 1;
}

//float second(float a) {
//    if (a < 1) return 0;
//    else return sqrt(sqrt(a) + second(sqrt(a-1)));
//}

//double second(int max, int n = 1) {
//    if (n == max) return sqrt(n);
//    return (sqrt(n + second(max, n+1)));
//}

int third(int n) {
    if(n==0) return 1;
    if(n==1) return 1;
    return n*third(n-1);
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");

    cout << "Задание №1" << endl;
    int n;
    cout << "Введите число: " << endl;
    cin >> n;
    cout << first(n) << endl;

    cout << "Задание №2" << endl;
    cout << "Введите n: " << endl;
    float a;
    cin >> a;
//    cout << second(4) << endl;

    cout << "Задание №3" << endl;
    cout << "Введите n: " << endl;
    cin >> n;
    cout << third(n);
    return 0;
}

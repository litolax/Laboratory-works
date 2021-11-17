#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    char *symbols = new char[]{'*','#','@'};
    int height = 0;
    cout << "Введите высоту треугольника: " << endl;
    cin >> height;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            if (j > 2) cout << symbols[j%3];
            else cout << symbols[j];
        }
        cout << endl;
    }
    delete symbols;
    symbols = 0;
    system("pause");
    return 0;
}

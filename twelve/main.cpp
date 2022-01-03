#include <iostream>
#include <string>

using namespace std;

void First() {
    string str1, str2; int count = 0;
    cout << "Введите 2 слова" << endl;
    getline(cin, str1);
    getline(cin, str2);
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] == str2[2]) count++;
    }
    cout << "Третий символ второго слова "<< str2[2] << " встречается в первом слове " << count << " раз" << endl;
}

void Second() {
    string surname, name, patronymic, space(". "), initials;
    cout << "Введите вашу Фамилию" << endl;
    cin >> surname;
    cout << "Введите ваше Имя" << endl;
    cin >>name;
    cout << "Введите ваше Отчество" << endl;
    cin >> patronymic;
    initials = name[0] + space + patronymic[0] + space;
    cout << "Ваши инициалы: " << initials << endl;

}

void Third() {
    string str1, str2; char g(103), v(118);
    cout << "Введите последовательность: " << endl;
    getline(cin, str1);

    for (int i = 0; i < str1.size(); i++) {
        if (g != str1[i] &&  v != str1[i]) { str2 += str1[i]; }
    }
    cout << "Строка без g и v: " << endl << str2 << endl;

}

void Fourth() {
    string surname, name, patronymic, initials,d(". "), itog;
    cout << "Введите вашу фамилию, имя и отчество: " << endl;
    getline(cin, surname);
    getline(cin, name);
    getline(cin, patronymic);
    initials = name[0] + d + patronymic[0] + d;
    itog = surname + d + initials;
    cout << "Результат: " << itog << endl;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    First();
    Second();
    Third();
    Fourth();
    system("pause");
    return 0;
}

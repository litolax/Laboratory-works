#include <iostream>

using namespace std;

class Marks {
public:
    int Math;
    int PI;
    int History;
};

class Student {
public:
    char name[20];
    char surname[20];
    int years;
    int group;
    Marks marks;
    char* GetSurname() {
        return surname;
    }
};

int main() {
    setlocale(LC_ALL, "en_US.UTF8");
    //работает только на английском
    Student students[4];
    for (int i = 0; i < 4; i++) {
        Student student;
        int Math;
        int PI;
        int History;
        cout << "Введите имя ученика" << endl;
        cin >> student.name;
        cout << "Введите фамилию ученика" << endl;
        cin >> student.surname;
        cout << "Введите возраст ученика" << endl;
        cin >> student.years;
        cout << "Введите группу ученика" << endl;
        cin >> student.group;
        cout << "Введите оценки ученика по математике, физкультуре и истории:" << endl;
        cin >> Math >> PI >> History;
        student.marks = {Math,PI,History};
        students[i] = student;
    }

    cout << "Введите группу студентов: " << endl;
    int selectedGroup = 0;
    bool moreThanOne = false;
    cin >> selectedGroup;
    for (int i = 0; i < 4; i++) {
        if (students[i].group == selectedGroup && (toupper(students[i].GetSurname()[0]) == 'V'
        || toupper(students[i].GetSurname()[0]) == 'G' || toupper(students[i].GetSurname()[0]) == 'D')) {
            cout << "Вам нужен студент: " << students[i].name << ", Группу: " << students[i].group << endl;
            moreThanOne = true;
        }
    }

    if (!moreThanOne) {
        cout << "Ниодного студента не найдено" << endl;
    }

    system("pause");
    return 0;
}

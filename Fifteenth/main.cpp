#include <iostream>

using namespace std;

class Train {
private:
    string FinishStation;
    int Index;
    string StartTime;

public:
    void SetParams(string finishStation, int index, string startTime) {
        this->FinishStation = finishStation;
        this->Index = index;
        this->StartTime = startTime;
    }

    void PrintParams() {
        cout << "Номер поезда: " << this->Index << endl;
        cout << "Пункт назначения: " << this->FinishStation << endl;
        cout << "Время отправления: " << this->StartTime << endl;
    }

    string GetFinishStation() {
        return this->FinishStation;
    }

    int GetIndex() {
        return this->Index;
    }

    string GetStartTime() {
        return this->StartTime;
    }

    void PrintIndexByTime(string time) {
        if (this->StartTime == time) cout << this->Index;
    }
};

int main()
{
    setlocale(LC_ALL, "en_US.UTF8");

    cout << "Вариант 1" << endl;

    Train* trains[2];
    for (int i = 0; i < 2; i++) trains[i] = new Train;
    trains[0]->SetParams("МГКЭ", 1, "15:00");
    trains[1]->SetParams("БГУИР", 2, "9:00");

    for (int i = 0; i < 2; i++) {
        cout << trains[i]->GetIndex() << endl;
        cout << trains[i]->GetFinishStation() << endl;
        cout << trains[i]->GetStartTime() << endl;
    }

    cout << "Введите время отправления:" << endl;
    string time;
    cin >> time;
    for (int i = 0; i < 2; i++) trains[i]->PrintIndexByTime(time);
}
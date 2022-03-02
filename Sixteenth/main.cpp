#include <iostream>

using namespace std;

class Train {
private:
    string FinishStation;
    int Index;
    string StartTime;

public:
    Train(){
        this->FinishStation = "Станция по умолчанию";
        this->Index = 0;
        this->StartTime = "7:45";
        cout << "Отработал конструктор по умолчанию" << endl;
    }
    Train(int index, string startTime){
        this->Index = index;
        this->StartTime = startTime;
        cout << "Отработал конструктор с параметрами" << endl;
    }
    Train(const Train &train){
        this->FinishStation = train.FinishStation;
        this->StartTime = train.StartTime;
        cout << "Отработал конструктор копирования" << endl;
    }
    ~Train(){
        this->FinishStation = "";
        this->Index = 0;
        this->StartTime = "";
        cout << "Отработал деконструктор" << endl;
    }
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
        if (this->StartTime == time) cout << this->Index << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "en_US.UTF8");

    cout << "Вариант 1" << endl;

    Train* trains[3];
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

    trains[2] = new Train(10, "15:00");

    const Train train1 = *new Train(20, "11:00");
    Train train2 = *new Train(train1);

    for(int i = 0; i < 3; i++) delete trains[i];
}
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
    void SetTrainParams(string finishStation, int index, string startTime) {
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


class Bilet : public Train {
public:
    int CarriageCount;
    int Price;
    Bilet(){
        this->CarriageCount = 3;
        this->Price = 100;
        cout << "Отработал конструктор по умолчанию" << endl;
    }
    Bilet(int carriageCount, int price){
        this->CarriageCount = carriageCount;
        this->Price = price;
        cout << "Отработал конструктор с параметрами" << endl;
    }
    Bilet(const Bilet &bilet){
        this->CarriageCount = bilet.CarriageCount;
        this->Price = bilet.Price;
        cout << "Отработал конструктор копирования" << endl;
    }
    ~Bilet(){
        this->CarriageCount = 0;
        this->Price = 0;
        cout << "Отработал деконструктор" << endl;
    }
    void SetBiletParams() {
        cout << "Введите количество вагонов:" << endl;
        cin >> this->CarriageCount;
        cout << "Введите стоимость билета" << endl;
        cin >> this->Price;
    }

    void PrintParams() {
        cout << "Количество вагонов: " << this->CarriageCount << endl;
        cout << "Стоимость билета: " << this->Price << endl;
    }
};

class Client {
public:
    string FIO;
    int TripCount;
    void PrintParams(){
        cout << "Имя клиента: " << this->FIO << ". Количество поездок: " << this->TripCount << endl;
    }
    void SetParams(string fio, int tripCount) {
        this->FIO = fio;
        this->TripCount = tripCount;
    }
};

class Skidka : public Client, public Bilet
{
public:
    void ValidateTrips() {
        if (this->TripCount > 10) {
            cout << "Скидка 5%, Цена билета: " << this->Price - (this->Price / 100 * 5) << endl;
        }
        else cout << "Полная цена билета: " << this->Price << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "en_US.UTF8");

    cout << "Вариант 1" << endl;

    Skidka* skidkas[2];
    for (int i = 0; i < 2; i++) {
        skidkas[i] = new Skidka;
    }
    skidkas[0]->SetBiletParams();
    skidkas[0]->SetTrainParams("МГКЭ", 0, "15:00");
    skidkas[0]->SetParams("Ratkevich Yuri Vladimirovich", 5);

    skidkas[1]->SetBiletParams();
    skidkas[1]->SetTrainParams("Асаналиева", 1, "9:00");
    skidkas[1]->SetParams("Pitkevich Andrey Sergeevich", 15);

    for(int i = 0; i < 2; i++) {
        skidkas[i]->Client::PrintParams();
        skidkas[i]->ValidateTrips();
        delete skidkas[i];
    }
    system("pause");
}

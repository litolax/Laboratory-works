#include <iostream>
#include "fstream"
#include "string"

using namespace std;

void SaveText(string path, string input)
{
    ofstream fout(path);
    fout << input;
    fout.close();
}

int main() {
    ifstream fin("input.txt");
    char temp[500];
    if (!fin.is_open()) {
        cout << "Невозможно открыть файл";
        return 0;
    }
    fin.getline(temp, 500);
    //Работают только английские буквы
    for (int i = 0; i < strlen(temp); i++) //шифровка
    {
        if (temp[i] >= 'a' && temp[i] <= 'y') temp[i] = temp[i] + 1;
        else if (temp[i] == ' ') continue;
        else temp[i] = 'a';
    }
    for (int i = 0; i < strlen(temp); i++) //дешифровка
    {
        if (temp[i] >= 'b' && temp[i] <= 'z') temp[i] = temp[i] - 1;
        else if (temp[i] == ' ') continue;
        else temp[i] = 'z';
    }
    SaveText("input.txt", temp);
    system("pause");
    return 0;
}

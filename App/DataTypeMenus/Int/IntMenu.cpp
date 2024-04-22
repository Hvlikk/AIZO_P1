//
// Created by Miłosz on 14.04.2024.
//

#include <fstream>
#include "string"
#include "IntMenu.h"
#include "Generator.h"
#include "IntSortMenu.h"
void IntMenu::showMenu(){
    Generator generator;
    IntSortMenu intSortMenu;
    while(true){
        int x;
        cout << "Wybierz typ danych:\n";
        cout << "1. Generowanie\n";
        cout << "2. Wczytywanie\n";
        cout << "3. Wybor sortowania\n";
        cout << "4. Pokaz tablice(skopiowana)\n";
        cout << "5. Pokaz tablice(oryginal)\n";
        cout << "6. Skopiuj oryginal na kopie\n";
        cout << "7. Powrot do wyboru danych\n";
        cout << "8. Zapisz dane do pliku\n";
        cin >> x;
        switch (x) {
            case 1:
                generator.showMenu(*this);
                copyData();
                break;
            case 2:
                readData();
                copyData();
                break;
            case 3:
                intSortMenu.showMenu(*this, getDataSize(), timeData);
                break;
            case 4:
                for (int i = 0; i < dataCopy.size();i++)
                    cout << dataCopy[i] << endl;
                break;
            case 5:
                for (int i = 0; i < data.size();i++)
                    cout << data[i] << endl;
                break;
            case 6:
                copyData();
                break;
            case 7:
                return;
        }
    }
}

vector<int>& IntMenu::getData(){
    return data;
}

vector<int>& IntMenu::getDataCopy(){
    return dataCopy;
}

int IntMenu::getDataSize(){
    return data.size();
}

void IntMenu::copyData(){
    dataCopy = data;
}

vector<std::chrono::milliseconds>& IntMenu::getTimeData(){
    return timeData;
}

void IntMenu::saveData(string fileName, vector<chrono::milliseconds>& timeData){
    ofstream file(fileName);
    if (file.is_open()){
        for(const auto& duration : timeData){
            file << duration.count() << "\n";
        }
        file.close();
        cout << "Zapisano dane do pliku.\n";
    }
    timeData.clear();
}

void IntMenu::readData(){
    string fileName;
    cout << "Podaj nazwe pliku" << endl;
    cin >> fileName;
    ifstream file(fileName);
    if (file.is_open()){
        data.clear();
        int value;
        while (file >> value) {
            data.push_back(value);
        }
        file.close();
        cout << "Wczytano dane z pliku.\n";
    } else {
        cout << "Nie udalo sie otworzyc pliku.\n";
    }
}
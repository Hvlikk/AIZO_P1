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
                generator.showMenu(*this, 5, 30);
                copyData();
                break;
            case 2:
                intSortMenu.showMenu(*this, getDataSize(), 4, timeData);
                break;
            case 3:
                for (int i = 0 ; i < 1; i++){
                    cout << i << endl;
                    generator.showMenu(*this, 1, 10);
                    copyData();
                    intSortMenu.showMenu(*this, getDataSize(), 4, timeData);
                }
                saveData("10k_InsertBinary.txt", timeData);
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
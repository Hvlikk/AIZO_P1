//
// Created by Miłosz on 14.04.2024.
//

#include "FloatMenu.h"
//
// Created by Miłosz on 14.04.2024.
//
#include "FloatGenerator.h"
#include "FloatSortMenu.h"
#include <fstream>
#include "string"
#include "iostream"
using namespace std;

void FloatMenu::showMenu(){
    FloatGenerator generator;
    FloatSortMenu floatSortMenu;
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
                generator.showMenu(*this, 1, 15);
                copyData();
                break;
            case 2:
                //intSortMenu.showMenu(*this, getDataSize(), 4, floatTimeData);
                break;
            case 3:
                for (int i = 0 ; i < 1; i++){
                    cout << i << endl;
                    generator.showMenu(*this, 1, 50);
                    copyData();
                    cout << getDataSize() << endl;
                    floatSortMenu.showMenu(*this, getDataSize(), 3, floatTimeData);
                }
                saveFloatData("10k_InsertBinaryF.txt", floatTimeData);
                break;
            case 4:
                for (int i = 0; i < floatDataCopy.size();i++)
                    cout << floatDataCopy[i] << endl;
                break;
            case 5:
                for (int i = 0; i < floatData.size();i++)
                    cout << floatData[i] << endl;
                break;
            case 6:
                copyData();
                break;
            case 7:
                return;
        }
    }
}

vector<float>& FloatMenu::getFloatData(){
    return floatData;
}

vector<float>& FloatMenu::getDataCopy() {
    return floatDataCopy;
}

int FloatMenu::getDataSize(){
    return floatData.size();
}

void FloatMenu::copyData() {
    floatDataCopy = floatData;
}

vector<std::chrono::milliseconds>& FloatMenu::getFloatTimeData(){
    return floatTimeData;
}

void FloatMenu::saveFloatData(string fileName, vector<chrono::milliseconds>& floatTimeData){
    ofstream file(fileName);
    if (file.is_open()){
        for(const auto& duration : floatTimeData){
            file << duration.count() << "\n";
        }
        file.close();
        cout << "Zapisano dane do pliku.\n";
    }
    floatTimeData.clear();
}
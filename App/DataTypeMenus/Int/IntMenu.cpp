//
// Created by Miłosz on 14.04.2024.
//

#include "IntMenu.h"
#include "Generator.h"

void IntMenu::showMenu(){
    Generator generator;
    generator.showMenu(*this);
    while(true){
        int x;
        cout << "Wybierz typ danych:\n";
        cout << "1. Generowanie\n";
        cout << "2. Wczytywanie\n";
        cout << "3. Wybor sortowania\n";
        cout << "4. Pokaz tablice\n";
        cout << "5. Powrot do wyboru danych\n";
        cin >> x;
        switch (x) {
            case 1:
                continue;
            case 2:

            case 3:
            case 4:
                for (int i = 0; i < data.size();i++)
                    cout << data[i] << endl;
            case 5:
                return;
        }
    }
}

vector<int>& IntMenu::getData(){
    return data;
}
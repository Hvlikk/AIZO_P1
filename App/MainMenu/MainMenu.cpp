//
// Created by Miłosz on 14.04.2024.
//

#include "MainMenu.h"
#include "iostream"
using namespace std;
#include "../DataTypeMenus/Int/IntMenu.h"
#include "../DataTypeMenus/Float/FloatMenu.h"
void MainMenu::showMenu(){
    IntMenu intMenu;
    FloatMenu floatMenu;
    while(true){
        int x;
        cout << "Wybierz typ danych:\n";
        cout << "1. Int\n";
        cout << "2. Float\n";
        cout << "5. Wyjscie z programu\n";
        cin >> x;
        switch (x) {
            case 1:
                intMenu.showMenu();
                break;
            case 2:
                floatMenu.showMenu();
                break;
            case 3:
                exit(0);
        }

    }

}
//
// Created by Miłosz on 13.04.2024.
//

#include "insertSortMenu.h"
#include "InsertSort.h"
#include "iostream"
using namespace std;

    void insertSortMenu::showMenu() {
        InsertSort insertSort;

        while(true){
            int x = 0;
            cout << "******InsertSort - Menu****\n";
            cout << "1. Generowanie tablicy calkowicie losowej\n";
            cout << "2. Generowanie - 33% tablicy posortowane\n";
            cout << "3. Generowawnie - 66% tablicy posortowane\n";
            cout << "4. Generowanie - Cala tablica posortowana\n";
            cout << "5. Sortuj\n";
            cout << "6. Pokaz tablice\n";
            cout << "7. Powrot do glownego programu";
            cout << "\n"; //buffor clear
            cin >> x;

            switch (x){
                case 1:
                    int n;
                    cin >> n;
                    insertSort.generateTable(n);
                    continue;
                case 2:
                    continue;
                case 3:
                    continue;
                case 4:
                    continue;
                case 5:
                    insertSort.sortTable();
                    continue;
                case 6:
                    insertSort.showTable();
                    continue;
                case 7:
                    return;
            }
        }
    }
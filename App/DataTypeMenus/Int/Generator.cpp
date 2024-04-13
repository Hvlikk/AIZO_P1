//
// Created by Miłosz on 14.04.2024.
//

#include "Generator.h"
using namespace std;
#include "random"
#include "vector"
#include "iostream"
#include "IntMenu.h"

void Generator::showMenu(IntMenu &intMenu) {
    while(true){
        int x;
        cout << "1. Losowa tablica:\n";
        cout << "2. Posortowane 33%\n";
        cout << "2. Posortowane 66%\n";
        cout << "3. Uporzadkowana w dol\n";
        cout << "4. Uporzadkowana w gore\n";
        cin >> x;
        switch (x) {
            case 1:
                int n;
                cout << "Podaj liczbe elementow: \n";
                cin >> n;
                generateData(intMenu.getData(), n);
            case 2:

            case 3:

            case 4:
                return;
        }
    }
}

void Generator::generateData(vector<int> &data, int n) {
    data.clear();
    int a;
    for(int i = 0; i < n; i++){
        a = rand();
        data.push_back(a);
    }
}
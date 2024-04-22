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
        int n;
        cout << "1. Losowa tablica\n";
        cout << "2. Posortowane 33%\n";
        cout << "3. Posortowane 66%\n";
        cout << "4. Uporzadkowana w dol\n";
        cout << "5. Uporzadkowana w gore\n";
        cin >> x;
        switch (x) {
            case 1:
                cout << "Podaj liczbe elementow: \n";
                cin >> n;
                generateData(intMenu.getData(), n);
                break;
            case 2:
                cout << "Podaj liczbe elementow: \n";
                cin >> n;
                generateSorted33Percent(intMenu.getData(), n);
                break;
            case 3:
                cout << "Podaj liczbe elementow: \n";
                cin >> n;
                generateSorted66Percent(intMenu.getData(), n);
                break;
            case 4:
                cout << "Podaj liczbe elementow: \n";
                cin >> n;
                generateSortedAscending(intMenu.getData(), n);
                break;
            case 5:
                cout << "Podaj liczbe elementow: \n";
                cin >> n;
                generateSortedDescending(intMenu.getData(), n);
                break;
            case 6:
                return;
        }
    }
}

void Generator::generateData(vector<int> &data, int n) {
    srand(time(nullptr));
    data.clear();
    int a;
    for(int i = 0; i < n; i++){
        a = rand();
        data.push_back(a);
    }
}

void Generator::generateSorted33Percent(vector<int> &data, int n){
    srand(time(nullptr));
    data.clear();
    int a, temp;
    temp = n/3;
    a = rand();
    for (int i = 0; i < temp; i++){
        a = a + 1;
        data.push_back(a);
    }
    for(int i = temp; i < n; i++){
        a = rand();
        data.push_back(a);
    }
}

void Generator::generateSorted66Percent(vector<int> &data, int n){
    srand(time(nullptr));
    data.clear();
    int a, temp;
    temp = 2 * (n/3);
    a = rand();
    for (int i = 0; i < temp; i++){
        a = a + 1;
        data.push_back(a);
    }
    for(int i = temp; i < n; i++){
        a = rand();
        data.push_back(a);
    }
}

void Generator::generateSortedAscending(vector<int> &data, int n){
    srand(time(nullptr));
    data.clear();
    int a;
    a = rand();
    for (int i = 0; i < n; i++){
        a = a + 1;
        data.push_back(a);
    }
}

void Generator::generateSortedDescending(vector<int> &data, int n){
    srand(time(nullptr));
    data.clear();
    int a;
    a = rand();
    for (int i = 0; i < n; i++){
        a = a - 1;
        data.push_back(a);
    }
}
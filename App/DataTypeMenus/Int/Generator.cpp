//
// Created by Miłosz on 14.04.2024.
//

#include "Generator.h"
using namespace std;
#include "random"
#include "vector"
#include "iostream"
#include "IntMenu.h"

void Generator::showMenu(IntMenu &intMenu, int Option, int Size) {
    //while(true){
        int x;
        cout << "1. Losowa tablica\n";
        cout << "2. Posortowane 33%\n";
        cout << "3. Posortowane 66%\n";
        cout << "4. Uporzadkowana w dol\n";
        cout << "5. Uporzadkowana w gore\n";
        //cin >> x;
        switch (Option) {
            case 1:
                int n;
                //cout << "Podaj liczbe elementow: \n";
                //cin >> n;
                generateData(intMenu.getData(), Size);
            case 2:
                generateSorted33Percent(intMenu.getData(), Size);
                break;
            case 3:
                generateSorted66Percent(intMenu.getData(), Size);
                break;
            case 4:
                generateSortedAscending(intMenu.getData(), Size);
                break;
            case 5:
                generateSortedDescending(intMenu.getData(), Size);
                break;
            case 6:
                return;
        }
    }
//}

void Generator::generateData(vector<int> &data, int n) {
    data.clear();
    int a;
    for(int i = 0; i < n; i++){
        a = rand();
        data.push_back(a);
    }
}

void Generator::generateSorted33Percent(vector<int> &data, int n){
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
    data.clear();
    int a;
    a = rand();
    for (int i = 0; i < n; i++){
        a = a + 1;
        data.push_back(a);
    }
}

void Generator::generateSortedDescending(vector<int> &data, int n){
    data.clear();
    int a;
    a = rand();
    for (int i = 0; i < n; i++){
        a = a - 1;
        data.push_back(a);
    }
}
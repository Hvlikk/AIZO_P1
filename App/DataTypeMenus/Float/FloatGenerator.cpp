//
// Created by Miłosz on 14.04.2024.
//

#include "FloatGenerator.h"
using namespace std;
#include "random"
#include "vector"
#include "iostream"
#include "FloatMenu.h"

void FloatGenerator::showMenu(FloatMenu &floatMenu) {
    //while(true){
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
            generateData(floatMenu.getFloatData(), n);
            break;
        case 2:
            cout << "Podaj liczbe elementow: \n";
            cin >> n;
            generateSorted33Percent(floatMenu.getFloatData(), n);
            break;
        case 3:
            cout << "Podaj liczbe elementow: \n";
            cin >> n;
            generateSorted66Percent(floatMenu.getFloatData(), n);
            break;
        case 4:
            cout << "Podaj liczbe elementow: \n";
            cin >> n;
            generateSortedAscending(floatMenu.getFloatData(), n);
            break;
        case 5:
            cout << "Podaj liczbe elementow: \n";
            cin >> n;
            generateSortedDescending(floatMenu.getFloatData(), n);
            break;
        case 6:
            return;
    }
}
//}

void FloatGenerator::generateData(vector<float> &data, int n) {
    data.clear();
    float a;
    for(int i = 0; i < n; i++){
        a = rand()/100.0f;
        data.push_back(a);
    }
}

void FloatGenerator::generateSorted33Percent(vector<float> &data, int n){
    data.clear();
    float a;
    int temp;
    temp = n/3;
    a = rand()/100.f;
    for (int i = 0; i < temp; i++){
        a = a + 1;
        data.push_back(a);
    }
    for(int i = temp; i < n; i++){
        a = rand()/100.0f;
        data.push_back(a);
    }
}

void FloatGenerator::generateSorted66Percent(vector<float> &data, int n){
    data.clear();
    float a;
    int temp;
    temp = 2 * (n/3);
    a = rand()/100.0f;
    for (int i = 0; i < temp; i++){
        a = a + 1;
        data.push_back(a);
    }
    for(int i = temp; i < n; i++){
        a = rand()/100.0f;
        data.push_back(a);
    }
}

void FloatGenerator::generateSortedAscending(vector<float> &data, int n){
    data.clear();
    float a;
    a = rand()/100.0f;
    for (int i = 0; i < n; i++){
        a = a + 1;
        data.push_back(a);
    }
}

void FloatGenerator::generateSortedDescending(vector<float> &data, int n){
    data.clear();
    float a;
    a = rand()/100.0f;
    for (int i = 0; i < n; i++){
        a = a - 1;
        data.push_back(a);
    }
}
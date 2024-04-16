//
// Created by Miłosz on 14.04.2024.
//

#include "FloatGenerator.h"
using namespace std;
#include "random"
#include "vector"
#include "iostream"
#include "FloatMenu.h"

void FloatGenerator::showMenu(FloatMenu &floatMenu, int Option, int Size) {
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
            generateData(floatMenu.getFloatData(), Size);
            break;
        case 2:
            generateSorted33Percent(floatMenu.getFloatData(), Size);
            break;
        case 3:
            generateSorted66Percent(floatMenu.getFloatData(), Size);
            break;
        case 4:
            generateSortedAscending(floatMenu.getFloatData(), Size);
            break;
        case 5:
            generateSortedDescending(floatMenu.getFloatData(), Size);
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
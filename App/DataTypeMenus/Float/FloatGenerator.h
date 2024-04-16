//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_GENERATOR_H
#define AIZO2_GENERATOR_H
#include "vector"
#include "iostream"
#include "random"
#include "FloatMenu.h"
using namespace std;

class FloatGenerator {
public:
    void generateData(vector<float>& data, int n);
    void generateSorted33Percent(vector<float>& data, int n);
    void generateSorted66Percent(vector<float>& data, int n);
    void generateSortedAscending(vector<float>& data, int n);
    void generateSortedDescending(vector<float>& data, int n);
    void showMenu(FloatMenu &floatMenu, int Option, int Size);

};


#endif //AIZO2_GENERATOR_H

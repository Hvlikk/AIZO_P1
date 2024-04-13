//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_GENERATOR_H
#define AIZO2_GENERATOR_H
#include "vector"
#include "iostream"
#include "random"
#include "IntMenu.h"
using namespace std;

class Generator {
public:
    void generateData(vector<int>& data, int n);
    void showMenu(IntMenu &intMenu);

};


#endif //AIZO2_GENERATOR_H

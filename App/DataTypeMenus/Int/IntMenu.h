//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_INTMENU_H
#define AIZO2_INTMENU_H
#include "iostream"
#include "vector"
using namespace std;

class IntMenu {
public:
    void showMenu();
    vector<int>& getData();
    vector<int>& getDataCopy();
    int getDataSize();
    void copyData();
private:
    vector<int> data;
    vector<int> dataCopy = data;
};


#endif //AIZO2_INTMENU_H

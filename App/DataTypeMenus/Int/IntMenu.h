//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_INTMENU_H
#define AIZO2_INTMENU_H
#include "iostream"
#include "chrono"
#include "vector"
using namespace std;

class IntMenu {
public:
    void showMenu();
    vector<int>& getData();
    vector<int>& getDataCopy();
    vector<std::chrono::milliseconds>& getTimeData();
    int getDataSize();
    void copyData();
    void saveData(string name, vector<chrono::milliseconds>& timeData);
    void readData();
private:
    vector<int> data;
    vector<int> dataCopy = data;
    vector<std::chrono::milliseconds> timeData;

};


#endif //AIZO2_INTMENU_H

//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_FLOATMENU_H
#define AIZO2_FLOATMENU_H
#include "vector"
#include "chrono"
#include "iostream"
#include "string"
using namespace std;
class FloatMenu {
public:
    void showMenu();
    vector<float>& getFloatData();
    vector<float>& getDataCopy();
    vector<std::chrono::milliseconds>& getFloatTimeData();
    int getDataSize();
    void copyData();
    void readFloatData();
    void saveFloatData(string name, vector<chrono::milliseconds>& floatTimeData);
private:
    vector<float> floatData;
    vector<float> floatDataCopy;
    vector<std::chrono::milliseconds> floatTimeData;
};


#endif //AIZO2_FLOATMENU_H

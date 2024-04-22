//
// Created by Miłosz on 16.04.2024.
//

#ifndef AIZO2_FLOATSORTMENU_H
#define AIZO2_FLOATSORTMENU_H
#include "chrono"
#include "vector"
using namespace std;
#include "FloatMenu.h"

class FloatSortMenu {
public:
    void showMenu(FloatMenu &floatMenu, int dataSize, vector<std::chrono::milliseconds>& timeData);
    void callHeap(vector<float>& array, vector<std::chrono::milliseconds>& timeData);
    void callQuick(vector<float>& array, int low, int high, vector<std::chrono::milliseconds>& timeData);
};


#endif //AIZO2_FLOATSORTMENU_H

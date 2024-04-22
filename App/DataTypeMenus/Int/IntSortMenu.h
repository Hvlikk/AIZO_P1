//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_INTSORTMENU_H
#define AIZO2_INTSORTMENU_H
#include "IntMenu.h"
#include "vector"
using namespace std;
class IntSortMenu {
public:
    void showMenu(IntMenu &intMenu, int dataSize, vector<std::chrono::milliseconds>& timeData);
    void callHeap(vector<int>& array, vector<std::chrono::milliseconds>& timeData);
    void callQuick(vector<int>& array, int low, int high, vector<std::chrono::milliseconds>& timeData);
};


#endif //AIZO2_INTSORTMENU_H

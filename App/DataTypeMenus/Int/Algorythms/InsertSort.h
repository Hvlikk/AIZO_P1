//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_INSERTSORT_H
#define AIZO2_INSERTSORT_H
#include "vector"
#include "iostream"
#include "../IntMenu.h"
#include "../IntSortMenu.h"
#include "chrono"
using namespace std;

class InsertSort {
public:
    void sortTable(vector<int>& data, int dataSize, vector<std::chrono::milliseconds>& timeData);
};


#endif //AIZO2_INSERTSORT_H

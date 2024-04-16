//
// Created by Miłosz on 16.04.2024.
//

#ifndef AIZO2_FLOATINSERTSORT_H
#define AIZO2_FLOATINSERTSORT_H
#include "../FloatMenu.h"
#include "../FloatSortMenu.h"
#include "chrono"
#include "vector"
using namespace std;

class FloatInsertSort {
public:
    void sortTable(vector<float>& data, int dataSize, vector<std::chrono::milliseconds>& timeData);
};


#endif //AIZO2_FLOATINSERTSORT_H

//
// Created by Miłosz on 16.04.2024.
//

#ifndef AIZO2_FLOATQUICKSORT_H
#define AIZO2_FLOATQUICKSORT_H
#include "vector"
using namespace std;

class FloatQuickSort {
public:
    void quickSort(vector<float>& array, int low, int high);
    int partition(vector<float>& array, int low, int high);
};


#endif //AIZO2_FLOATQUICKSORT_H

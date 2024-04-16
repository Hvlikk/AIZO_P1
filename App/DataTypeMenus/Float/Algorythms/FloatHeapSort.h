//
// Created by Miłosz on 16.04.2024.
//

#ifndef AIZO2_FLOATHEAPSORT_H
#define AIZO2_FLOATHEAPSORT_H
#include "vector"
using namespace std;

class FloatHeapSort {
public:
    void heapify(vector<float>& arr, int n, int i);
    void heapSort(vector<float>& arr);
};


#endif //AIZO2_FLOATHEAPSORT_H

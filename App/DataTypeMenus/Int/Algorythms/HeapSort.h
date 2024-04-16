//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_HEAPSORT_H
#define AIZO2_HEAPSORT_H
#include "vector"
#include "chrono"
using namespace std;

class HeapSort {
public:
    void heapify(vector<int>& arr, int n, int i);
    void heapSort(vector<int>& arr);
};


#endif //AIZO2_HEAPSORT_H

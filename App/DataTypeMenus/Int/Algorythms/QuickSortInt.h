//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_QUICKSORTINT_H
#define AIZO2_QUICKSORTINT_H
#include "vector"
using namespace std;
#include "chrono"
class QuickSortInt {
public:
    void quickSort(vector<int>& array, int low, int high);
    int partition(vector<int>& array, int low, int high);
};


#endif //AIZO2_QUICKSORTINT_H

//
// Created by Miłosz on 14.04.2024.
//

#ifndef AIZO2_INTBINARYINSSORT_H
#define AIZO2_INTBINARYINSSORT_H
#include "vector"
using namespace std;
#include "chrono"
class IntBinaryInsSort {
public:
// Deklaracja funkcji wyszukiwania binarnego
    int binarySearch(vector<int>& arr, int item, int low, int high);

// Deklaracja funkcji sortowania przez wstawianie z wyszukiwaniem binarnym
    void BinaryInsertionSort(vector<int>& arr, vector<std::chrono::milliseconds>& timeData);
};


#endif //AIZO2_INTBINARYINSSORT_H

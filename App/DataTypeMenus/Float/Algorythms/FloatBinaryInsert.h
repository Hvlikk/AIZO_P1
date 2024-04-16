//
// Created by Miłosz on 16.04.2024.
//

#ifndef AIZO2_FLOATBINARYINSERT_H
#define AIZO2_FLOATBINARYINSERT_H
#include "vector"
#include "chrono"
using namespace std;

class FloatBinaryInsert {
public:
    // Deklaracja funkcji wyszukiwania binarnego
    int binarySearch(vector<float >& arr, float item, int low, int high);

// Deklaracja funkcji sortowania przez wstawianie z wyszukiwaniem binarnym
    void BinaryInsertionSort(vector<float >& arr, vector<std::chrono::milliseconds>& timeData);
};


#endif //AIZO2_FLOATBINARYINSERT_H

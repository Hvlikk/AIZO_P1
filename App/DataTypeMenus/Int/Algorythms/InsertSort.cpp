//
// Created by Miłosz on 14.04.2024.
//

#include "InsertSort.h"
#include "vector"
#include "chrono"
#include "../IntMenu.h"
using namespace std;

void InsertSort::sortTable(vector<int>& tablica, int dataSize, vector<std::chrono::milliseconds>& timeData) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 1; i < dataSize;  i++) {
        int key = tablica[i];
        int j = i - 1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found.
        // For descending order, change key<array[j] to key>array[j].
        while (key < tablica[j] && j >= 0) {
            tablica[j + 1] = tablica[j];
            --j;
        }
        tablica[j + 1] = key;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    timeData.push_back(duration);
}
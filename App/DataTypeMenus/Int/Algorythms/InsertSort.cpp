//
// Created by Miłosz on 14.04.2024.
//

#include "InsertSort.h"
#include "vector"
#include "../IntMenu.h"
using namespace std;

void InsertSort::sortTable(vector<int>& tablica, int dataSize) {
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
}
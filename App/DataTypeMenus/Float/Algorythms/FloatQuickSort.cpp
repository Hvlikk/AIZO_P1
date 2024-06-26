//
// Created by Miłosz on 16.04.2024.
//

#include "FloatQuickSort.h"


int FloatQuickSort::partition(vector<float>& array, int low, int high) {
    float pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

// Funkcja sortowania szybkiego
void FloatQuickSort::quickSort(vector<float>& array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}
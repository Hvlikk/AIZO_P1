//
// Created by Miłosz on 14.04.2024.
//

#include "IntBinaryInsSort.h"
using namespace std;
#include "vector"
#include "chrono"

int IntBinaryInsSort::binarySearch(vector<int>& arr, int item, int low, int high) {
    if (high <= low)
        return (item > arr[low])? (low + 1): low;
    int mid = (low + high)/2;
    if(item == arr[mid])
        return mid+1;
    if(item > arr[mid])
        return binarySearch(arr, item, mid+1, high);
    return binarySearch(arr, item, low, mid-1);
}


void IntBinaryInsSort::BinaryInsertionSort(vector<int>& arr, vector<std::chrono::milliseconds>& timeData) {
    int n = arr.size();
    int i, loc, j, selected;
    auto start = std::chrono::high_resolution_clock::now();
    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = arr[i];
        loc = binarySearch(arr, selected, 0, j);
        while (j >= loc) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = selected;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    timeData.push_back(duration);
}
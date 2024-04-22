//
// Created by Miłosz on 14.04.2024.
//

#include "FloatMenu.h"
#include "vector"
#include "iostream"
#include "Algorythms/FloatBinaryInsert.h"
#include "Algorythms/FloatHeapSort.h"
#include "Algorythms/FloatInsertSort.h"
#include "Algorythms/FloatQuickSort.h"
#include "FloatSortMenu.h"

using namespace std;

void FloatSortMenu::showMenu(FloatMenu &floatMenu, int dataSize, vector<std::chrono::milliseconds>& timeData){
    int x;
    cout << "Wybierz algorytm:\n";
    cout << "1. InsertSort\n";
    cout << "2. InsertSort Binarnie\n";
    cout << "3. HeapSort\n";
    cout << "4. QuickSort\n";
    cin >> x;
    switch (x) {
        case 1:
            FloatInsertSort insertSort;
            insertSort.sortTable(floatMenu.getDataCopy(), dataSize, timeData);
            break;
        case 2:
            FloatBinaryInsert floatBinaryInsSort;
            floatBinaryInsSort.BinaryInsertionSort(floatMenu.getDataCopy(), timeData);
            break;
        case 3:
            callHeap(floatMenu.getDataCopy(), timeData);
            break;
        case 4:
            callQuick(floatMenu.getDataCopy(), 0, floatMenu.getDataSize() - 1, timeData);
            break;
        case 5:
            return;
    }
}


void FloatSortMenu::callHeap(vector<float>& array, vector<std::chrono::milliseconds>& timeData){
    FloatHeapSort heapSort;
    auto start = std::chrono::high_resolution_clock::now();
    heapSort.heapSort(array);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    timeData.push_back(duration);
}

void FloatSortMenu::callQuick(vector<float>& array, int low, int high, vector<std::chrono::milliseconds>& timeData){
    auto start = std::chrono::high_resolution_clock::now();
    FloatQuickSort quickSortInt;
    quickSortInt.quickSort(array, 0, high);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    timeData.push_back(duration);
}
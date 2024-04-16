//
// Created by Miłosz on 14.04.2024.
//

#include "Algorythms/InsertSort.h"
#include "IntSortMenu.h"
#include "Algorythms/HeapSort.h"
#include "Algorythms/IntBinaryInsSort.h"
#include "chrono"
#include "Algorythms/QuickSortInt.h"
using namespace std;

void IntSortMenu::showMenu(IntMenu &intMenu, int dataSize, int SortingAlgorythm, vector<std::chrono::milliseconds>& timeData){
        //int x;
        cout << "Wybierz algorytm:\n";
        cout << "1. InsertSort\n";
        cout << "2. InsertSort Binarnie\n";
        cout << "3. HeapSort\n";
        cout << "4. QuickSort\n";
        //cin >> x;
        switch (SortingAlgorythm) {
            case 1:
                InsertSort insertSort;
                insertSort.sortTable(intMenu.getDataCopy(), dataSize, timeData);
                break;
            case 2:
                IntBinaryInsSort intBinaryInsSort;
                intBinaryInsSort.BinaryInsertionSort(intMenu.getDataCopy(), timeData);
                break;
            case 3:
                callHeap(intMenu.getDataCopy(), timeData);
                break;
            case 4:
                callQuick(intMenu.getDataCopy(), 0, intMenu.getDataSize() - 1, timeData);
                break;
            case 5:
                return;
        }
    }


    void IntSortMenu::callHeap(vector<int>& array, vector<std::chrono::milliseconds>& timeData){
        HeapSort heapSort;
        auto start = std::chrono::high_resolution_clock::now();
        heapSort.heapSort(array);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
        timeData.push_back(duration);
    }

    void IntSortMenu::callQuick(vector<int>& array, int low, int high, vector<std::chrono::milliseconds>& timeData){
        auto start = std::chrono::high_resolution_clock::now();
        QuickSortInt quickSortInt;
        quickSortInt.quickSort(array, 0, high);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
        timeData.push_back(duration);
    }
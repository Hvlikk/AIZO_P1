//
// Created by Miłosz on 14.04.2024.
//

#include "Algorythms/InsertSort.h"
#include "IntSortMenu.h"
#include "Algorythms/HeapSort.h"
#include "Algorythms/IntBinaryInsSort.h"
#include "Algorythms/QuickSortInt.h"
using namespace std;

void IntSortMenu::showMenu(IntMenu &intMenu, int dataSize){
        int x;
        cout << "Wybierz algorytm:\n";
        cout << "1. InsertSort\n";
        cout << "2. InsertSort Binarnie\n";
        cout << "3. HeapSort\n";
        cout << "4. QuickSort\n";
        cin >> x;
        switch (x) {
            case 1:
                InsertSort insertSort;
                insertSort.sortTable(intMenu.getDataCopy(), dataSize);
                break;
            case 2:
                IntBinaryInsSort intBinaryInsSort;
                intBinaryInsSort.BinaryInsertionSort(intMenu.getDataCopy());
                break;
            case 3:
                HeapSort heapSort;
                heapSort.heapSort(intMenu.getDataCopy());
                break;
            case 4:
                QuickSortInt quickSortInt;
                quickSortInt.quickSort(intMenu.getDataCopy(), 0, intMenu.getDataSize());
            case 5:
                return;
        }
    }

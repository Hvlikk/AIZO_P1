//
// Created by Miłosz on 14.04.2024.
//

#include "Algorythms/InsertSort.h"
#include "IntSortMenu.h"
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
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                return;
        }
    }

//
// Created by Miłosz on 13.04.2024.
//

#include "InsertSort.h"
#include "iostream"
#include "random"
#include "ctime"
using namespace std;

    InsertSort::InsertSort(){
    };


    vector<int> InsertSort::sortTable() {
        for (int i = 1; i < tablica.size(); i++) {
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

        return tablica;
    }

    vector<int> InsertSort::generateTable(int n) {
        tablica.clear();
        int a;
        for (int i = 0; i < n; i++){
            a = rand();
           tablica.push_back(a);
        }

        return tablica;
    }

    void InsertSort::showTable(){
        for(int i = 0; i < tablica.size(); i++)
            cout << tablica[i] << " \n";

    }


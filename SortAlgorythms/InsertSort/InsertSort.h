//
// Created by Miłosz on 13.04.2024.
//

#ifndef AIZO2_INSERTSORT_H
#define AIZO2_INSERTSORT_H
#include <vector>
using namespace std;

class InsertSort {
public:
    InsertSort();
    vector<int> generateTable(int n);
    vector<int> sortTable();
    void showTable();

private:
    vector<int> tablica = {0};
};


#endif //AIZO2_INSERTSORT_H

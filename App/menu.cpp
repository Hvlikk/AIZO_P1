//
// Created by Miłosz on 13.04.2024.
//
#include <iostream>
#include "menu.h"
using namespace std;

    void Menu::menu() {

        while(true){
            int x = 0;
            cout << "******Wybierz algorytm sortowania****\n";
            cout << "1. InsertionSort\n";
            cout << "2. HeapSort\n";
            cout << "3. ShellSort\n";
            cout << "4. QuickSort\n";
            cout << "5. Wyjdz z programu\n";
            cin >> x;

            switch (x){
                case 1:

                case 2:

                case 3:

                case 4:

                case 5:
                    exit(0);
            }
        }

    }


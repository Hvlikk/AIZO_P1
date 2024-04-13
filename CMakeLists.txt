cmake_minimum_required(VERSION 3.28)
project(Aizo2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aizo2 App/main.cpp
        App/sorts.h
        App/menu.cpp
        App/sorts.cpp
        App/menu.h
        SortAlgorythms/HeapSort/HeapSort.cpp
        SortAlgorythms/HeapSort/HeapSort.h
        SortAlgorythms/InsertSort/InsertSort.cpp
        SortAlgorythms/InsertSort/InsertSort.h
        SortAlgorythms/QuickSort/QuickSort.cpp
        SortAlgorythms/QuickSort/QuickSort.h
        SortAlgorythms/InsertSort/insertSortMenu.cpp
        SortAlgorythms/InsertSort/insertSortMenu.h)

cmake_minimum_required(VERSION 3.28)
project(Aizo2)

set(CMAKE_CXX_STANDARD 17)

MATH(EXPR stack_size "16 * 1024 * 1024") # 16 Mb
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "C:/Users/Miłosz/CLionProjects/Aizo2")

add_executable(Aizo2
        App/DataTypeMenus/Float/FloatMenu.cpp
        App/DataTypeMenus/Float/FloatMenu.h
        App/DataTypeMenus/Char/CharMenu.cpp
        App/DataTypeMenus/Char/CharMenu.h
        App/DataTypeMenus/Double/DoubleMenu.cpp
        App/DataTypeMenus/Double/DoubleMenu.h
        App/MainMenu/main.cpp
        App/MainMenu/MainMenu.h
        App/MainMenu/MainMenu.cpp
        App/DataTypeMenus/Int/IntMenu.cpp
        App/DataTypeMenus/Int/IntMenu.h
        App/DataTypeMenus/Int/Generator.cpp
        App/DataTypeMenus/Int/Generator.h
        App/DataTypeMenus/Int/IntSortMenu.cpp
        App/DataTypeMenus/Int/IntSortMenu.h
        App/DataTypeMenus/Int/Algorythms/InsertSort.cpp
        App/DataTypeMenus/Int/Algorythms/InsertSort.h
        App/DataTypeMenus/Int/Algorythms/HeapSort.cpp
        App/DataTypeMenus/Int/Algorythms/HeapSort.h
        App/DataTypeMenus/Int/Algorythms/IntBinaryInsSort.cpp
        App/DataTypeMenus/Int/Algorythms/IntBinaryInsSort.h
        App/DataTypeMenus/Int/Algorythms/QuickSortInt.cpp
        App/DataTypeMenus/Int/Algorythms/QuickSortInt.h
        App/DataTypeMenus/Float/FloatGenerator.cpp
        App/DataTypeMenus/Float/FloatGenerator.h
        App/DataTypeMenus/Float/FloatSortMenu.cpp
        App/DataTypeMenus/Float/FloatSortMenu.h
        App/DataTypeMenus/Float/Algorythms/FloatHeapSort.cpp
        App/DataTypeMenus/Float/Algorythms/FloatHeapSort.h
        App/DataTypeMenus/Float/Algorythms/FloatInsertSort.cpp
        App/DataTypeMenus/Float/Algorythms/FloatInsertSort.h
        App/DataTypeMenus/Float/Algorythms/FloatBinaryInsert.cpp
        App/DataTypeMenus/Float/Algorythms/FloatBinaryInsert.h
        App/DataTypeMenus/Float/Algorythms/FloatQuickSort.cpp
        App/DataTypeMenus/Float/Algorythms/FloatQuickSort.h
)

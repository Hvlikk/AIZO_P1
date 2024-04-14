cmake_minimum_required(VERSION 3.28)
project(Aizo2)

set(CMAKE_CXX_STANDARD 17)

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
)

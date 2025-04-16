//==============================================================
// CS 173
// Fall 2024
// main.cpp
// This file is a driver for the List class.
//==============================================================

#include <iostream>
using namespace std;
#include "List.h"

//==============================================================
// main
//==============================================================

int main ( void )
{
    cout << "Running default constructor" << endl;
    List<int> l1;
    cout << "Expected output: [  ]" << endl;
    cout << "Actual output: " << l1 << endl;
    cout << "-------" << endl;

    cout << "Running append" << endl;
    List<int> l2;
    l2.append(1);
    cout << "Expected output: [ 1 ]" << endl;
    cout << "Actual output: " << l2 << endl;
    cout << "-------" << endl;

    cout << "Running append over DEFAULT_ARRAY_SIZE" << endl;
    List<int> l3;
    l3.append(1);
    l3.append(2);
    l3.append(3);
    l3.append(4);
    l3.append(5);
    l3.append(6);
    l3.append(7);
    l3.append(8);
    l3.append(9);
    l3.append(10);
    l3.append(11);
    cout << "Expected output: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ]" << endl;
    cout << "Actual output: " << l3 << endl;
    cout << "-------" << endl;

    cout << "Running isEmpty on empty list" << endl;
    List<int> l4;
    cout << "Expected output: 1" << endl;
    cout << "Actual output: " << l4.isEmpty() << endl;
    cout << "-------" << endl;

    l4.append(1);
    cout << "Running isEmpty on non-empty list" << endl;
    cout << "Expected output: 0" << endl;
    cout << "Actual output: " << l4.isEmpty() << endl;
    cout << "-------" << endl;

    cout << "Running length on empty list" << endl;
    List<int> l5;
    cout << "Expected output: 0" << endl;
    cout << "Actual output: " << l5.length() << endl;
    cout << "-------" << endl;

    cout << "Running length on list of len 1" << endl;
    l5.append(0);
    cout << "Expected output: 1" << endl;
    cout << "Actual output: " << l5.length() << endl;
    cout << "-------" << endl;

    cout << "Running length on list of len 13" << endl;
    List<int> l6;
    l6.append(1);
    l6.append(2);
    l6.append(3);
    l6.append(4);
    l6.append(5);
    l6.append(6);
    l6.append(7);
    l6.append(8);
    l6.append(9);
    l6.append(10);
    l6.append(11);
    l6.append(12);
    l6.append(13);
    cout << "Expected output: 13" << endl;
    cout << "Actual output: " << l6.length() << endl;
    cout << "-------" << endl;

    cout << "[] operator at valid index" << endl;
    List<int> l7;
    l7.append(89);
    cout << "Expected output: 89" << endl;
    cout << "Actual output: " << l7[0] << endl;
    cout << "-------" << endl;

    cout << "[] operator at invalid index should throw error" << endl;
    List<int> l8;
    cout << "Expected output: Thrown error" << endl;
    cout << "Actual output: ";
    try {
        l8[0];
        cout << "Not thrown error" << endl;
    } catch (...) {
        cout << "Thrown error" << endl;
    }
    cout << "-------" << endl;

    cout << "Running insertion operator" << endl;
    List<int> l9;
    l9.append(1);
    l9.append(2);
    l9.insert(99, 1);
    cout << "Expected output: 99" << endl;
    cout << "Actual output: " << l9[1] << endl;
    cout << "-------" << endl;

    cout << "insertion method at invalid index should throw error" << endl;
    List<int> l10;
    cout << "Expected output: Thrown error" << endl;
    cout << "Actual output: ";
    try {
        l10.insert(99, 1);
        cout << "Not thrown error" << endl;
    } catch (...) {
        cout << "Thrown error" << endl;
    }
    cout << "-------" << endl;

    cout << "Running remove operator on length 1 list" << endl;
    List<int> l11;
    l11.append(99);
    l11.remove(0);

    cout << "Expected output: [  ]" << endl;
    cout << "Actual output: " << l11 << endl;
    cout << "-------" << endl;

    cout << "Running remove operator on length 3 list" << endl;
    List<int> l12;
    l12.append(77);
    l12.append(88);
    l12.append(99);

    l12.remove(1);


    cout << "Expected output: [ 77, 99 ]" << endl;
    cout << "Actual output: " << l12 << endl;
    cout << "-------" << endl;

    cout << "Removal method at invalid index should throw error" << endl;
    List<int> l13;
    cout << "Expected output: Thrown error" << endl;
    cout << "Actual output: ";
    try {
        l13.remove(1);
        cout << "Not thrown error" << endl;
    } catch (...) {
        cout << "Thrown error" << endl;
    }
    cout << "-------" << endl;

}

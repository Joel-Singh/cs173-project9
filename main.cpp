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



}

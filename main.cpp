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


    /*List<int> l2(l1);*/
    /*List<int> l3;*/
    /**/
    /*l1.insert(4,1);*/
    /*cout << "l1 = " << l1 << endl;*/
    /*cout << "l1.length() = " << l1.length() << endl;*/

    /*l1[2] = 10;*/
    /*cout << "l1 = " << l1 << endl;*/
    /*cout << "l1.length() = " << l1.length() << endl;*/
    /**/
    /*l1.remove(1);*/
    /*cout << "l1 = " << l1 << endl;*/
    /*cout << "l1.length() = " << l1.length() << endl;*/
    /**/
    /*l3 = l2 + l1;*/
    /*cout << "l3 = l2 + l1 = " << l3 << endl;*/
    /*cout << "l3.length() = " << l3.length() << endl;*/
    /**/
    /*cout << "l2 = " << l2 << endl;*/
    /**/
    /*l2.clear();*/
    /*cout << "l2.clear() = " << l2 << endl;*/
    /*cout << "l2.length() = " << l2.length() << endl;*/
    /*cout << "l2 = " << l2 << endl;*/
    /**/
    /*// Test the "doubling" ability of the list*/
    /*List<char> l5;*/
    /*for ( char c = 'a'; c <= 'g'; c++ )*/
    /*    l5.append(c);*/
    /*List<char> l6 = l5;*/
    /*for ( char c = 'h'; c <= 'z'; c++ )*/
    /*    l5.append(c);*/
    /*List<char> l7 = l5;*/
    /*l5.remove(19);*/
    /**/
    /*cout << "l5 = " << l5 << endl;*/
    /*cout << "l6 = " << l6 << endl;*/
    /*cout << "l7 = " << l7 << endl;*/
    /**/
    /*return 0;*/
}

//==============================================================
// Joel Singh
// April 16th
// List.cpp
// This file contains the class method definitions for
// the List class.
//==============================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

//==============================================================
// default constructor
//==============================================================
template <typename T>
List<T>::List() {
    capacity = DEFAULT_ARRAY_SIZE;
    size = 0;
    arr = new T[capacity];
}


//==============================================================
// copy constructor
//==============================================================

//==============================================================
// destructor
//==============================================================
template <typename T>
List<T>::~List()
{
    delete []arr;
}

//==============================================================
// operator=
//==============================================================

//==============================================================
// append
//==============================================================
template <typename T>
void List<T>::append(T item) {
    size += 1;
    if (size > capacity) {
        reallocate();
    }
    arr[size-1] = item;
}

//==============================================================
// insert  ( item, position )
//==============================================================

//==============================================================
// length
//==============================================================

//==============================================================
// operator[]
// Valid indices are 0 to size-1.   Invalid indices generate
// a run-time error and end the program.
//==============================================================

//==============================================================
// remove
// Valid indices are 0 to size-1.   Invalid indices generate
// a run-time error and end the program.
//==============================================================

//==============================================================
// isEmpty
//==============================================================
template <typename T>
bool List<T>::isEmpty() const {
    return size == 0;
}


//==============================================================
// operator+  (concatenate two lists)
//==============================================================

//==============================================================
// clear
//==============================================================

//==============================================================
// reallocate
// double the size of the array holding the list
// *** If you choose to implement this.  It is not part of the
// public interface so you may opt to do something different. ***
//==============================================================
template <typename T>
void List<T>::reallocate( void ) {
    T *bigger_arr = new T[capacity*2];
    for (int i = 0; i < capacity; i++) {
        bigger_arr[i] = arr[i];
    }

    delete[] arr;
    capacity *= 2;

    arr = bigger_arr;
}

//==============================================================

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
template <typename T>
List<T>::List(const List& l) {
    capacity = DEFAULT_ARRAY_SIZE;
    size = 0;
    arr = new T[capacity];

    for (int i = 0; i < l.length(); i++) {
        this->append(l[i]);
    }
}

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
template <typename T>
void List<T>::insert(T item, int position) {

    size += 1;
    if (size > capacity) {
        reallocate();
    }

    bool valid_pos = position >= 0 && position < this->length();
    if (!valid_pos) {
        throw runtime_error("Invalid index");
    }

    for (int i = size; i > position; i--) {
        arr[size] = arr[size-1];
    }

    arr[position] = item;
};

//==============================================================
// length
//==============================================================
template <typename T>
int List<T>::length() const {
    return size;
}

//==============================================================
// operator[]
// Valid indices are 0 to size-1.   Invalid indices generate
// a run-time error and end the program.
//==============================================================
template <typename T>
T& List<T>::operator[] (int position) const {
    bool is_valid = position >= 0 && position < this->length();
    if (is_valid) {
        return arr[position];
    } else {
        throw runtime_error("Invalid index");
    }
}

//==============================================================
// remove
// Valid indices are 0 to size-1.   Invalid indices generate
// a run-time error and end the program.
//==============================================================
template <typename T>
void List<T>::remove(int position) {
    bool valid_pos = position >= 0 && position <= size-1;
    if (!valid_pos) {
        throw runtime_error("Invalid index");
    }

    for (int i = position+1; i < size; i++) {
        arr[i-1] = arr[i];
    }
    size--;
};

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
template <typename T>
List<T> List<T>::operator+ (const List<T>& l) const {
    List<T> new_list;

    for (int i = 0; i < this->length(); i++) {
        new_list.append((*this)[i]);
    }

    for (int i = 0; i < l.length(); i++) {
        new_list.append(l[i]);
    }

    return new_list;
};

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

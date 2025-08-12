#include <iostream>
#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray() :
    size{0}, ptr{new int[size]} {}

DynamicArray::DynamicArray(const int arr[], int s) :
    size{static_cast<size_t>(s)}, ptr{new int[size]} { // Conversión explícita
    for(size_t i{0}; i < size; i++) {
        ptr[i] = arr[i];
    }
}

DynamicArray::DynamicArray(const DynamicArray &o) :
    size{o.size}, ptr{new int[size]} {
    for(size_t i{0}; i < size; i++) {
        ptr[i] = o.ptr[i];
    }
}

DynamicArray::~DynamicArray() {
    delete[] ptr;
}

size_t DynamicArray::getSize() const {
    return size;
}

void DynamicArray::push_back(int val) {
    int *tmp = new int[size + 1];
    for(size_t i{0}; i < size; i++) {
        tmp[i] = ptr[i];
    }
    size++;
    delete[] ptr;
    ptr = tmp;
    ptr[size - 1] = val;
}

void DynamicArray::insert(int val, int pos) {
    size_t pos_index = static_cast<size_t>(pos); // Conversión explícita
    int *tmp = new int[size + 1];
    for(size_t i{0}; i < pos_index; i++) {
        tmp[i] = ptr[i];
    }
    tmp[pos_index] = val;
    for(size_t i{pos_index}; i < size; i++) {
        tmp[i + 1] = ptr[i];
    }
    size++;
    delete[] ptr;
    ptr = tmp;
}

void DynamicArray::remove(int pos) {
    size_t pos_index = static_cast<size_t>(pos); // Conversión explícita
    int *tmp = new int[size - 1];
    for(size_t i{0}; i < pos_index; i++) {
        tmp[i] = ptr[i];
    }
    for(size_t i{pos_index}; i < size - 1; i++) {
        tmp[i] = ptr[i + 1];
    }
    size--;
    delete[] ptr;
    ptr = tmp;
}

ostream& operator<<(ostream& output, const DynamicArray& a) {
    output << "[ ";
    for(size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }
    output << "]";
    return output;
}

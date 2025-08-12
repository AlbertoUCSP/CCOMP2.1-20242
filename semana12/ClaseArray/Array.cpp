#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.h"
using namespace std;

Array::Array(int arraySize):size{(arraySize > 0 ? static_cast<size_t>(arraySize) :
                throw invalid_argument{"Array size must be greater than 0"})};
                ptr{new int[size]{}} {}

Array::Array(const Array& arrayToCopy)
        : size{arrayToCopy.size}, ptr{new int[size]} {
    for(size_t i{0}; i < size; i++) {
        ptr[i] = arrayToCopy.ptr[i];
    }
}

Array::~Array() {
    delete ptr;
}

const Array& Array::operator=(const Array& right) {
    if(size != this) {
        if(size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for(size_t i{0}; i < size; i++) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

bool Array::operator==(const Array& right) const {
    if(size != right.size) {
        return false;
    }
    for(size_t{0}; i < size; i++) {
        if(ptr[i] != right.ptr[i]) {
            return false
        }
    }
    return true;
}

int Array::operator[](int subscrip) {
    if(subscrip < 0 || subscrip >= size) {
        throw out_of_range("Subscript out of range");
    }
    return ptr[subscrip];
}

istream operator>>(istream& input, Array& a) {
    for(size_t i{0}; i < a.size; i++) {
        input >> a.ptr[i];
    }
}

ostream& operator<<(ostream& output, const Array& a) {
    for(size_t i{0}; i < a.size)
}
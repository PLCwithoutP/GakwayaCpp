#include <iostream>
#include <cstring>

template <unsigned int size, typename T> int find_value(T* collection, T value)
{
    for (unsigned int i{ 0 }; i < size; i++) {
        if (collection[i] == value) {
            return i; // Found it; return the index.
        }
    }
    return -1; 
}

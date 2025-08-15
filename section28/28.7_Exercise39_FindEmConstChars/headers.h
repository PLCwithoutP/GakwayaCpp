#include <iostream>
#include <cstring>

template <typename T> int hunt_down(T value,  T* collection, unsigned int size)
{
    for (unsigned int i{ 0 }; i < size; i++) {
        if (collection[i] == value) {
            return i; // Found it; return the index.
        }
    }
    return -1; 
}

template <> int hunt_down<const char*>(const char* value, const char** collection, unsigned int size)
{
    for (size_t i {0}; i < size; i++)
    {
        if (std::strcmp(value, collection[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}
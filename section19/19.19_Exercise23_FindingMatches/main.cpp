#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    std::string input[] {"catching","iteration","fresh","iterative","outside","mercy"};
    size_t size = std::size(input);
    std::string * matches = new std::string [size]; // Create std::string array on the heap. Remember to release
    size_t count {0};
    std::string key {"iter"};
    for (size_t i {0}; i < size; i++)
    {
        if (input[i].find(key, 0) != std::string::npos)
        {
            matches[count] = input[i];
            count++;
            std::cout << "Found it " << i << "times." << std::endl;
        }
    }
    
    std::cout << "Found " << count << " matches. They are: ";
    for (size_t i {0}; i < count; i++)
    {
        std::cout << matches[i] << " ";
    }

    delete[] matches;
    matches = nullptr;

    return 0;
}

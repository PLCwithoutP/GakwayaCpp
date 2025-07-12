#include <iostream>

int main(int argc, char **argv)
{
/*     const size_t size{10};

    // Different ways you can declare an array dynamically

    double *p_salaries {new double[size]}; // salaries array will contain garbage values
    int *p_students {new(std::nothrow) int[size]{}}; // All values are initialized to 0
    double *p_scores {new(std::nothrow) double[size]{1,2,3,4,5}}; // Allocating memory space
                                                                  // for an array of size double
                                                                  // vars. First 5 will be initialized
                                                                  // with 1,2,3,4,5 and the rest will
                                                                  // be zeros.

    // nullptr check and use the allocated array
    if(p_scores)
    {
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores." << std::endl;

        // Print out elements. Can use regular array access notation, or pointer arithmetic
        for (size_t i{}; i < size ; i++)
        {
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    std::cout << "All pointers are successfully cleaned out" << std::endl; */

    // Static vs dynamic arrays

    int scores[10] {1,2,3,4,5,6,7,8,9,10}; // Lives on the stack

    std::cout << "scores size : " << std::size(scores) << std::endl;
    
    for (auto s : scores)
    {
        std::cout << "value : " << s << std::endl;
    }

/*     int *p_scores1 = new int[10] {1,2,3,4,5,7,8,10,11}; // Lives on the heap
    //std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl;

/*     for (auto s : p_scores1)
    {
        std::cout << "value : " << s << std::endl;
    } */
    return 0;
}

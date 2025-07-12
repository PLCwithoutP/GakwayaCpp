#include <iostream>

int main(int argc, char **argv)
{
/*     int *p_number {new int {65}}; // Points to address1

    // Should delete and reset here

    int number {55}; // Lives at address2, stack variable

    p_number = &number; // Now p_number points to address2, but address1 is still employed
                        // within our program. But our program has lost access to that address1.
                        // Memory has been leaked. */

/*     // Double allocation
    int *p_number1 {new int{55}};

    // Use the pointer

    // Should delete and reset here

    p_number1 = new int {44}; // memory with int{55} leaked */

    // Nested scopes with dynamically allocated memory
    {
        int *p_number2 {new int{53}};
    }
    // Memory with int{53} leaked
    
    std::cout << "Program ending well" << std::endl;
    return 0;
}

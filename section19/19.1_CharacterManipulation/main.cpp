#include <iostream>

int main(int argc, char **argv)
{
/*     // Check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "std::isalnum Test" << std::endl;

    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "^ is not alphanumeric : " << std::isalnum('^') << std::endl;

    // Can use this as a test condition
    char input_char {'*'};
    if (std::isalnum(input_char))
    {
        std::cout << input_char << " is alphanumeric." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not alphanumeric." << std::endl;
    }
    std::cout << std::endl; */

/*     // Check if character is alphabetic
    std::cout << std::endl;
    std::cout << "std::isalpha Test" << std::endl;
    std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
    std::cout << "^ is not alphabetic : " << std::isalpha('^') << std::endl;
    std::cout << "7 is not alphabetic : " << std::isalpha('7') << std::endl;
    std::cout << std::endl; */

/*     // Check if a character is blank
    std::cout << std::endl;
    std::cout << "std::isblank : " << std::endl;
    char message[] {"Hello there. How are you doing? The sun is shining"};
    std::cout << "message : " << message << std::endl;

    // Find and print blank index
    int blank_count {};
    for (size_t i {0}; i < std::size(message); i++)
    {
        // std::cout << "Value : " << message[i] << std::endl;
        if(std::isblank(message[i]))
        {
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }
    std::cout << "In total we found " << blank_count << " blank characters." << std::endl; */

 /*    // Check if character is lowercase or uppercase
    std::cout << "std::islower and std::isupper " << std::endl;

    std::cout << std::endl;
    char thought[] {"The C++ Programming Language is one of the most used on the Planet"};
    int lowercase_count{};
    int uppercase_count{};

    // Print original string for ease of comparison on the terminal
    std::cout << "Original string : " << thought << std::endl;

    for (auto characters : thought)
    {
        if (std::islower(characters))
        {
            std::cout << " " << characters;
            ++lowercase_count;
        }
        if (std::isupper(characters))
        {
            std::cout << " " << characters;
            ++uppercase_count;
        }
    }
    std::cout << std::endl;
    std::cout << "Found " << lowercase_count << " lowercase characters and " << uppercase_count << " uppercase characters." << std::endl; */

/*     // Check if a character is a digit
    std::cout << std::endl;
    std::cout << "std::isdigit : " << std::endl;

    char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};
    std::cout << "statement : " << statement << std::endl;

    int digit_count{};

    for (auto character : statement)
    {
        if (std::isdigit(character))
        {
            std::cout << "Found digit : " << character << std::endl;
            ++digit_count;
        }
    }
    std::cout << "Found " << digit_count << " digits in the statement string " << std::endl; */

/*     // Turning a character to lowercase using the std::tolower() function
    std::cout << std::endl;
    std::cout << "std::tolower and std::toupper Cases" << std::endl;
    char original_str[] {"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];
    
    // Turn this to uppercase. Change the array in place
    for (size_t i{}; i < std::size(original_str); i++)
    {
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "Original string : " << original_str << std::endl;
    std::cout << "Uppercase string : " << dest_str << std::endl;

    // Turn this to lowercase. Change the array in place
    for (size_t i{}; i < std::size(original_str); i++)
    {
        dest_str[i] = std::tolower(original_str[i]);
    }
    std::cout << "Lowercase string : " << dest_str << std::endl;
 */
    return 0;
}

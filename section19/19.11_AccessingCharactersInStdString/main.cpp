#include <iostream>
#include <string>

int main(int argc, char **argv)
{
/*     // Size of a std::string
    std::string str1 {"Hello there"};

    // Size of a string : doesn't count the null terminator
    std::cout << "str.size() : " << str1.size() << std::endl;

    // Regular indexed loop. Can also be adapted to use while and do-while
    std::cout << std::endl;
    std::cout << "For loop with array index notation : " << std::endl;

    std::cout << "str1(for loop) : " ;
    for (size_t i {0}; i < str1.size() ; i++)
    {
        std::cout << " " << str1[i];
    }
    std::cout << std::endl;

    // Can also use range based loop
    std::cout << std::endl;
    std::cout << "Using range based for loop : " << std::endl;

    std::cout << "str1(range based for loop) : ";
    for(char value : str1)
    {
        std::cout << " " << value;
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Using the std::string::at() method " << std::endl;

    std::cout << "str1 : (for loop with at())";
    for(size_t i {0}; i < str1.size(); i++)
    {
        std::cout << " " << str1.at(i);
    }
    std::cout << std::endl;

    // Modifying data
    std::cout << std::endl;
    std::cout << "Modifying with operator[] and at() : " << std::endl;
    str1[0] = 'B';
    str1.at(1) = 'a';

    std::cout << "str1(modified) : " << str1 << std::endl;
     */

    // Front and back : Get the first or last character
    // Front and back return references :
    // https://en.cppreference.com/w/cpp/string/basic_string/front
    std::cout << std::endl;
    std::cout << "Front and back : " << std::endl;

    std::string str2 {"The Phoenix King"};

    std::cout << "str2 : " << str2 << std::endl;

    // If we store thre return value in a raw variable
    // we are making a copy of the return value
    std::cout << std::endl;
    std::cout << "store return value in raw char variables" << std::endl;
    char front_char = str2.front();
    char back_char = str2.back();
    std::cout << "The front char in str2 is : " << front_char << std::endl;
    std::cout << "The back char in str2 is : " << back_char << std::endl;

    // Modify : we're modifying copies of data returned from front and back
    front_char = '.';
    back_char = 'o';
    std::cout << "str2 after modification (copies) : " << str2 << std::endl;

    // If we store the return values in references, we can use them
    // to modify actual data in the string. Remember that references
    // are true aliases of the data referred to
    std::cout << std::endl;
    std::cout << "store return value in references : " << std::endl;

    char& front_char_ref = str2.front();
    char& back_char_ref = str2.back();

    // Modify with references
    front_char_ref = '.';
    back_char_ref = 'o';
    std::cout << "str2 after modification(references) : " << str2 << std::endl;

    // Can even modify directly from calls to front and back
    std::cout << std::endl;
    std::cout << "Modify directly through calls to front() and back() : " << std::endl;
    str2.front() = 'f';
    str2.back() = '$';
    std::cout << "str2 after modification(references) : " << str2 << std::endl;
    
    // Can make the ref const, if we want to explicitly state that we don't want
    // the references to be used to modify the original char
    std::cout << std::endl;
    std::cout << "Front and back - Return const reference : " << std::endl;
    str2 = "The Phoenix King";
    const char& front_char_ref_const = str2.front();
    const char& back_char_ref_const = str2.back();

    // Modify
    // front_char_ref_const = '.'; // Error : Modifying read-only value
    // back_char_ref_const = 'o'; // Same error

    // c_str method
    // doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str
    // returns const char* to the wrapped string. You shouldn't use it to
    // modify data in the string
    std::cout << std::endl;
    std::cout << "Using c_str() to get wrapped C-String (Returns const char*)" << std::endl;

    str2 = "The Phoenix King";
    const char* wrapped_c_string = str2.c_str();
    std::cout << "Wrapped c string : " << wrapped_c_string << std::endl;

    // data method
    // doc:https://en.cppreference.com/w/cpp/string/basic_string/data
    // From C++-17 onward, we can use this to modify the underlying char * array
    std::cout << std::endl;
    std::cout << "Using data() to get wrapped C-String" << std::endl;
    str2 = "Hello World again!";

    char * data = str2.data();
    std::cout << "Wrapped c string : " << data << std::endl;

    data[0] = 'B'; // This also changes std::string

    std::cout << "Wrapped c-string (after modification) : " << data << std::endl;
    std::cout << "Original string (after modification) : " << str2 << std::endl;
    
    return 0;
}

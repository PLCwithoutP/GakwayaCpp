#include <iostream>

int main(int argc, char **argv)
{
/*     // Replacing (1)
    // basic_string& replace(size_type pos, size_type count, const basic_string& str);
    // Replace the range [pos, pos + count] with str

    std::cout << "std::string::replace-(1)" << std::endl;

    std::string str1 {"Finding Nemo"}; // Replace Finding with 'Searching For'
    std::string str2 {"Searching for"};
    std::cout << "str1 : " << str1 << std::endl;

    std::cout << "Replacing..." << std::endl;
    str1.replace(0,7,str2);

    std::cout << "str1 : " << str1 << std::endl;
 */
    // Replacing (2)
    // basic_string& replace(size_type pos, size_type count,
    //                       const basic_string& str, size_type pos2, size_type count2 = npos);

    // Replace in part of str, not its entirety
    std::cout << std::endl;
    std::cout << "std::string::replace - (2)" << std::endl;

    std::string str2 {"Finding Nemo"};
    std::string str3 {"The Horse was Found in the Fields Searchin for Food"};

    std::cout << "str2 : " << str2 << std::endl;

    std::cout << "Replacing..." << std::endl;
    str2.replace(0,7,str3,34,13);

    std::cout << "str2 : " << str2 << std::endl;

    // Copying
    // size_type copy( CharT* dest, size_type count, size_type pos = 0);
    // Copy a subsection of *this string to dest. Dest is pre-allocated
    // The resulting character string is not null-terminated. Be careful

    std::cout << std::endl;
    std::cout << "std::copy()" << std::endl;

    std::string str4 {"Climbing Kirimanjaro"};
    char txt4[15] {}; // Initialized with zero equivalent for characters which is '\0'
    std::cout << "std::size(txt4) : " << std::size(txt4) << std::endl;
    std::cout << "txt4 : " << txt4 << std::endl;

    std::cout << "Copying..." << std::endl;
    str4.copy(txt4,11,9);

    // Safe to print because the char array was initialized with '\0' s
    std::cout << "txt4 : " << txt4 << std::endl;

    std::cout << std::endl;
    std::cout << "std::string::resize() - (1)" << std::endl;

    std::string str5 {"Hello"};
    std::cout << "null char : " << '\0' << std::endl;
    std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;

    std::cout << "Resizing..." << std::endl;
    str5.resize(8); // This fills new char place holders with null character by default,
                    // you can't print them and see them

    std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;
    
    // Prove that they are indeed null characters
    for (size_t i {}; i < str5.size(); i++)
    {
        std::cout << i << " : " << str5[i] << std::endl;
    }

    // Can resize by specifying the auto fill character
    std::cout << std::endl;
    std::cout << "std::resize() - (2)" << std::endl;

    std::cout << "str5 : " << str5 << std::endl;

    std::cout << "Resizing..." << std::endl;
    str5.resize(10,'f');

    std::cout << "str5 : " << str5 << std::endl;

    // Resize down
    // Can also shrink back using the same method
    // Don't worry about the null character here
    // std::string takes care of it being there. Remember
    // that the capacity is still larger than the current size

    std::cout << std::endl;
    std::cout << "Shrink by resizing down" << std::endl;

    std::cout << "str5 : " << str5 << std::endl;

    std::cout << "Resizing(Shrinking) : " << std::endl;
    str5.resize(5); // Hello
    std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;
    
    std::string str_a {"This is a string stored in A"};
    std::string str_b {"This is a string stored in B"};

    // Before swap
    std::cout << "str_a : " << str_a << std::endl;
    std::cout << "str_a : " << str_b << std::endl;
    std::cout << "str_a.size() : " << str_a.size() << std::endl;
    std::cout << "str_b.size() : " << str_b.size() << std::endl;
    std::cout << "str_a.capacity() : " << str_a.capacity() << std::endl;
    std::cout << "str_b.capacity() : " << str_b.capacity() << std::endl;
    
    std::cout << "Swapping..." << std::endl;
    str_a.swap(str_b);

    // After swap
    std::cout << "str_a : " << str_a << std::endl;
    std::cout << "str_a : " << str_b << std::endl;
    std::cout << "str_a.size() : " << str_a.size() << std::endl;
    std::cout << "str_b.size() : " << str_b.size() << std::endl;
    std::cout << "str_a.capacity() : " << str_a.capacity() << std::endl;
    std::cout << "str_b.capacity() : " << str_b.capacity() << std::endl;

    return 0;
}

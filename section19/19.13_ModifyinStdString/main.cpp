#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    // Clear : Removes all characters from the string
    std::cout << std::endl;
    std::cout << "std::string::clear()" << std::endl;
    
    std::string str1 {"The Lion King"};

    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;

    std::cout << "Clearing..." << std::endl;
    str1.clear();
    
    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    
    // Insert(1)
    // (1) basic_string& insert(size_type index, size_type count, CharT ch);

    // Inserts count characters in the string starting at index index

    std::cout << std::endl;
    std::cout << "std::string::insert()-1" << std::endl;
    std::string str2 {"122"};

    std::cout << "str2 : " << str2 << std::endl;

    std::cout << "Inserting..." << std::endl;
    str2.insert(1,1,'3'); // Count can be 1,2,5...

    std::cout << "str2 : " << str2 << std::endl;

    // Insert(2)
    // (2) basic_string& insert(size_type index, const CharT* s);

    // Inserts null-terminated character string pointed to by s
    // at the position index. The length of the string is determined by the first null character.
    std::cout << std::endl;
    std::cout << "std::string::insert()-2" << std::endl;
    
    std::string str3 {"Elden!"};
    const char *txt3 {" Ring"};

    std::cout << "str3 : " << str3 << std::endl; // Elden!

    std::cout << "Inserting..." << std::endl;
    str3.insert(5,txt3);

    std::cout << "str3 : " << str3 << std::endl; // Elden Ring
    
    // Insert(3)
    // (3) basic_string& insert(size_type index, const CharT* s, size_type count);

    // Inserts the characters in the range [s, s+count) at the position index.
    // The range can contain null characters.

    std::cout << std::endl;
    std::cout << "std::string::insert()-3" << std::endl;

    std::string str4 {"Elden!"};
    const char *txt4 {" Ring is destroyed"};

    std::cout << "str4 : " << str4 << std::endl;

    std::cout << "Inserting..." << std::endl;
    str4.insert(5,txt4,6);

    std::cout << "str4 : " << str4 << std::endl;

    // Insert(4)
    // (4) basic_string& insert(size_type index, const basic_string& str);
    // Inserts string str at the position index

    std::cout << std::endl;
    std::cout << "std::string::insert()-4" << std::endl;

    std::string str5 {" Elden"};
    std::string str6 {"Ring!"};

    std::cout << "str6 : " << str6 << std::endl;

    std::cout << "Inserting..." << std::endl;
    str6.insert(5,str5);
    std::cout << "str6 : " << str6 << std::endl;

    // Insert(5)
    // (5) basic_string& insert(size_type index, const basic_string& str, size_type index_str, size_type count = npos);

    // Inserts a string, obtained by str.substr(index_str, count) at the position index

    std::cout << std::endl;
    std::cout << "std::string::insert()-5" << std::endl;

    std::string str7 {"Elden!"};
    std::string str8 {"I bought my wife a Ring."};

    std::cout << "str7 : " << str7 << std::endl;

    std::cout << "Inserting..." << std::endl;
    str7.insert(5, str8, 18, 5);

    std::cout << "str7 : " << str7 << std::endl;

    // Erase
    // basic_string& erase(size_type index = 0, size_type count = npos);

    // Starting at index index, erase count characters from the string

    // Notice that this function returns a reference
    std::cout << std::endl;
    std::cout << "std::string::erase()" << std::endl;

    std::string str9 {"Elden Ring is a great game used to enter into Dark Souls genre."};

    str9.erase(10, str9.size() - 11);
    std::cout << "str9 : " << str9 << std::endl;

    // push_back
    // void push_back(CharT ch);
    // Appends the given character ch to the end of the string
    std::cout << std::endl;
    std::cout << "std::push_back()" << std::endl;
    std::string str10 {"Elden Ring"};
    str10.push_back('!');
    std::cout << "str10 : " << str10 << std::endl;


    // pop_back
    // void pop_back(CharT ch);
    // Removes the last character from the string
    std::cout << std::endl;
    std::cout << "std::pop_back()" << std::endl;
    std::string str11 {"Elden Ring!"};
    str11.pop_back();
    std::cout << "str11 : " << str11 << std::endl;
    return 0;
}

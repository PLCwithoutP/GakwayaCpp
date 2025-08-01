#include <iostream>

int main(int argc, char **argv)
{
    std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries"};
    std::string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
    std::string linux_path {"/home/username/files/hello.txt"};
    std::string hint {"\"\\\\\" escapes a backslash character like \\."};

    std::cout << todo_list << std::endl;
    std::cout << windows_path << std::endl;
    std::cout << linux_path << std::endl;
    std::cout << hint << std::endl;
    
    // Using raw string literals
    std::string todo_list1 {R"(
        Clean the house
        Walk the dog
        Do Laundry
        Pick groceries
        )"};
    
    // Can even use this in assignments
    todo_list1 = R"(
    Clean the house
    Walk the cat
    Do Laundry
    Pick flowers
    )";

    std::cout << todo_list1 << std::endl;

    // This works for C-string literals
    const char* c_string_literal_cars {R"(
        Ford Focus TDCi 1.6 Trend
        Hyundai i20 MPI1.4
        Volkwagen Polo Trendline 1.4 TDI
        )"};

    std::cout << c_string_literal_cars << std::endl;

    std::string windows_path1 {R"(D:\sandbox\testProject\hello.txt)"};
    std::string linux_path1 {R"(/home/username/files/hello.txt)"};
    std::string hint1 {R"("\" escapes a backslash character like \.)"};
    
    std::cout << windows_path1 << std::endl;
    std::cout << linux_path1 << std::endl;
    std::cout << hint1 << std::endl;
    
    // Problem when the raw string literal contains (" or ")
    // (" and/or ") confuse the C++ parser as to where the raw string starts and ends
    //std::string sentence {R"(The message was "(Stay out of this!)")"}; // Compiler error
    std::string sentence {R"---(The message was "(Stay out of this!)")---"};
    std::cout << "sentence : " << sentence << std::endl;
    
    return 0;
}

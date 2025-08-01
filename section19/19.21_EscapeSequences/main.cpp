#include <iostream>

int main(int argc, char **argv)
{
    /* std::cout << "Hello";
    std::cout << "World" << std::endl; // \n is faster
    // He said "Get out of here immediately!"
    std::cout << "He said "Get out of here immediately!"" << std::endl; */

    std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries"};
    std::string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
    std::string linux_path {"/home/username/files/hello.txt"};
    std::string hint {"\"\\\\\" escapes a backslasg character like \\."};

    std::cout << todo_list << std::endl;
    std::cout << windows_path << std::endl;
    std::cout << linux_path << std::endl;
    std::cout << hint << std::endl;
    return 0;
}

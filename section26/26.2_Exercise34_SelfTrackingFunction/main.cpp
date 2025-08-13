#include <iostream>

void func()
{
    static size_t count {};
    count++;
    std::cout << count << " ";
}

void do_work(unsigned int n){
    for(unsigned int i{0} ; i < n; ++i){
        func();
    }
}

int main()
{
    do_work(5);
    return 0;
}


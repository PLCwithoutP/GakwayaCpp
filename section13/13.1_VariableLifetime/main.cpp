#include <iostream>

int static_var2 {80}; // static duration : dies when program ends

void some_function(){
    int local_var3 {30}; // local (automatic) duration : dies at the end of the block
    static int static_var1 {40}; // static duration : dies when program ends
    int dynamic_var1 {50}; // You decide when it dies
}

int main(int argc, char **argv)
{
    int local_var1 {10}; // local (automatic) duration : dies at the end of the block
    int dynamic_var2 {60}; // You decide when it dies

    {
        int local_var2 {20}; // local (automatic) duration : dies at the end of the block
        int dynamic_var3 {70}; // You decide when it dies
    }
    
    return 0;
}
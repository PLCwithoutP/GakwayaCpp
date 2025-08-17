#include <iostream>

int max (int a, int b);

int main(){
    int x {15};
    int y {22};

    std::cout << x << " and " << y << " max is : " << max(x,y) << std::endl;
    
    return 0;
}

// Function that takes multiple parameters and returns the result of the computation
int max (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
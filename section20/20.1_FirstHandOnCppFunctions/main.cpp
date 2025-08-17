#include <iostream>

// Function that takes a single parameter, and doesn't
// give back the result explicitly
void enter_bar(unsigned int age) // Function parameters
{
    if (age > 18 && age <= 100)
    {
        std::cout << "You are " << age << " years old. Please proceed." << std::endl;
    }
    else if (age > 100)
    {
        std::cout << "Lmao nice ID." << age << " years old with fake mustache." << "Sorry." << std::endl;
    }
    else
    {
        std::cout << "Sorry, you are too young for this. Later on." << std::endl;
    }
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

// Function that doesn't take parameters and returns nothing
void say_hello()
{
    std::cout << "Hello there" << std::endl;
    return;
}

// Function that takes no parameters and return something
int lucky_number()
{
    return 99;
} 

// Changes to them are not visible outside the function. What we
// have inside the function are actually COPIES of the arguments
// passed to the function.
double increment_multiply(double a, double b)
{
    std::cout << "Inside function, before increment\n";
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    double result = ((++a) * (++b));

    std::cout << "Inside function, after increment\n";
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // Returning the result
    return result;
}


int main(){

    /* enter_bar(22); // Function arguments
    enter_bar(165); */

    /* for (unsigned int i {}; i < 20; i++)
    {
        enter_bar(i);
    } */

    /* // Calling max
    int result = max(20, 25);
    std::cout << "max : " << result << std::endl;
 */

//    say_hello();
//    std::cout << "Your lucky number is " << lucky_number() << std::endl;

    double h {3.00};
    double i {4.52};

    std::cout << "Outside function, before increment\n";
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    double incr_mult_result = increment_multiply(i,h);
    std::cout << "Outside function, after increment\n";
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;
    
    return 0;
}
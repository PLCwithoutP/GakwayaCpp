#include <iostream>



int main()
{
    /*
    Lambda function signature :
                                [capture list] (parameters) -> return type {
                                    // Function Body
                                }
    */
    /* auto func = [](){
        std::cout << "Elden Ring!" << std::endl;
    };
    func();
    func();
     */
    
    /* // Declare a lambda function and call it directly
    [](){
        std::cout << "Elden Ring!" << std::endl;
    }(); */
    
    // Lambda function that takes parameters
    /* [](double a, double b){
        std::cout << "a + b : " << a + b << std::endl;
    }(13.5, 23.4);
     */
    
    /* auto func1 = [](double a, double b){
        std::cout << "a + b : " << a + b << std::endl;
    };

    func1(10,20);
    func1(5,7); */

/*     // Lambda function that returns something
    auto func2 = [](double a, double b){
        return a + b;
    };

    std::cout << [](double a, double b){
        return a + b;
    }(10,20) << std::endl;

    auto result1 = func2(2,12);
    auto result2 = func2(25,24);
    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "direct call : " << func2(425,12) << std::endl; */

    auto func3 = [](double a, double b)-> int{
        return a + b;
    };

    auto func4 = [](double a, double b){
        return a + b;
    };

    double a {7.1};
    double b {3.2};

    auto result3 = func3(a,b);
    auto result4 = func4(a,b);

    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl;
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl;

    std::cout << "Done!" << std::endl;
    
    return 0;
}
#include <iostream>


int main()
{
    double userCelciusData {};
    std::cout << "Please enter a degree value in Celcius : " << std::endl;
    std::cin >> userCelciusData;

    double fahrenheit {};
    fahrenheit = (9.0 / 5) * userCelciusData + 32;

    std::cout << userCelciusData << " Celcius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}
#include <iostream>

double sum (double scores[5], size_t count)
{
    double sum {};

    for (size_t i{}; i < count; i++)
    {
        sum += scores[i];
    }
    return sum;
}

int main(int argc, char **argv)
{
    double student_scores[] {10.0, 20.0, 30.0, 23, 53, 1234}; // Less than 5 paramaters
    double result = sum(student_scores, std::size(student_scores));
    std::cout << "result : " << result << std::endl;

    return 0;
}

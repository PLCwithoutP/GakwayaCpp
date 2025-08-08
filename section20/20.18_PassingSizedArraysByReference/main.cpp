#include <iostream>

double sum(const double (&scores) [10]);
int main(int argc, char **argv)
{
    double student_scores[] {10,20,30,40,50,60,70,80,90,100}; // must be 10 elements

    double sum_results = sum(student_scores);

    std::cout << "result is : " << sum_results << std::endl;

    return 0;
}

double sum(const double (&scores) [10])
{
    double score_sum {};

    for (size_t i {}; i < std::size(scores); i++)
    {
        score_sum += scores[i];
    }

    return score_sum;
}
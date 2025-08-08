#include <iostream>
#include <array>

double sum(double scores[], size_t count);

int main(int argc, char **argv)
{
    double my_scores[]{10.5,22,34,12,52};
    double result {};
    size_t arr_size = std::size(my_scores);    
    result = sum(my_scores, arr_size);
    std::cout << "result : " << result << std::endl;
    for (size_t i {}; i < arr_size; i++)
    {
        std::cout << my_scores[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

double sum(double scores[], size_t count)
{
    double score_sum {};
    scores[0] = 25; 
    //size_t arr_size = std::size(scores); // Compiler error because array decayed into pointer

    for (size_t i {}; i < count; i++)
    {
        score_sum += scores[i];
    }
    return score_sum;
}
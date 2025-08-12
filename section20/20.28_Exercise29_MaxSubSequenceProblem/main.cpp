#include <iostream>

int max_subsequence_sum(int sequence[] , unsigned int size);

int main(int argc, char **argv)
{
    int data[] {3,-4 ,6,1,1,-2,2,3};
    auto result  = max_subsequence_sum(data,8);
    std::cout << "result : " << result << std::endl;

    return 0;
}

int max_subsequence_sum(int sequence[] , unsigned int size)
{
    int current_sum {};

    for (size_t i {}; i < size; i++)
    {
        current_sum += sequence[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    return current_sum;
}
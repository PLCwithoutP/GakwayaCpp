#include <iostream>

void compute(int age = 27, double weight = 90, double distance = 123.4);
void greet_teacher(std::string_view name_sv = "professor", int homeworks = 2,
                    int exams = 2, double pass_rate = 0.5, std::string_view first_dpmt = "Ucak Uzay Bilimleri");
int main(int argc, char **argv)
{
    //compute();
    //compute(32,82.3, 100);
    greet_teacher();
    greet_teacher("Barkın Bey");
    greet_teacher("Serhat Bey", 7);
    return 0;
}

void compute(int age, double weight, double distance)
{
    std::cout << "Doing computations on age : " << age
              << " weight : " << weight
              << " and distance : " << distance << std::endl;
}

void greet_teacher(std::string_view name_sv, int homeworks,
                    int exams, double pass_rate, std::string_view first_dpmt)
{
    std::cout << std::endl;
    std::cout << "Good morning " << name_sv << "!" << std::endl;
    std::cout << "In the past semester, we had " << homeworks << " homeworks, and "
              << exams << " exams. The pass rate was around " << pass_rate * 100 << " % " << std::endl;
    std::cout << "The best performing department was " << first_dpmt << std::endl;
}
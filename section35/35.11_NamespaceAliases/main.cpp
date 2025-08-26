#include <iostream>

namespace Level1
{
    namespace Level2
    {
        namespace Level3
        {
            namespace Level4
            {
                const double weight{33.33};
            }
        }
    }
}

int main()
{
    namespace Data = Level1::Level2::Level3::Level4;
    std::cout << "Weight : " << Data::weight << std::endl;
    return 0;
}
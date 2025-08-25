#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
#include <cassert>

class Reverser
{
    public:
        // Constructor
        Reverser(std::initializer_list<int> list)
        {
            assert((list.size() == 5));
            for (size_t i {}; i < list.size(); i++)
            {
                m_list[i] = *(list.end() - 1 - i);
            }
        }

        // Utilities
        void print()
        {
            std::cout << "Collection [";
            for (size_t i {}; i < 5; i++)
            {
                std::cout << m_list[i] << " ";
            }
            std::cout << "]";
        }
    private:
        int m_list[5]{};
};

#endif // _EXERCISE_H

#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

class CoolUtility
{
    public:

        CoolUtility() = delete;

        CoolUtility(const char* input)
        : m_object_description{input}
        {}

        void what_do_you_do() const
        {
            std::cout << m_object_description;
        }

        static const char* s_general_description;
    
    private:
        const char* m_object_description;
};




#endif // _EXERCISE_H

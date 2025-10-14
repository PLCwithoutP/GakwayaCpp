#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Number
{
    friend std::ostream& operator<< (std::ostream& out, const Number& number);

    // Inefficient but necessary in C++-17 and before
    friend bool operator<(const Number& left_operand, const Number& right_operand);
    friend bool operator<(int left_operand, const Number& right_operand);
    friend bool operator<(const Number& left_operand, int right_operand);

    public:
        Number() = default;
        
        explicit Number(int value);

        int get_wrapped_int() const
        {
            return m_wrapped_int;
        }

        ~Number() = default;

    private:
        int m_wrapped_int {0};
};

inline bool operator<(const Number& left_operand, const Number& right_operand)
{
    return (left_operand.m_wrapped_int < right_operand.m_wrapped_int);
}

inline bool operator<(int left_operand, const Number& right_operand)
{
    return (left_operand < right_operand.m_wrapped_int);
}

inline bool operator<(const Number& left_operand, int right_operand)
{
    return (left_operand.m_wrapped_int < right_operand);
}

#endif //NUMBER_H
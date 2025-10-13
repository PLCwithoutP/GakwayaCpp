#include <iostream>

#include "number.h"
#include "point.h"

Number::Number(int value)
:
m_wrapped_int {value}
{
}

Number::operator Point() const
{
    std::cout << "Using type conversion from Number to Point" << std::endl;
    return Point(static_cast<double>(m_wrapped_int) , static_cast<double>(m_wrapped_int));
} 

std::ostream& operator<< (std::ostream& out, const Number& number)
{
    out << "Number : [" << number.get_wrapped_number() << "]";
    return out; 
}

// Operators are done as non-member functions to take advantage of implicit conversions
Number operator+(const Number& left_operand, const Number& right_operand)
{
    return Number(left_operand.m_wrapped_int + right_operand.m_wrapped_int);
}

Number operator-(const Number& left_operand, const Number& right_operand)
{
    return Number(left_operand.m_wrapped_int - right_operand.m_wrapped_int);
}

Number operator*(const Number& left_operand, const Number& right_operand)
{
    return Number(left_operand.m_wrapped_int * right_operand.m_wrapped_int);
}

Number operator/(const Number& left_operand, const Number& right_operand)
{
    return Number(left_operand.m_wrapped_int / right_operand.m_wrapped_int);
}

Number operator%(const Number& left_operand, const Number& right_operand)
{
    return Number(left_operand.m_wrapped_int % right_operand.m_wrapped_int);
}
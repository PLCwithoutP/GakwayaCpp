#ifndef NUMBER_H
#define NUMBER_H

class Point;

class Number
{
    friend Number operator+ (const Number& left_operand, const Number& right_operand);
    friend Number operator- (const Number& left_operand, const Number& right_operand);
    friend Number operator* (const Number& left_operand, const Number& right_operand);
    friend Number operator/ (const Number& left_operand, const Number& right_operand);
    friend Number operator% (const Number& left_operand, const Number& right_operand);

    public:
        Number() = default;
        Number(int value);

        // Type conversion operator from Number to Point
        operator Point() const;

        // getter
        int get_wrapped_number() const
        {
            return m_wrapped_int;
        }

        ~Number() = default;

    private:
        int m_wrapped_int {0};
};




#endif
#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
enum class DayOfWeek : unsigned int
{
    Monday, Tuesday, Wednesday,
    Thursday, Friday, Saturday,
    Sunday
};

void print_day(DayOfWeek day);

#endif
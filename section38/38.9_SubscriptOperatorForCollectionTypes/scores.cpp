#include <cassert>

#include "scores.h"

double& Scores::operator[](size_t index)
{
    assert((index >= 0) && (index < 20));
    return m_scores[index];
}

const double Scores::operator[](size_t index) const
{
    assert((index >= 0) && (index < 20));
    return m_scores[index];
}
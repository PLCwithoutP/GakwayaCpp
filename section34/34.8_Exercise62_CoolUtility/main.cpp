#include <iostream>
#include "exercise.h"


int main()
{
    CoolUtility cu("I can take you from point A to point #");
    cu.what_do_you_do();
    std::cout << std::endl;
    std::cout << "general purpose : " << CoolUtility::s_general_description << std::endl;
    return 0;
}
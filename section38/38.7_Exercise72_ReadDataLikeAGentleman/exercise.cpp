#include "exercise.h"
#include <iostream>


namespace CU{
    
    
    	Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand)
        {
		    Point_nD tmp(left_operand);
		    for(unsigned int i{} ;  i < left_operand.size(); ++i)
            {
		        tmp.set(i, tmp[i] + right_operand[i]); 	 // FIX NEEDED HERE
            }
		return tmp;
	    }
    
    
    
    
}
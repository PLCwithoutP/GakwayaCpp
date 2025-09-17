#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
	
    public : 
        string(const char* data, size_t size = 15 ){
            m_data = new char [size];
            std::strcpy(m_data,data );
        }

        ~string(){
            delete [] m_data;
        }
	
    private : 
        char * m_data{nullptr};
};

    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE

    std::ostream& operator<< (std::ostream& out , const CU::string& s)
    {
        out << s.m_data;
        return out;
    }
	
	//YOUR CODE WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
}

inline void use_cu_string(const CU::string& s){
	std::cout << s;
}



#endif // _EXERCISE_H

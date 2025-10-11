#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>


namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
    //We pass operator+()'s first param by const reference
	friend string operator+( const string& left, const string& right);
	friend string& operator+=(string& left, const string& right);

	public :
    //We make the constructor non explicit to allow implicit conversions from const char* to CU::string
        string(const char* data, size_t size = 15 ){
            m_size = size;
            m_data = new char [m_size];
            std::strcpy(m_data,data );
        }
        string(const string& source){
            m_size = source.m_size;
            m_data = new char [m_size]; // We want to do deep copy here.
            std::strcpy(m_data,source.m_data);
        }

	const char* c_str() const{
		return m_data;
	}

	~string(){
		delete [] m_data;
		m_data = nullptr;
	}
	private : 
	 unsigned int m_size;
	 char * m_data{nullptr};
};

	inline std::ostream& operator<< (std::ostream& out , const CU::string& s){
		out << s.m_data;
		return out;
	}

	inline string operator+(const string& left, const string& right){
		string tmp(left);
		tmp += right;
		return tmp;
	}

	inline string& operator+=(string& left, const string& right){
		std::strcat(left.m_data,right.m_data);
		return left;
	}
}



#endif // _EXERCISE_H

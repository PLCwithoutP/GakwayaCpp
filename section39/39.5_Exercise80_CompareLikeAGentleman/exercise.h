#ifndef EXERCISE_H
#define EXERCISE_H

#pragma once
#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
	friend string operator+(const string& left, const string& right);
	friend string& operator+=(string& left, const string& right);
    
    friend bool operator  > (const string& left , const string& other);
    friend bool operator  < (const string& left , const string& other);
    friend bool operator  >= (const string& left , const string& other);
    friend bool operator  <= (const string& left , const string& other);
    friend bool operator  == (const string& left , const string& other);
    friend bool operator  != (const string& left , const string& other);

	public : 
	 string(const char* data, size_t size = 15 ){
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}

	//Copy constructor
	string(const string& source){
		m_size = source.m_size;
		m_data = new char [m_size]; // We want to do deep copy here.
		std::strcpy(m_data,source.m_data);
	}

	//Copy assignment operator
	string& operator= (const string& right_operand){
		std::cout << "Copy assignment operator called" << std::endl;
		if(this != & right_operand){
			delete[] m_data;
			m_data = new char [right_operand.m_size];
			std::strcpy(m_data,right_operand.m_data);
		}
		return *this;
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

    inline bool operator  > (const string& left , const string& other) {
        return (std::strcmp(left.m_data,other.m_data) > 0);
    }
    inline bool operator <(const string& left, const string& other){
         return (std::strcmp(left.m_data,other.m_data) < 0);
    }
    inline bool operator >= (const string& left, const string& other){
        return (std::strcmp(left.m_data,other.m_data) > 0)||(std::strcmp(left.m_data,other.m_data) == 0);
    }
    inline bool operator<=(const string& left, const string& other){
        return (std::strcmp(left.m_data,other.m_data) < 0)||(std::strcmp(left.m_data,other.m_data) == 0);
   
    }
    inline bool operator==(const string& left, const string& other) {
         return (std::strcmp(left.m_data,other.m_data) == 0);
    }
    inline bool operator!=(const string& left, const string& other) {
         return !(operator==(left,other));
    }
}



#endif // _EXERCISE_H

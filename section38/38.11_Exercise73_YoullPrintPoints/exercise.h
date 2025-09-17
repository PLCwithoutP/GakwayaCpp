#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

namespace CU{

	class Point_nD{
        friend std::ostream& operator<< (std::ostream& os, const Point_nD& p);
		public : 
            Point_nD(std::initializer_list<double> list ) {
                    m_size= list.size();
                    m_data = new double[m_size];
                    for(unsigned int i{} ;  i < m_size; ++i){
                        m_data[i] = *(list.begin() + i) ;
                    }
                
            }

            Point_nD(const Point_nD& source) {
                m_size = source.size();
                m_data = new double[m_size];
                for(unsigned int i{} ;  i < m_size; ++i){
                        //m_data[i] = source.at(i) ;
                        m_data[i] = source[i];
                }
            }


            ~Point_nD(){
                delete[] m_data;
            }

            /*
            double at(unsigned int index) const{
                return m_data[index];
            }
            */
            void set( unsigned int index, double value){
                m_data[index] = value;
            }

            unsigned int size() const{
                return m_size;
            }

            void print() const{
                std::cout << "Point [ ";
                for(unsigned int i{} ;  i < m_size; ++i){
                std::cout << m_data[i] << " ";
                }
                std::cout << "]";
            }


            double operator[] (unsigned int index) const{
                return m_data[index];
            }

		private : 
            unsigned int m_size;
            double* m_data;
	};


	inline Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand){
		Point_nD tmp(left_operand);
		for(unsigned int i{} ;  i < left_operand.size(); ++i){
			//tmp.set(i, tmp.at(i) + right_operand.at(i)); 	
			tmp.set(i,tmp[i] +right_operand[i])	;
        }
		return tmp;
	}
	
	//YOU WILL PUT YOUR CODE BELOW THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE

    inline std::ostream& operator<< (std::ostream& os, const Point_nD& p)
    {
        os << "Point [ ";
        for (size_t i{}; i < p.size(); ++i)
        {
            os << p[i] << " ";
        }
        os << "]";
        return os;
    }

	//YOU WILL PUT YOUR CODE ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
}


inline void use_multi_d_point( const CU::Point_nD& p){
	std::cout << p;
}


#endif // _EXERCISE_H

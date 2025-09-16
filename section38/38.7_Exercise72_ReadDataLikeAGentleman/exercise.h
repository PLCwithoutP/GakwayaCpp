#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

namespace CU{

	class Point_nD{
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
              		m_data[i] = source[i] ; // FIX NEEDED HERE
					 
        	}
		}


		~Point_nD(){
			delete[] m_data;
		}


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
		
		//YOU WILL PUT YOUR SUBSCRIPT OPERATOR BELOW THIS LINE
		//DON'T MODIFY ANYTHING ABOVE THIS LINE
        double operator[](unsigned int index) const
        {
            if (index == 0 || index == 1 || index == 2)
            {
                return m_data[index];
            }
            else
            {
                return 0;
            }
        }

		//YOU WILL PUT YOUR SUBSCRIPT OPERATOR ABOVE THIS LINE
		//DON'T MODIFY ANYTHING BELOW THIS LINE

		private : 
		unsigned int m_size;
		double* m_data;
	};


	Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand);

}

#endif // _EXERCISE_H

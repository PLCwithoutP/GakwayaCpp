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
              		m_data[i] = source.at(i) ;
        	}
		}


		~Point_nD(){
			delete[] m_data;
		}

		double at(unsigned int index) const{
			return m_data[index];
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
        friend Point_nD operator+(Point_nD& left, Point_nD& right);
		private : 
		unsigned int m_size;
		double* m_data;
	};
	
	   //YOU WILL PUT YOUR CODE ABOVE THIS LINE
    //YOU CAN'T ADD MORE METHODS OR MEMBERS TO THE CLASS
    //DON'T MODIFY ANYTHING BELOW THIS LINE

    inline Point_nD operator+(Point_nD& left, Point_nD& right)
    {
        Point_nD temp(left);
        for(unsigned int i{} ;  i < temp.size(); ++i){
            temp.set(i, left.at(i) + right.at(i));
        }
        return temp;
    }

    //YOU WILL PUT YOUR CODE ABOVE THIS LINE
    //YOU CAN'T ADD MORE METHODS OR MEMBERS TO THE CLASS
    //DON'T MODIFY ANYTHING BELOW THIS LINE
}



#endif // _EXERCISE_H

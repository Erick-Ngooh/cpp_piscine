#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		Array(void){
			_array = NULL;
		}
		Array(unsigned int n){
			if (n)
				_array = new T(n);
			else
				_array = NULL;
		}
		Array(T const &src){
			_array = new T(src.size());
			for (int i = 0; src._array[i]; i++)
				_array[i] = src._array[i];
		}
	private:
		T	_array;
};

#endif

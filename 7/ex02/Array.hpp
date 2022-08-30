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
			_size = 0;
		}
		Array(unsigned int n){
			if (n)
			{
				_array = new T[n];
				_size = n;
			}
			else
			{
				_array = NULL;
				_size = 0;
			}
		}
		Array(Array const &src){
			*this = src;
		}
		~Array(void){
			if (_size)
				delete [] _array;
		}
		unsigned int size( void ){
			return _size;
		}
		class Overflow : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "Possible buffer overflow";
				}
		};
		Array &operator=(Array const &src){
			if (_size)
				delete [] _array;
			if (src._size)
			{
				_array = new T[src._size];
				for (int i = 0; src._array[i]; i++)
					_array[i] = src._array[i];
			}
			_size = src._size;
			return *this;
		}
		T & operator[]( unsigned int index ){
			if (!_size || index >= _size)
				throw(Overflow());
			else
				return _array[index];
		}
	private:
		T	*_array;
		unsigned int	_size;
};

#endif

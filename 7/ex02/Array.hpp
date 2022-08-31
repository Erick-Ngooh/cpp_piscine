#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <stdlib.h>

template<typename T>
class Array
{
	public:
		Array(void){
			_array = NULL;
			_size = 0;
		}
		Array(unsigned int n){
			std::cout << "construct size equal " << _size << std::endl;
			if (n > 0)
			{
				_array = new T[n];
				_size = n;
			}
			else
			{
				_array = NULL;
				_size = 0;
			}
			std::cout << "construct n equal " << n << std::endl;
			std::cout << "after construct size equal " << _size << std::endl;
		}
		Array(Array const &src){
			std::cout << "Constructeur copy\n";
			_size = 0;
			*this = src;
			std::cout << "Constructeur copy end\n";
		}
		~Array(void){
			if (_size)
			{
				std::cout << "before destructor\n";
				delete [] _array;
				std::cout << "after destructor\n";
			}
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
			if (_size > 0)
			{
				std::cout << "size equal = " << _size << std::endl;
				std::cout << "before = _size\n";
				delete [] _array;
				std::cout << "after = _size\n";
			}
			if (src._size > 0)
			{
				std::cout << "src.size = " << src._size << std::endl;
				_array = new T[src._size];
				std::cout << "after malloc" << std::endl;
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

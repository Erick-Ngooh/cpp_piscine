#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>

class NoMatch : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template<typename T>
typename T::iterator easyfind(T &src, int find)
{
	typename T::iterator it;
	typename T::iterator ite = src.end();
	for (it = src.begin(); it != src.end(); it++)
		if (*it == find)
			return it;
	throw (NoMatch());
}

#endif

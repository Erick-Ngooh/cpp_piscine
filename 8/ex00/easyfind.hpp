#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>

class NoMatch : public std::exception
{
    public:
        virtual const char* what() const throw();
};

template< typename T >
typename T::iterator    easyfind(T & src, int occurence)
{
    typename T::iterator it;;
    typename T::iterator ite = src.end();
    for (it = src.begin(); it != ite; it++)
        if (*it == occurence)
            return it;
    throw NoMatch();
}

#endif

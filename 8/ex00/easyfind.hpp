/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <cmarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:14:25 by cmarouf           #+#    #+#             */
/*   Updated: 2022/06/21 15:53:15 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define BLACK   "\033[1m\033[30m"
# define RED     "\033[1m\033[31m"
# define GREEN   "\033[1m\033[32m"
# define YELLOW  "\033[1m\033[33m"
# define BLUE    "\033[1m\033[34m"
# define MAGENTA "\033[1m\033[35m"
# define CYAN    "\033[1m\033[36m"
# define WHITE   "\033[1m\033[37m"

# include <exception>

class NoNeedle : public std::exception
{
    public:
        virtual const char* what() const throw();
};

template< typename T >
typename T::iterator    easyfind(T & haystack, int needle)
{
    typename T::iterator it = haystack.begin();
    for ( ; it != haystack.end() ; it++)
        if (*it == needle)
            return it;
    throw(NoNeedle());
}

#endif
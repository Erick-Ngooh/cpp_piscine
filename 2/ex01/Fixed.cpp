/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:30:06 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/12 18:07:08 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int    Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fix);
}

void    Fixed::setRawBits( int const raw )
{
    this->_fix = raw;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->_fix) * static_cast<float>(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (this->_fix >> this->_bits);
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const integer )
{
    this->_fix = integer << this->_bits;
}

Fixed::Fixed( float const floating )
{
    this->_fix = floating * (1 << this->_bits);
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

/*************************************************************/
/*                      ASSIGNMENT OPERATOR                  */
/*************************************************************/
Fixed & Fixed::operator=( Fixed const & src )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fix = src.getRawBits();
    return (*this);
}

std::ostream& operator<<( std::ostream &nstream, Fixed const src )
{
    nstream << src.toFloat();
    return (nstream);
}

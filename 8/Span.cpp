#include "Span.hpp"

void    Span::addNumber(int num)
{
    if (_used < _size)
    {
        _v.push_back(num);
        _used++;
    }
    else {
        throw FullVector();
    }
}

int Span::shortestSpan()
{

}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Span::Span( void ) : _v(0), _size(0), _used(0)
{
}

Span::Span(unsigned int N) : _v(N), _size(N), _used(0)
{

}

Span::Span( Span const & src )
{
    *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Span::~Span( void )
{
}

/*************************************************************/
/*                      ASSIGNMENT OPERATOR                  */
/*************************************************************/
Span & Span::operator=( Span const & src )
{
    return (*this);
}


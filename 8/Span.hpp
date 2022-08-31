#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <vector>
#include <iostream>

class Span
{
   public:
      Span( void );
      Span( unsigned int N );
      ~Span( void );
      Span( Span const & src );
      Span & operator=( Span const & src );

      class FullVector : public std::exception
   {
      public:
         virtual const char *what() const throw();
   };
      class EmptyVector : public std::exception
   {
      public:
         virtual const char *what() const throw();
   };
      void addNumber(int num);
      int shortestSpan(void);
      int longestSpan(void);
   private:
      std::vector<int> _v;
      unsigned int   _size;
      unsigned int   _used;
   protected:
};

#endif


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
   Class GradeTooHighException : public std::exception
   {
      public:
         virtual const char* what() const throw(high)
         {
            return ("Grade is too high");
         }
   }
   Class GradeTooLowException : public std::exception
   {
      public:
         virtual const char* what() const throw(low)
         {
            return ("Grade is too low");
         }
   }
   public:
   Bureaucrat(std::string name, int grade);
   ~Bureaucrat();
   std::string getName( void );
   int   getGrade( void );
   void  upgrade( void );
   void  downgrade( void );
   private:
   std::string const _name;
   int   _grade;
   protected:
};

#endif


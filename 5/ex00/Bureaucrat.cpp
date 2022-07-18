#include "Bureaucrat.hpp"

void  Bureaucrat::upgrade( void )
{
   _grade++;
   if (_grade > 150)
      throw GradeTooHighException();
}

void  Bureaucrat::downgrade( void )
{
   _grade--;
   if (_grade < 1)
      throw GradeTooLowException();
}

std::string Bureaucrat::getName( void )
{
   return (_name);
}

int   Bureaucrat::getGrade( void )
{
   return (_grade);
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
   if (grade < 1)
      throw GradeTooLowException();
   if (grade > 150)
      throw GradeTooHighException();
   _grade = grade;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Bureaucrat::~Bureaucrat()
{
}

void  operator<<(Bureaucrat &crat)
{
   std::cout << _name << ", bureaucrat grade " << _grade << std::endl;
}

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName( void ) const {
   return (_name);
}

int   Bureaucrat::getGrade( void ) const {
   return (_grade);
}

void  Bureaucrat::upgrade( void )
{
   std::cout << "Upgrading " << getName() << " from grade "
      << getGrade() << " to " << getGrade() - 1 << std::endl;
   _grade--;
   if (_grade < 1)
      throw GradeTooHighException();
}

void  Bureaucrat::downgrade( void )
{
   std::cout << "Downgrading " << getName() << " from grade "
      << getGrade() << " to " << getGrade() + 1 << std::endl;
   _grade++;
   if (_grade > 150)
      throw GradeTooLowException();
}

void  Bureaucrat::signForm(Form &form)
{
   if (_grade > form.getSignGrade())
   {
      std::cout << "Bureaucrat " << getName() << " couldn't sign "
         << form.getName() << " because grade is too low" << std::endl;
      throw GradeTooLowException();
   }
   form.changeStatus();
   std::cout << "Bureaucrat " << getName() << " signed " << form.getName() << std::endl;
}

void  Bureaucrat::executeForm(Form const &form)
{
   if (_grade > form.getExecGrade() || !form.getStatus())
   {
      std::cout << "Bureaucrat " << getName() << " couldn't execute "
         << form.getName() << " because grade is too low" << std::endl;
      throw GradeTooLowException();
   }
   form.execute();
   std::cout << _name << " executed " << form.getName() << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
   std::cout << "Bureaucrat constructor called" << std::endl;
   if (grade < 1)
      throw GradeTooHighException();
   if (grade > 150)
      throw GradeTooLowException();
   _grade = grade;
   std::cout << "Bureaucrat constructor complete" << std::endl << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Bureaucrat::~Bureaucrat()
{
   std::cout << "Bureaucrat destructor called" << std::endl << std::endl;
}

/*************************************************************/
/*                         OPERATOR                          */
/*************************************************************/

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau)
{
   nstream << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
   return (nstream);
}

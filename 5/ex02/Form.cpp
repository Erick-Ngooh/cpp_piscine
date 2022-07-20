#include "Form.hpp"

int   Form::getSignGrade( void ) const {
   return (_sign);
}

int   Form::getExecGrade( void ) const {
   return (_exec);
}

bool Form::getStatus( void ) const {
   return (_status);
}

std::string const &Form::getName( void ) const {
   return (_name);
}

void  Form::changeStatus( void )
{
   _status = true;
}

void  Form::beSigned(Bureaucrat &bureau)
{
   bureau.signForm(*this);
}

void  Form::beExec(Bureaucrat &bureau)
{
   bureau.execForm(*this);
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Form::Form(std::string name, int sign, int exec) : _name(name), _sign(sign), _exec(exec)
{
   std::cout << "Form constructor called" << std::endl;
   if (sign < 1 || exec < 1)
      throw (GradeTooHighException());
   else if (sign > 150 || exec > 150)
      throw (GradeTooLowException());
   _status = false;
   std::cout << "Form constructor complete" << std::endl << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Form::~Form()
{
   std::cout << "Form destructor called" << std::endl;
}

/*************************************************************/
/*                         OPERATOR                          */
/*************************************************************/

std::ostream &operator<<(std::ostream &nstream, Form &form)
{
   nstream << std::endl << "name : " << form.getName() << std::endl
      << "status : " << std::boolalpha << form.getStatus() << std::endl
      << "required grade for signature : " << form.getSignGrade() << std::endl
      << "required grade for execution : " << form.getExecGrade() << std::endl;
   return (nstream);
}

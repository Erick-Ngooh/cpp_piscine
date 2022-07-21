#include "PresidentialPardonForm.hpp"

void  PresidentialPardonForm::execute( void ) const
{
   std::cout << _target << " have been forgiven by Zaphod Beeblebrox." << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("PresidentialPardonForm", 25, 5), _target(name)
{
   std::cout << "Presidential constructor called" << std::endl << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
PresidentialPardonForm::~PresidentialPardonForm()
{
   std::cout << "Presidential destructor called" << std::endl;
}

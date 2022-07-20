#include "PresidentialPardonForm.hpp"

void  PresidentialPardonForm::execute(std::string target)
{
   std::cout << target << " have been forgiven by Zaphod Beeblebrox." << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
PresidentialPardonForm::PresidentialPardonForm(std::string name) : _name(name), _sign(72), _exec(45)
{
   _status = false;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
PresidentialPardonForm::~PresidentialPardonForm()
{
}

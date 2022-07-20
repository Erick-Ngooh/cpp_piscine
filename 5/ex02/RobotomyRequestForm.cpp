#include "RobotomyRequestForm.hpp"

void  RobotomyRequestForm::execute(std::string target)
{
   if (rand() % 2)
      std::cout << target << " successfully recovered from is robotomy" << std::endl;
   else
      std::cout << target << " looks very alive, do not worry if he starts acting strange" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
RobotomyRequestForm::RobotomyRequestForm(std::string name) : _name(name), _sign(72), _exec(45)
{
   _status = false;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
RobotomyRequestForm::~RobotomyRequestForm()
{
}


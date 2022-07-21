#include "Intern.hpp"

Form  *Intern::makeShrub(std::string target)
{
   return new ShrubberyCreationForm(target);
}

Form  *Intern::makeRobot(std::string target)
{
   return new RobotomyRequestForm(target);
}

Form *Intern::makePresident(std::string target)
{
   return new PresidentialPardonForm(target);
}

Form  *Intern::makeForm(std::string name, std::string target)
{
   for (int i = 0; i < 3; i++)
   {
      if (name.compare(_tabString[i]) == 0)
      {
         std::cout << "Intern creates " << name << std::endl;
         return ((this->*_tabFunc[i])(target));
      }
   }
   throw BadNameException();
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Intern::Intern()
{
   _tabString[0] = "ShrubberyCreationForm";
   _tabString[1] = "RobotomyRequestForm";
   _tabString[2] = "PresidentialPardonForm";

   _tabFunc[0] = &Intern::makeShrub;
   _tabFunc[1] = &Intern::makeRobot;
   _tabFunc[2] = &Intern::makePresident;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
/*Intern::~Intern()
{
}
*/

const char* Intern::BadNameException::what()const throw(){
	return ("Wrong form name!");
}

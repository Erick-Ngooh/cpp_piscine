#include "ShrubberyCreationForm.hpp"

void  ShrubberyCreationForm::execute(void) const
{
   std::ofstream file(_target.c_str());

   if (file.fail())
   {
      std::cout << "Failed to create " << _target << " file" << std::endl;
      return ;
   }
   file << "               ,@@@@@@@," << std::endl
      << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
      << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
      << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
      << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
      << "   %&&%/ %&\%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
      << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
      << "       |o|        | |         | |" << std::endl
      << "       |.|        | |         | |" << std::endl
      << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
   file.close();
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("ShrubberyCreationForm", 145, 137), _target(name + "_shrubbery")
{
   std::cout << "Shrubbery constructor called" << std::endl << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ShrubberyCreationForm::~ShrubberyCreationForm()
{
   std::cout << "Shrubbery destructor called" << std::endl;
}

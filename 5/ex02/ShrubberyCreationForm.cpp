#include "ShrubberyCreationForm.hpp"

void  ShrubberyCreationFrom::execute(std::string target)
{
   ofstream file(target + "_shrubbery");

   if (file.fail())
   {
      std::cout << "Failed to create " << target << "_shrubbery file" << std::endl;
      return ;
   }
   file << "               ,@@@@@@@," << std::endl
      << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
      << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o" << std::endl
      << "   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'" << std::endl
      << "   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'" << std::endl
      << "   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'" << std::endl
      << "   `&%\ ` /%&'    |.|        \ '|8'" << std::endl
      << "       |o|        | |         | |" << std::endl
      << "       |.|        | |         | |" << std::endl
      << "    \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_" << std::endl;
   file.close;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : _name(name), _sign(145), _exec(137)
{
   _status = false;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

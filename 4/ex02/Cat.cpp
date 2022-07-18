#include "Cat.hpp"

void  Cat::makeSound( void ) const
{
   std::cout << "Cat says : Purrrr purrrrrr meoww" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Cat::Cat()
{
   std::cout << "\033[1;33m" << "Default Cat constructor called" << "\033[0m" << std::endl;
   _type = "Cat";
   _brain = new Brain();
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Cat::~Cat()
{
   std::cout << "\033[1;33m" << "Cat destructor called" << "\033[0m" << std::endl;
   delete _brain;
}

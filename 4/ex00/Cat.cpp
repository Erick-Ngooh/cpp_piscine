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
   std::cout << "Default Cat constructor called" << std::endl;
   _type = "Cat";
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Cat::~Cat()
{
   std::cout << "Cat destructor called" << std::endl;
}


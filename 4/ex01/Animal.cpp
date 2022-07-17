#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::string Animal::getType( void ) const
{
   return (_type);
}

void  Animal::makeSound( void ) const
{
   std::cout << "Animal says : ???" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Animal::Animal()
{
   std::cout << "\033[1;31m" << "Default Animal constructor called" << "\033[0m" << std::endl;
   _type = "Animal";
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Animal::~Animal()
{
   std::cout << "\033[1;31m" << "Animal destructor called" << "\033[0m" << std::endl;
}


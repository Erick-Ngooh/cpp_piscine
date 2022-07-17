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
   std::cout << "Default Animal constructor called" << std::endl;
   _type = "Animal";
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Animal::~Animal()
{
   std::cout << "Animal destructor called" << std::endl;
}


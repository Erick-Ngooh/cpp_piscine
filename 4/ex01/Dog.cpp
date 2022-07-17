#include "Dog.hpp"

void  Dog::makeSound( void ) const
{
   std::cout << "Dog says : Wuf wuf" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Dog::Dog()
{
   std::cout << "\033[1;38m" << "Default Dog constructor called" << "\033[0m" << std::endl;
   _type = "Dog";
   _brain = new Brain();
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Dog::~Dog()
{
   std::cout << "\033[1;38m" << "Dog destructor called" << "\033[0m" << std::endl;
   delete _brain;
}


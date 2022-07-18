#include "WrongCat.hpp"

void  WrongCat::makeSound( void ) const
{
   std::cout << "WrongCat says : wwoem rrrrrup rrrrruP" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
WrongCat::WrongCat()
{
   std::cout << "Default WrongCat constructor called" << std::endl;
   _type = "WrongCat";
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
WrongCat::~WrongCat()
{
   std::cout << "WrongCat destructor called" << std::endl;
}


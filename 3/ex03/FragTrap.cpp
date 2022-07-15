#include "FragTrap.hpp"

void  FragTrap::highFivesGuys( void )
{
   std::cout << "Please give me a high five !" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   std::cout << "Creating a new Fragtrap from a Claptrap" << std::endl;
   _hp = 100;
   _mp = 100;
   _ad = 30;
   _name = name;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
FragTrap::~FragTrap()
{
   std::cout << "FragTrap destructor" << std::endl;
}


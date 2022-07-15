#include "ScavTrap.hpp"

void  ScavTrap::guardGate( void )
{
   std::cout << _name << " entered in Gate keeper mode" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
   std::cout << "Creating a new ScavTrap from a Claptrap" << std::endl;
   _hp = 100;
   _mp = 50;
   _ad = 20;
   _name = name;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ScavTrap::~ScavTrap()
{
   std::cout << "ScavTrap destructor" << std::endl;
}

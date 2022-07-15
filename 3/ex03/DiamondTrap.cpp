#include "DiamondTrap.hpp"

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
   _name = name + "_clap_name";
   _hp = FragTrap._hp;
   _mp = ScavTrap._mp;
   _ad = FragTrap._ad;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
DiamondTrap::~DiamondTrap()
{
}


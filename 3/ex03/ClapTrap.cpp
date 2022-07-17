/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:56:10 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/16 23:21:20 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void  ClapTrap::beRepaired(unsigned int amount)
{
   _hp += amount;
   std::cout << "\033[1;33m";
   if (_hp >= 100)
   {
      _hp = 10;
      std::cout << "ClapTrap " << _name <<" doesn't need to be repaired" <<
         std::endl;
   }
   else if (_hp > 0)
   {
      std::cout << "ClapTrap " << _name << " healed himself back to " <<
         _hp << " hit points" << std::endl;
   }
   else
   {
      std::cout << "\033[1;35m";
      std::cout << _name << " is dead." << std::endl;
   }
   std::cout << "\033[0m";
}

void  ClapTrap::takeDamage(unsigned int amount)
{
   _hp = _hp - amount;
   std::cout << "\033[1;31m";
   if (_hp <= 0)
   {
      std::cout << "\033[1;35m";
      std::cout << _name << " is dead." << std::endl;
   }
   else
   {
      std::cout << "ClapTrap " << _name << " lost " << amount <<
         " hit points and is now sitting at " << _hp << " hit points" <<
         std::endl;
   }
   std::cout << "\033[0m";
}

void  ClapTrap::attack(const std::string &target)
{
   if (_hp > 0)
   {
      std::cout << "\033[1;36m";
      std::cout << "ClapTrap " << _name << " attacks " << target <<
       ", causing " << ++_ad << " points of damage!" << std::endl;
      std::cout << "\033[0m";
   }
}

unsigned int   ClapTrap::getAttack( void )
{
   return (_ad);
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
ClapTrap::ClapTrap(std::string new_name)
{
   _hp = 10;
   _mp = 10;
   _ad = 0;
   _name = new_name;
   std::cout << "A new ClapTrap called '" << new_name <<
      "' appeared" << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ClapTrap::~ClapTrap()
{
   std::cout << "ClapTrap " << _name << " destructor" << std::endl;
}

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
   public:
      ClapTrap(std::string new_name);
      ~ClapTrap();
      void  attack(const std::string &target);
      void  takeDamage(unsigned int amount);
      void  beRepaired(unsigned int amount);
      unsigned int   getAttack( void );
   private:
   protected:
      std::string _name;
      int   _hp;
      int   _mp;
      int   _ad;
};

#endif
